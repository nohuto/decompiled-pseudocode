void __fastcall CGlobalCompositionSurfaceInfo::RecordStats(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        const struct CMILMatrix *a3,
        __int64 a4)
{
  __int64 v5; // rcx
  CComposition *v6; // rcx

  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const struct CMILMatrix *, __int64))(*(_QWORD *)v5 + 40LL))(
           v5,
           a2,
           a3,
           a4) )
    {
      CComposition::AddCompSurfInfoUpdate(v6, this);
    }
  }
}
