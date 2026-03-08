/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001D0B4
 * Callers:
 *     bInitBrush @ 0x1C031D430 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C031D4F4 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x1C003EA00 (HmgMarkUndeletable.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(BRUSHMEMOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  LOBYTE(a3) = 16;
  *(_DWORD *)(*(_QWORD *)this + 40LL) |= 0x40200u;
  HmgSetOwner(**(_QWORD **)this, 0LL, a3);
  LOBYTE(v4) = 16;
  HmgMarkUndeletable(**(_QWORD **)this, v4);
}
