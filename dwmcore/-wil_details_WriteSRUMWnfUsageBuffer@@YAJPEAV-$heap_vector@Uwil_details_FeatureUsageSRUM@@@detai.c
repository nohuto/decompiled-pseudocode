/*
 * XREFs of ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x18019770C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180193D10 (-_lambda_invoker_cdecl_@_lambda_5035b992506f4af81a770c5842624510_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x180110AE8 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180110B7C (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 */

__int64 __fastcall wil_details_WriteSRUMWnfUsageBuffer(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int WnfStateData; // ebx
  unsigned int updated; // edi
  int v6; // esi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // r10d
  __int64 v11; // rdi
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  int v15; // [rsp+20h] [rbp-E0h]
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17[3]; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v18[1024]; // [rsp+50h] [rbp-B0h] BYREF

  WnfStateData = 0;
  updated = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v6 = 0;
    do
    {
      v16 = 4096;
      WnfStateData = wil_details_NtQueryWnfStateData(
                       (__int64)&unk_180381BF0,
                       a2,
                       a3,
                       (__int64)v17,
                       (__int64)v18,
                       (__int64)&v16);
      if ( !WnfStateData )
      {
        v7 = v16;
        v8 = *a1;
        if ( v16 != 12 * (v16 / 0xCuLL) )
          v7 = 0LL;
        v9 = a1[1];
        v16 = v7;
        v10 = (unsigned int)v7 / 0xC;
        v11 = v8 + 12 * ((v9 - v8) / 0xCuLL);
        while ( v8 != v11 )
        {
          v12 = &v18[3 * v10];
          v13 = v18;
          if ( v18 == v12 )
          {
LABEL_11:
            if ( (unsigned __int64)(unsigned int)v7 + 12 <= 0x1000 )
            {
              v7 = (unsigned int)(v7 + 12);
              *(_QWORD *)v12 = *(_QWORD *)v8;
              ++v10;
              v12[2] = *(_DWORD *)(v8 + 8);
              v16 = v7;
            }
          }
          else
          {
            while ( *v13 != *(_DWORD *)v8 || *((_WORD *)v13 + 2) != *(_WORD *)(v8 + 4) )
            {
              v13 += 3;
              if ( v13 == v12 )
                goto LABEL_11;
            }
            v13[2] += *(_DWORD *)(v8 + 8);
            v7 = v16;
          }
          v8 += 12LL;
        }
        updated = wil_details_NtUpdateWnfStateData((__int64)&unk_180381BF0, (__int64)v18, v7, v7, v15, v17[0], 1);
      }
      ++v6;
    }
    while ( updated == -1073741823 && v6 < 100 && !WnfStateData );
  }
  if ( !WnfStateData )
    return updated;
  return WnfStateData;
}
