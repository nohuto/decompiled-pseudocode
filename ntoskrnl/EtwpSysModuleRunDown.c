/*
 * XREFs of EtwpSysModuleRunDown @ 0x14080E368
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14080DD60 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     HvlQueryConnection @ 0x14037FC40 (HvlQueryConnection.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 */

__int64 __fastcall EtwpSysModuleRunDown(__int64 a1, char a2)
{
  __int16 v4; // ax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-51h] BYREF
  __int16 v12; // [rsp+58h] [rbp-39h]
  int v13; // [rsp+5Ah] [rbp-37h]
  __int16 v14; // [rsp+5Eh] [rbp-33h]
  _QWORD v15[8]; // [rsp+68h] [rbp-29h] BYREF
  ULONG_PTR *v16; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+1Fh]
  __int64 *v18; // [rsp+C8h] [rbp+37h]
  __int64 v19; // [rsp+D0h] [rbp+3Fh]

  v13 = 0;
  v14 = 0;
  memset(v15, 0, sizeof(v15));
  v10 = 0LL;
  if ( !a2 )
  {
    v6 = *(_DWORD *)a1;
    v7 = *(_QWORD *)(a1 + 1096);
    v16 = &PsNtosImageBase;
    v17 = 8LL;
    EtwpLogKernelEvent((__int64)&v16, v7, v6, 1u, 0x1421u, 0x401802u);
    if ( !(unsigned int)HvlQueryConnection(&v10) )
    {
      v8 = *(_DWORD *)a1;
      v9 = *(_QWORD *)(a1 + 1096);
      v16 = (ULONG_PTR *)&v10;
      v17 = 8LL;
      EtwpLogKernelEvent((__int64)&v16, v9, v8, 1u, 0x1422u, 0x401802u);
    }
  }
  v11[2] = a1;
  v11[1] = &v16;
  v11[0] = v15;
  v4 = 5123;
  if ( !a2 )
    v4 = 5124;
  v12 = v4;
  v17 = 56LL;
  v16 = v15;
  v19 = 2LL;
  v18 = &EtwpNull;
  *(_OWORD *)&v15[5] = 0LL;
  return MmEnumerateSystemImages(EtwpSystemImageEnumCallback, v11);
}
