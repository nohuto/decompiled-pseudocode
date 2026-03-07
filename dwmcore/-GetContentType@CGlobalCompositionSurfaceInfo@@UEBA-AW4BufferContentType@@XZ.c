__int64 __fastcall CGlobalCompositionSurfaceInfo::GetContentType(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 208);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  else
    return 0LL;
}
