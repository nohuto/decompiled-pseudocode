__int64 *__fastcall std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<COcclusionInfo>::operator()();
  }
  return a1;
}
