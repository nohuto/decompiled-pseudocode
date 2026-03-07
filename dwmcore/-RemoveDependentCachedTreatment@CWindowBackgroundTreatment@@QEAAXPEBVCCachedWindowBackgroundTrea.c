void __fastcall CWindowBackgroundTreatment::RemoveDependentCachedTreatment(
        CWindowBackgroundTreatment *this,
        const struct CCachedWindowBackgroundTreatment *a2)
{
  const struct CCachedWindowBackgroundTreatment **v2; // r8
  const struct CCachedWindowBackgroundTreatment **v4; // rcx
  const struct CCachedWindowBackgroundTreatment **v6; // rdx

  v2 = (const struct CCachedWindowBackgroundTreatment **)*((_QWORD *)this + 42);
  v4 = (const struct CCachedWindowBackgroundTreatment **)*((_QWORD *)this + 41);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this + 42) -= 8LL;
  }
}
