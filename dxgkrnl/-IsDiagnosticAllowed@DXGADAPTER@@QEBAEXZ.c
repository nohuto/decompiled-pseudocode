/*
 * XREFs of ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B3618
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C03A82C8 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C003EFBC (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003EFF4 (-IsCurrentProcessAdmin@@YAEXZ.c)
 */

bool __fastcall DXGADAPTER::IsDiagnosticAllowed(DXGADAPTER *this, struct _LUID *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int CurrentProcessSessionId; // eax
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  DXGADAPTER::IsAdapterSessionized(this, a2, 0LL, &v8);
  if ( v8 == 0x100000000LL || IsCurrentProcessAdmin() )
    return 1;
  if ( v8 == 0x200000000LL )
    return IsCurrentConsoleSession();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2, v4, v5);
  return CurrentProcessSessionId == (_DWORD)v8;
}
