/*
 * XREFs of ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C9334
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801C926C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C8A90 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x1801CA244 (-erase@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuperWetInkMa.c)
 */

void __fastcall CSuperWetInkManager::RemoveSourceLocal(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  char *v2; // rdi
  struct CSuperWetSource **i; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 40;
  for ( i = (struct CSuperWetSource **)*((_QWORD *)this + 5); i != *((struct CSuperWetSource ***)this + 6); i += 13 )
  {
    if ( *i == a2 )
    {
      if ( *i == *((struct CSuperWetSource **)this + 1) )
        CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
      std::vector<CSuperWetInkManager::SuperWetStroke>::erase(v2, &v4, i);
      return;
    }
  }
}
