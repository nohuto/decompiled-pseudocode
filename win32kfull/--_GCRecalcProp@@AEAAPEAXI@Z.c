/*
 * XREFs of ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C00FC324
 * Callers:
 *     ?Delete@CRecalcProp@@UEAAXXZ @ 0x1C00FAB80 (-Delete@CRecalcProp@@UEAAXXZ.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C00FAC00 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00FC8E0 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 * Callees:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1C00FC354 (--1CRecalcProp@@AEAA@XZ.c)
 */

CRecalcProp *__fastcall CRecalcProp::`scalar deleting destructor'(CRecalcProp *this)
{
  CRecalcProp::~CRecalcProp(this);
  Win32FreePool(this);
  return this;
}
