/*
 * XREFs of ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C90E4
 * Callers:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801C8FD8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?A_TXZ @ 0x1801C85A0 (--$emplace_back@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWet.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUVailSuperWetStroke@1@@Z @ 0x1801C95CC (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUVailSuperWetStroke@1@@Z.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801C9A34 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedVailInkReceived(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  struct CSuperWetInkManager::VailSuperWetStroke *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  bool v7; // si

  v4 = CSuperWetInkManager::TryLookupVailDataForSource(this, a2);
  v6 = (__int64)v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)(*v5 + 496) - *((_QWORD *)v4 + 13) >= 0xAuLL;
  }
  else
  {
    v7 = 1;
    v6 = std::vector<CSuperWetInkManager::VailSuperWetStroke>::emplace_back<>(v5 + 8);
    *(_QWORD *)v6 = a2;
  }
  *(_QWORD *)(v6 + 104) = *(_QWORD *)(*(_QWORD *)this + 496LL);
  if ( !*((_QWORD *)this + 1) || a2 == *((struct CSuperWetSource **)this + 1) || v7 )
    CSuperWetInkManager::SetActiveSource(this, (const struct CSuperWetInkManager::VailSuperWetStroke *)v6);
}
