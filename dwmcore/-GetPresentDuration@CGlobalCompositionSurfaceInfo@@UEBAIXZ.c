__int64 __fastcall CGlobalCompositionSurfaceInfo::GetPresentDuration(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
  else
    return 0LL;
}
