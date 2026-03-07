char __fastcall DirectComposition::CSnapshotMarshaler::EmitUpdateCommands(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CSnapshotMarshaler::EmitUpdate(this, a2) )
    return DirectComposition::CSnapshotMarshaler::EmitTransform(this, a2) != 0;
  return v4;
}
