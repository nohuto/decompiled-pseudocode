__int64 __fastcall DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(DXGDXGIKEYEDMUTEX *this, struct DXGCONTEXT *a2)
{
  __int64 v4; // rdx
  int v5; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a2 + 2);
    v5 = 0;
    IsFenceObjectSignaled(*((_DWORD *)this + 24), *(struct DXGPROCESS **)(v4 + 40), a2, &v5);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(1LL, 702LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Should be called with a non-NULL DXGCONTEXT",
      702LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
