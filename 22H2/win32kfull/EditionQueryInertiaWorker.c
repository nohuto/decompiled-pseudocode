/*
 * XREFs of EditionQueryInertiaWorker @ 0x1C0217D50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006B87C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C00FB848 (DCEPtInRect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DCEHitTestWindow @ 0x1C01E4674 (DCEHitTestWindow.c)
 */

__int64 __fastcall EditionQueryInertiaWorker(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  int *v6; // rcx
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
  {
    v9 = a1;
    if ( !(unsigned int)DCEHitTestWindow((int *)(a2 + 40), a2 + 56, (int *)&v9, 0LL) )
      return 0LL;
  }
  if ( (!v4 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v4)) && (*(_DWORD *)(a2 + 184) & 4) == 0 )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 147);
  }
  if ( !v4 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v4) )
    return 1LL;
  v5 = *(_QWORD *)(v4 + 216);
  v6 = (int *)(*(_QWORD *)(v4 + 40) + 88LL);
  v9 = a1;
  if ( v5 ? DCEHitTestWindow(v6, v5, (int *)&v9, 0LL) : DCEPtInRect(v6, a1) )
    return 1LL;
  else
    return 0LL;
}
