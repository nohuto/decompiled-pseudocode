/*
 * XREFs of EditionQueryInertiaWorker @ 0x1C02131E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C00F8768 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C016B5D8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

_BOOL8 __fastcall EditionQueryInertiaWorker(struct tagPOINT a1, __int64 a2)
{
  const struct tagWND *v4; // rdi
  const struct _D3DMATRIX *v5; // rdx
  const struct tagRECT *v6; // rcx
  char v7; // al
  struct tagPOINT v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = (const struct tagWND *)ValidateHwnd(*(_QWORD *)(a2 + 120));
  if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
  {
    v9 = a1;
    if ( !DCEHitTestWindow((const struct tagRECT *)(a2 + 40), (const struct _D3DMATRIX *)(a2 + 56), &v9, 0LL) )
      return 0LL;
  }
  if ( !v4 || (unsigned int)IsCompositionInputWindow(v4) )
  {
    if ( (*(_DWORD *)(a2 + 184) & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( !v4 )
      return 1LL;
  }
  if ( (unsigned int)IsCompositionInputWindow(v4) )
    return 1LL;
  v5 = (const struct _D3DMATRIX *)*((_QWORD *)v4 + 27);
  v6 = (const struct tagRECT *)(*((_QWORD *)v4 + 5) + 88LL);
  v9 = a1;
  v7 = v5 ? DCEHitTestWindow(v6, v5, &v9, 0LL) : DCEPtInRect(v6, a1);
  return v7 != 0;
}
