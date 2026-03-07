char __fastcall CVisual::IsSimple3DRootOrHasEffects(CVisual *this, const struct CVisual *a2)
{
  int v2; // r15d
  char v4; // bl
  bool v5; // si
  int Count; // r14d
  bool v7; // bp
  bool v8; // al
  struct CEffect *EffectInternal; // rax

  v2 = *((_DWORD *)this + 27);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 27) == 1;
  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 80));
  v7 = 0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           61LL) )
    {
      v7 = 1;
    }
  }
  v8 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) != 0;
  if ( v2 != 1 )
  {
    if ( !v5 )
      return 0;
    if ( Count )
      return v4;
  }
  if ( !v5 || !v7 && !v8 )
    return 0;
  return v4;
}
