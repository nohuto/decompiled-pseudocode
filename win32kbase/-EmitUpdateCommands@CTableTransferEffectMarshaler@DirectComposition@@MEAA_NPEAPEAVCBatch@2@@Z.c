char __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // si

  if ( !DirectComposition::CEffectInputSet::EmitUpdateCommands(
          (__int64)this + 72,
          (__int64)a2,
          *((_DWORD *)this + 8),
          a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitData(this, a2) )
    return 0;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 0) )
    return 0;
  v4 = 1;
  if ( !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 1u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 2u)
    || !DirectComposition::CTableTransferEffectMarshaler::EmitTable(this, a2, 3u) )
  {
    return 0;
  }
  return v4;
}
