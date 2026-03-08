/*
 * XREFs of ACPIRangeValidatePciMemoryResource @ 0x1C003B0EC
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C003B3A4 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C003B844 (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_ddiiii @ 0x1C003B93C (WPP_RECORDER_SF_ddiiii.c)
 *     WPP_RECORDER_SF_diiidiiii @ 0x1C003BA94 (WPP_RECORDER_SF_diiidiiii.c)
 */

int __fastcall ACPIRangeValidatePciMemoryResource(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  _UNKNOWN **v4; // rax
  _DWORD *v5; // rbx
  char v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned int v12; // esi
  char v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // edx
  char v18; // di
  char v19; // r15
  int v20; // edx
  int v22; // [rsp+28h] [rbp-49h]
  unsigned __int64 MaximumAddress; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+80h] [rbp+Fh] BYREF
  _UNKNOWN **v25; // [rsp+88h] [rbp+17h]
  PIO_RESOURCE_DESCRIPTOR Descriptor; // [rsp+90h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned __int64 Alignment; // [rsp+E8h] [rbp+77h] BYREF
  _DWORD *v30; // [rsp+F0h] [rbp+7Fh]

  v4 = &retaddr;
  v30 = a4;
  v5 = E820Info;
  v6 = a2;
  v7 = a4;
  MinimumAddress = 0LL;
  v8 = a1;
  MaximumAddress = 0LL;
  Alignment = 0LL;
  if ( E820Info )
  {
    v9 = 32LL * a2;
    Descriptor = (PIO_RESOURCE_DESCRIPTOR)(v9 + a1 + 8);
    v4 = (_UNKNOWN **)RtlIoDecodeMemIoResource(Descriptor, &Alignment, &MinimumAddress, &MaximumAddress);
    v12 = 0;
    v13 = (char)v4;
    v25 = v4;
    if ( *((_QWORD *)v5 + 1) )
    {
      v14 = 0LL;
      do
      {
        v15 = 3 * v14;
        v16 = v5[6 * v14 + 8];
        if ( v16 != 2 )
        {
          if ( v16 == 4 || (v17 = v16, v16 == 3) )
          {
            v17 = v16;
            if ( v5[2 * v15 + 7] )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v4) = WPP_RECORDER_SF_ddi(
                                WPP_GLOBAL_Control->DeviceExtension,
                                v16,
                                v10,
                                v11,
                                v22,
                                v12,
                                v16,
                                *(_QWORD *)&v5[2 * v15 + 6]);
                v17 = v5[2 * v15 + 8];
                v13 = (char)v25;
              }
              v5[2 * v15 + 7] = 0;
            }
          }
          v10 = *(_QWORD *)&v5[2 * v15 + 4];
          if ( MaximumAddress >= v10 )
          {
            v11 = v10 + *(_QWORD *)&v5[2 * v15 + 6];
            if ( MinimumAddress < v11 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_diiidiiii(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v17,
                  v10,
                  v11,
                  v22,
                  v12,
                  v17,
                  v10,
                  v11,
                  v6,
                  *(_QWORD *)(v9 + v8 + 24),
                  *(_QWORD *)(v9 + v8 + 32),
                  v13,
                  Alignment);
              LODWORD(v4) = AcpiOverrideAttributes;
              if ( (AcpiOverrideAttributes & 1) != 0 && v5[2 * v15 + 8] == 4 )
              {
                v4 = *(_UNKNOWN ***)&v5[2 * v15 + 4];
                if ( MaximumAddress >= (unsigned __int64)v4 )
                {
                  v18 = MinimumAddress;
                  if ( MinimumAddress < (unsigned __int64)v4 )
                  {
                    v19 = (_BYTE)v4 - 1;
                    LODWORD(v4) = RtlIoEncodeMemIoResource(
                                    Descriptor,
                                    *(_BYTE *)(v9 + a1 + 9),
                                    (ULONGLONG)v4 - MinimumAddress,
                                    Alignment,
                                    MinimumAddress,
                                    (ULONGLONG)v4 - 1);
                    if ( (int)v4 < 0 )
                      return (int)v4;
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_25;
                    LODWORD(v4) = WPP_RECORDER_SF_ddiiii(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    v20,
                                    v10,
                                    v11,
                                    v22,
                                    v6,
                                    v6,
                                    v18,
                                    v19,
                                    v19 - v18 + 1,
                                    Alignment);
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v17) = 4;
                  LODWORD(v4) = WPP_RECORDER_SF_d(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  v17,
                                  22,
                                  13,
                                  (__int64)&WPP_1fd0c010928a3334a25fba642ba00601_Traceguids,
                                  v12);
                }
              }
              else
              {
                ++*v7;
              }
            }
          }
        }
LABEL_25:
        v7 = v30;
        ++v12;
        v8 = a1;
        v13 = (char)v25;
        v14 = v12;
      }
      while ( (unsigned __int64)v12 < *((_QWORD *)v5 + 1) );
    }
  }
  return (int)v4;
}
