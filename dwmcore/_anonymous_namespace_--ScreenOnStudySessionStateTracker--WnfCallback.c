__int64 __fastcall anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  bool v5; // zf
  void (__fastcall *v7)(_OWORD *); // rax
  __int64 Source1; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF

  v5 = *(_BYTE *)a4 == 0;
  Source1 = a1;
  if ( !v5 && RtlCompareMemory(&Source1, &WNF_SRUM_SCREENONSTUDY_SESSION, 8uLL) == 8 )
  {
    v7 = *(void (__fastcall **)(_OWORD *))(a4 + 8);
    if ( *a5 )
    {
      v7(a5 + 4);
    }
    else
    {
      v10 = 0LL;
      v7(&v10);
    }
  }
  return 0LL;
}
