__int64 __fastcall GetInkProcessor(struct InkProcessor **a1)
{
  struct InkProcessor *v2; // rdx

  v2 = *(struct InkProcessor **)(SGDGetUserSessionState(a1) + 3440);
  *a1 = v2;
  return v2 == 0LL ? 0xC0000001 : 0;
}
