__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitBatch(struct _LIST_ENTRY **this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *v7; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  _BYTE v13[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  Flink = a2->Flink;
  if ( a2->Flink == a2 )
  {
    v7 = (struct _LIST_ENTRY *)(this + 6);
  }
  else
  {
    if ( Flink->Blink != a2
      || (Blink = a2->Blink, Blink->Flink != a2)
      || (Blink->Flink = Flink,
          v7 = (struct _LIST_ENTRY *)(this + 6),
          Flink->Blink = Blink,
          a2->Blink = a2,
          a2->Flink = a2,
          v9 = this[7],
          (struct _LIST_ENTRY **)this[6]->Blink != this + 6)
      || v9->Flink != v7
      || Flink->Flink->Blink != Flink
      || Flink->Blink->Flink != Flink )
    {
      __fastfail(3u);
    }
    v9->Flink = Flink;
    this[7] = Flink->Blink;
    Flink->Blink->Flink = v7;
    Flink->Blink = v9;
  }
  if ( v7->Flink == v7
    || this[8]
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13), v10 = DpiGdiAsyncDisplayCallout(a3), v11 = v10, v10 >= 0) )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed request an asynchronous Display Callout (Status == 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v11;
}
