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
