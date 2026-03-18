/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005F74C
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C02DB738 (bInitBrush.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C0060900 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(BRUSHMEMOBJ *this)
{
  __int64 v2; // rdx

  *(_DWORD *)(*(_QWORD *)this + 40LL) |= 0x40200u;
  HmgSetOwner(**(_QWORD **)this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**(_QWORD **)this, v2);
}
