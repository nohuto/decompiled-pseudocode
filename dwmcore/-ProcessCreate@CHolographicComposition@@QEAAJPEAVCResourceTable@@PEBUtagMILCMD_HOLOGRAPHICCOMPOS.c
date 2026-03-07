__int64 __fastcall CHolographicComposition::ProcessCreate(
        CHolographicComposition *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE *a3)
{
  bool v5; // al

  if ( *((_BYTE *)this + 116) )
    return 2147947423LL;
  *((_OWORD *)this + 6) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 6);
  v5 = CHolographicManager::AddHolographicComposition(*((CHolographicManager **)this + 11), this);
  *((_BYTE *)this + 117) = v5;
  *((_BYTE *)this + 116) = v5;
  if ( !v5 )
    CHolographicComposition::SetState((CHolographicComposition *)((char *)this + 72), -2147467259);
  return 0LL;
}
