__int64 __fastcall DxgkSetIndirectDisplayHostProcess(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v2; // rdi

  Current = DXGPROCESS::GetCurrent(a1);
  v2 = Current;
  if ( Current )
  {
    DXGFASTMUTEX::Acquire((struct DXGPROCESS *)((char *)Current + 104));
    *((_DWORD *)v2 + 106) |= 0x4000u;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v2 + 13);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 216LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get DXGPROCESS for IndirectDisplay host process",
      216LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
}
