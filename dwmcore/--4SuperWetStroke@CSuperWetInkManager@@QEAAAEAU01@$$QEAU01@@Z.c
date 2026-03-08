/*
 * XREFs of ??4SuperWetStroke@CSuperWetInkManager@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801C8684
 * Callers:
 *     ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x1801CA244 (-erase@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuperWetInkMa.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSuperWetInkManager::SuperWetStroke::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  *(_BYTE *)(a1 + 96) = *(_BYTE *)(a2 + 96);
  return a1;
}
