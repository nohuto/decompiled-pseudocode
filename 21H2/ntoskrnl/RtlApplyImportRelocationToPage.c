/*
 * XREFs of RtlApplyImportRelocationToPage @ 0x14021476C
 * Callers:
 *     MiApplyRetpolineFixups @ 0x140214824 (MiApplyRetpolineFixups.c)
 *     MiUpdateRetpolineImportFixups @ 0x140397BA0 (MiUpdateRetpolineImportFixups.c)
 * Callees:
 *     RtlpApplyGenericRetpolineFixup @ 0x1402149D0 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructImportRelocationFixup @ 0x140214A30 (RtlpConstructImportRelocationFixup.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlApplyImportRelocationToPage(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  __int16 v14; // [rsp+4Ch] [rbp-2Ch]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v10 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v10 = a2 + (*a5 & 0xFFF);
  RtlpConstructImportRelocationFixup(v10, a3, a4, (_DWORD)a5, a6, a8, (__int64)&v12);
  return RtlpApplyGenericRetpolineFixup(a1, 4096LL, &v12, (unsigned int)(v10 - a2));
}
