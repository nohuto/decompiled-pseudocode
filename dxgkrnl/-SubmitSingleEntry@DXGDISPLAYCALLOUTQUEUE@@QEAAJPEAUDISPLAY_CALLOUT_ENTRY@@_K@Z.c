__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry(
        DXGDISPLAYCALLOUTQUEUE ***this,
        struct DISPLAY_CALLOUT_ENTRY *a2,
        __int64 a3)
{
  DXGDISPLAYCALLOUTQUEUE **v6; // rdx
  int v7; // eax
  __int64 v8; // rdi
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = this[7];
  if ( *v6 != (DXGDISPLAYCALLOUTQUEUE *)(this + 6) )
    __fastfail(3u);
  *(_QWORD *)a2 = this + 6;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = a2;
  this[7] = (DXGDISPLAYCALLOUTQUEUE **)a2;
  if ( this[8] || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10), v7 = DpiGdiAsyncDisplayCallout(a3), v8 = v7, v7 >= 0) )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed request an asynchronous Display Callout (Status == 0x%I64x)",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return (unsigned int)v8;
}
