/*
 * XREFs of ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02BC484
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092390 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TXTCLEANUP::vMopUp(TXTCLEANUP *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(**(_QWORD **)this + 1136LL);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  v2 = **(_QWORD **)this;
  *(_DWORD *)(v2 + 36) |= 0x10u;
  *(_QWORD *)(v2 + 1136) = 0LL;
}
