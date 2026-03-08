/*
 * XREFs of RIMGetDevicePropertiesLockfree @ 0x1C01A55D0
 * Callers:
 *     NtRIMGetDevicePropertiesLockfree @ 0x1C01A2020 (NtRIMGetDevicePropertiesLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C01A5390 (RIMGetDeviceProperties.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimCopyInstancePathFromRimDev @ 0x1C01A14E8 (rimCopyInstancePathFromRimDev.c)
 */

__int64 __fastcall RIMGetDevicePropertiesLockfree(char *a1, ULONG64 a2, int a3)
{
  int v5; // esi
  char *v6; // rdi
  int v7; // edx
  ULONG64 v8; // rax
  unsigned int v9; // r14d
  _WORD *v10; // rcx
  _WORD *v11; // r15
  _DWORD *v12; // rdx
  _QWORD *v13; // rdx
  _BYTE *v14; // rdx
  char v15; // al
  _DWORD *v16; // rcx
  ULONG64 v17; // rcx
  _DWORD *v18; // rcx
  ULONG64 v19; // rcx
  __int64 v20; // rax
  int v21; // r10d
  _DWORD *v22; // rdx
  _WORD *v23; // rdx
  _WORD *v24; // rdx
  _WORD *v25; // rdx
  _QWORD *v26; // rdx
  _DWORD *v27; // rdx
  PVOID Object[2]; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T Length[2]; // [rsp+30h] [rbp-58h]
  volatile void *Address[2]; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+50h] [rbp-38h]

  Object[0] = 0LL;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 1u, 1, Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object[0];
    if ( Object[0] )
      v6 = (char *)Object[0] + 72;
    Object[1] = v6;
    *(_OWORD *)Length = 0LL;
    *(_OWORD *)Address = 0LL;
    v32 = 0LL;
    if ( a3 )
    {
      v8 = a2;
      if ( a2 >= MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      *(_OWORD *)Length = *(_OWORD *)v8;
      *(_OWORD *)Address = *(_OWORD *)(v8 + 16);
      v32 = *(_QWORD *)(v8 + 32);
      v7 = Length[0];
    }
    else
    {
      v7 = *(_DWORD *)a2;
    }
    if ( v7 == 4 )
    {
      v9 = (*((unsigned __int16 *)v6 + 104) >> 1) + 1;
      if ( a3 )
      {
        v11 = Address[0];
        if ( !Address[0] )
        {
          v12 = (_DWORD *)(a2 + 8);
          if ( a2 + 8 >= MmUserProbeAddress )
            v12 = (_DWORD *)MmUserProbeAddress;
          *v12 = v9;
          goto LABEL_71;
        }
        if ( LODWORD(Length[1]) >= v9 && v9 > 2 )
        {
          ProbeForWrite(Address[0], LODWORD(Length[1]), 4u);
          rimCopyInstancePathFromRimDev(v11, (__int64)v6, v9);
          goto LABEL_71;
        }
      }
      else
      {
        v10 = *(_WORD **)(a2 + 16);
        if ( !v10 )
        {
          *(_DWORD *)(a2 + 8) = v9;
LABEL_71:
          ObfDereferenceObject(Object[0]);
          return (unsigned int)v5;
        }
        if ( *(_DWORD *)(a2 + 8) >= v9 && v9 > 2 )
        {
          rimCopyInstancePathFromRimDev(v10, (__int64)v6, v9);
          goto LABEL_71;
        }
      }
    }
    else
    {
      if ( v7 != 5 )
      {
        if ( v7 == 6 )
        {
          if ( a3 )
          {
            v14 = (_BYTE *)(a2 + 8);
            if ( a2 + 8 >= MmUserProbeAddress )
              v14 = (_BYTE *)MmUserProbeAddress;
            *v14 = -__CFSHR__(*((_DWORD *)v6 + 46), 14);
          }
          else
          {
            *(_BYTE *)(a2 + 8) = -__CFSHR__(*((_DWORD *)v6 + 46), 14);
          }
        }
        else
        {
          v15 = v6[48];
          if ( v15 == 1 )
          {
            if ( a3 )
            {
              v16 = (_DWORD *)a2;
              if ( a2 >= MmUserProbeAddress )
                v16 = (_DWORD *)MmUserProbeAddress;
              *v16 = 1;
              v17 = a2 + 8;
              if ( a2 + 8 >= MmUserProbeAddress )
                v17 = MmUserProbeAddress;
              *(_OWORD *)v17 = *(_OWORD *)(v6 + 456);
              *(_QWORD *)(v17 + 16) = *((_QWORD *)v6 + 59);
              *(_DWORD *)(v17 + 24) = *((_DWORD *)v6 + 120);
            }
            else
            {
              *(_DWORD *)a2 = 1;
              *(_OWORD *)(a2 + 8) = *(_OWORD *)(v6 + 456);
              *(_QWORD *)(a2 + 24) = *((_QWORD *)v6 + 59);
              *(_DWORD *)(a2 + 32) = *((_DWORD *)v6 + 120);
            }
          }
          else if ( v15 )
          {
            if ( v15 == 2 )
            {
              v20 = 0LL;
              v21 = 0;
              if ( *((_DWORD *)v6 + 334) )
              {
                v20 = *(_QWORD *)(v6 + 1868);
                v21 = *((_DWORD *)v6 + 470);
              }
              if ( a3 )
              {
                v22 = (_DWORD *)a2;
                if ( a2 >= MmUserProbeAddress )
                  v22 = (_DWORD *)MmUserProbeAddress;
                *v22 = 3;
                v23 = (_WORD *)(a2 + 8);
                if ( a2 + 8 >= MmUserProbeAddress )
                  v23 = (_WORD *)MmUserProbeAddress;
                *v23 = *(_WORD *)(*((_QWORD *)v6 + 57) + 110LL);
                v24 = (_WORD *)(a2 + 10);
                if ( a2 + 10 >= MmUserProbeAddress )
                  v24 = (_WORD *)MmUserProbeAddress;
                *v24 = *(_WORD *)(*((_QWORD *)v6 + 57) + 112LL);
                v25 = (_WORD *)(a2 + 12);
                if ( a2 + 12 >= MmUserProbeAddress )
                  v25 = (_WORD *)MmUserProbeAddress;
                *v25 = *(_WORD *)(*((_QWORD *)v6 + 57) + 114LL);
                v26 = (_QWORD *)(a2 + 16);
                if ( a2 + 16 >= MmUserProbeAddress )
                  v26 = (_QWORD *)MmUserProbeAddress;
                *v26 = v20;
                v27 = (_DWORD *)(a2 + 24);
                if ( a2 + 24 >= MmUserProbeAddress )
                  v27 = (_DWORD *)MmUserProbeAddress;
                *v27 = v21;
              }
              else
              {
                *(_DWORD *)a2 = 3;
                *(_WORD *)(a2 + 8) = *(_WORD *)(*((_QWORD *)v6 + 57) + 110LL);
                *(_WORD *)(a2 + 10) = *(_WORD *)(*((_QWORD *)v6 + 57) + 112LL);
                *(_WORD *)(a2 + 12) = *(_WORD *)(*((_QWORD *)v6 + 57) + 114LL);
                *(_QWORD *)(a2 + 16) = v20;
                *(_DWORD *)(a2 + 24) = v21;
              }
            }
          }
          else if ( a3 )
          {
            v18 = (_DWORD *)a2;
            if ( a2 >= MmUserProbeAddress )
              v18 = (_DWORD *)MmUserProbeAddress;
            *v18 = 2;
            v19 = a2 + 8;
            if ( a2 + 8 >= MmUserProbeAddress )
              v19 = MmUserProbeAddress;
            *(_QWORD *)v19 = *((_QWORD *)v6 + 57);
            *(_DWORD *)(v19 + 8) = *((_DWORD *)v6 + 116);
          }
          else
          {
            *(_DWORD *)a2 = 2;
            *(_QWORD *)(a2 + 8) = *((_QWORD *)v6 + 57);
            *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 116);
          }
        }
        goto LABEL_71;
      }
      if ( (*((_DWORD *)v6 + 50) & 0x80u) != 0 )
      {
        if ( a3 )
        {
          v13 = (_QWORD *)(a2 + 8);
          if ( a2 + 8 >= MmUserProbeAddress )
            v13 = (_QWORD *)MmUserProbeAddress;
          *v13 = *(_QWORD *)(*((_QWORD *)v6 + 59) + 784LL);
        }
        else
        {
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(*((_QWORD *)v6 + 59) + 784LL);
        }
        goto LABEL_71;
      }
    }
    v5 = -1073741811;
    goto LABEL_71;
  }
  return (unsigned int)v5;
}
