__int64 __fastcall CGlobalCompositionSurfaceInfo::GetRealizationIndex(CGlobalCompositionSurfaceInfo *this)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 26);
  if ( v1 )
    return (**v1)(v1);
  else
    return 0xFFFFFFFFLL;
}
