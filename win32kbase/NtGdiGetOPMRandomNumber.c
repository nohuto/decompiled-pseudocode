__int64 __fastcall NtGdiGetOPMRandomNumber(unsigned __int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  _DXGKMDT_OPM_RANDOM_NUMBER v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  v4 = SGDGetSessionState(a1);
  result = COPM::GetRandomNumber(*(void ***)(*(_QWORD *)(v4 + 24) + 3824LL), a1, &v6);
  if ( (int)result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v6);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
