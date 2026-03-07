const struct CBackdropVisualImageKey *__fastcall COcclusionContext::GetBVIKeyForCurrentWalk(COcclusionContext *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 177);
  if ( v1 )
    return (const struct CBackdropVisualImageKey *)(v1 + 1888);
  else
    return (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey;
}
