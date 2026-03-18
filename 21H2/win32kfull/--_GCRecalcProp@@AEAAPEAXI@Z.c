/*
 * XREFs of ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C00B0CB0
 * Callers:
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00B0BF8 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00B0D2C (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?Delete@CRecalcProp@@UEAAXXZ @ 0x1C0121280 (-Delete@CRecalcProp@@UEAAXXZ.c)
 * Callees:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1C00B0CE0 (--1CRecalcProp@@AEAA@XZ.c)
 */

CRecalcProp *__fastcall CRecalcProp::`scalar deleting destructor'(CRecalcProp *this)
{
  CRecalcProp::~CRecalcProp(this);
  Win32FreePool(this);
  return this;
}
