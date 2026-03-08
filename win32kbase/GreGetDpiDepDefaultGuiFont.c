/*
 * XREFs of GreGetDpiDepDefaultGuiFont @ 0x1C018C110
 * Callers:
 *     GreGetStockObject @ 0x1C0041A00 (GreGetStockObject.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     GetDpiDepStockObjectPlateauSlot @ 0x1C018C0A0 (GetDpiDepStockObjectPlateauSlot.c)
 */

__int64 __fastcall GreGetDpiDepDefaultGuiFont(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rax
  int DpiDepStockObjectPlateauSlot; // eax
  __int64 v7; // rax
  __int64 v8; // rbp

  v1 = 0LL;
  if ( (_DWORD)a1 != 17 )
    return v1;
  v2 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  v5 = SGDGetSessionState(v4);
  DpiDepStockObjectPlateauSlot = GetDpiDepStockObjectPlateauSlot(
                                   v3,
                                   *(unsigned __int16 *)(*(_QWORD *)(v5 + 24) + 1248LL));
  if ( DpiDepStockObjectPlateauSlot == -1 )
  {
    v7 = v2[397];
    return *(_QWORD *)(v7 + 136);
  }
  if ( DpiDepStockObjectPlateauSlot == -2 )
  {
LABEL_11:
    v7 = v2[396];
    return *(_QWORD *)(v7 + 136);
  }
  if ( DpiDepStockObjectPlateauSlot < 0 )
  {
    EngSetLastError(0x57u);
    goto LABEL_11;
  }
  v8 = DpiDepStockObjectPlateauSlot;
  if ( !*(_QWORD *)(v2[398] + 8LL * DpiDepStockObjectPlateauSlot) && qword_1C02D57E8 )
    qword_1C02D57E8(v3);
  return *(_QWORD *)(v2[398] + 8 * v8);
}
