/*
 * XREFs of IopGetBootDiskInformationLite @ 0x140B4CFA8
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x140810D80 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     IopCheckDiskName @ 0x140386144 (IopCheckDiskName.c)
 *     IopAddBootDiskInformation @ 0x140386334 (IopAddBootDiskInformation.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VhdiGetDiskParameters @ 0x140B977A4 (VhdiGetDiskParameters.c)
 *     CimfsGetDiskParameters @ 0x140B97ED0 (CimfsGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  int DiskParameters; // edi
  int v3; // edx
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  unsigned int *Pool2; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  unsigned int v9; // r14d
  __int16 *v10; // rsi
  int *v11; // r12
  bool v12; // zf
  __int128 v13; // xmm0
  __int64 v14; // rcx
  int v16; // ecx
  int v17; // eax
  _BYTE v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v19; // [rsp+34h] [rbp-CCh] BYREF
  char v20; // [rsp+36h] [rbp-CAh]
  ULONG v21; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v22[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h]
  _OWORD *v24; // [rsp+60h] [rbp-A0h] BYREF
  STRING v25; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[8]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v27[18]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v28[4]; // [rsp+110h] [rbp+10h] BYREF
  STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  STRING v30; // [rsp+130h] [rbp+30h] BYREF
  STRING v31; // [rsp+140h] [rbp+40h] BYREF

  v28[0] = 536871168;
  v19 = 0;
  v20 = 0;
  v23 = 0;
  v28[1] = 538968064;
  memset(v22, 0, sizeof(v22));
  v28[2] = 0x20000000;
  v25 = 0LL;
  memset(v27, 0, 0x8CuLL);
  v21 = 0;
  DiskParameters = 0;
  v24 = 0LL;
  v18[0] = 0;
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v30, *(PCSZ *)(KeLoaderBlock_0 + 192));
  RtlInitAnsiString(&v31, *(PCSZ *)(KeLoaderBlock_0 + 336));
  v3 = 3;
  v4 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v12 = v5[7] == 0LL;
    v16 = v3 + 1;
    v5 = (_QWORD *)*v5;
    if ( v12 )
      v16 = v3;
    v3 = v16;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, (unsigned int)(28 * v3 + 4), 0x20206F49u);
  if ( Pool2 )
  {
    v7 = *(_QWORD **)(KeLoaderBlock_0 + 232);
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 != v7 )
    {
      do
      {
        RtlInitAnsiString(&v25, (PCSZ)v8[3]);
        v9 = 0;
        v10 = &v19;
        v11 = v28;
        do
        {
          if ( !*(_BYTE *)v10 && IopCheckDiskName(&v25, &DestinationString + v9, &v21) )
          {
            v12 = *((_BYTE *)v8 + 38) == 0;
            *(_DWORD *)&v22[4] = v21;
            v23 = *v11;
            *(_BYTE *)v10 = 1;
            if ( v12 )
            {
              v17 = *((_DWORD *)v8 + 4);
              *(_DWORD *)v22 = 0;
              *(_OWORD *)&v22[8] = 0LL;
              *(_DWORD *)&v22[8] = v17;
            }
            else
            {
              v13 = *(_OWORD *)(v8 + 5);
              *(_DWORD *)v22 = 1;
              *(_OWORD *)&v22[8] = v13;
            }
            IopAddBootDiskInformation(Pool2, (__int64)v22);
          }
          ++v9;
          v10 = (__int16 *)((char *)v10 + 1);
          ++v11;
        }
        while ( v9 < 3 );
        v14 = v8[7];
        if ( v14 )
        {
          DiskParameters = VhdiGetDiskParameters(v14, v27, &v24, v18, v26);
          if ( DiskParameters >= 0 || (DiskParameters = CimfsGetDiskParameters(v8[7], v27, &v24), DiskParameters >= 0) )
          {
            if ( !v18[0] )
            {
              *(_DWORD *)v22 = v27[0];
              *(_DWORD *)&v22[4] = v27[3];
              v23 = 0x400000;
              if ( LODWORD(v27[0]) )
              {
                if ( LODWORD(v27[0]) == 1 )
                  *(_OWORD *)&v22[8] = *v24;
              }
              else
              {
                *(_OWORD *)&v22[8] = 0LL;
                *(_DWORD *)&v22[8] = *(_DWORD *)v24;
              }
              IopAddBootDiskInformation(Pool2, (__int64)v22);
            }
          }
          else
          {
            DiskParameters = 0;
          }
        }
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != *(_QWORD **)(KeLoaderBlock_0 + 232) );
    }
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DiskParameters;
}
