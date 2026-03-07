char __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  int v2; // ebp
  char v4; // bl
  bool v5; // si
  bool v6; // al
  struct CEffect *EffectInternal; // rax

  v2 = *((_DWORD *)this + 27);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 27) == 1;
  v6 = 1;
  if ( !(*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) )
  {
    if ( (**((_DWORD **)this + 29) & 0x400000) == 0
      || (EffectInternal = CVisual::GetEffectInternal(this),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
             EffectInternal,
             61LL)) )
    {
      v6 = 0;
    }
  }
  if ( v2 != 1 )
    return 0;
  if ( v5 ? !v6 : (unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)this + 80)) == 0 )
    return 0;
  return v4;
}
