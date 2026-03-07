void __fastcall CProjectedShadowReceiver::NotifyOnChanged(
        CProjectedShadowReceiver *a1,
        __int64 a2,
        CProjectedShadowReceiver *a3)
{
  CProjectedShadowReceiver *v3; // rdx
  struct CBrush *EffectiveMaskBrush; // rax
  CProjectedShadowReceiver *v5; // rcx
  struct CBrush *v6; // rdx

  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( a3 == a1 )
    {
      CResource::NotifyOnChanged(a1, a2, a3);
    }
    else
    {
      v3 = (CProjectedShadowReceiver *)*((_QWORD *)a1 + 13);
      if ( v3 && a3 == v3 )
      {
        EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(a1);
        if ( v6 == EffectiveMaskBrush )
          CProjectedShadowReceiver::InvalidateMaskContent(v5);
      }
    }
  }
}
