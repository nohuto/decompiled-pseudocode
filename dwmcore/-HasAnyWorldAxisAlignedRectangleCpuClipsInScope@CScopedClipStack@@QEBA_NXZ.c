char __fastcall CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope(CScopedClipStack *this)
{
  bool HasCpuClipsInScope; // al
  __int64 v2; // rcx
  char v3; // dl

  HasCpuClipsInScope = CScopedClipStack::HasCpuClipsInScope(this);
  v3 = 0;
  if ( HasCpuClipsInScope )
    return *(_QWORD *)(*(_QWORD *)(v2 + 1872) - 24LL) != 0LL;
  return v3;
}
