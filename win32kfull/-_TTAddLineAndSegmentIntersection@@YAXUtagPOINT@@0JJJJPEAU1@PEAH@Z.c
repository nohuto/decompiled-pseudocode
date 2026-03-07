void __fastcall _TTAddLineAndSegmentIntersection(
        struct tagPOINT a1,
        struct tagPOINT a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct tagPOINT *a7,
        int *a8)
{
  LONG y; // r9d
  __int64 v13; // r8
  struct tagPOINT v14; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT v15; // [rsp+38h] [rbp-30h]
  struct tagPOINT v16; // [rsp+40h] [rbp-28h]

  v14 = 0LL;
  if ( !gbIgnoreStressedOutStuff && a3 == a5 && a4 == a6 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 528);
  v16 = (struct tagPOINT)__PAIR64__(a4, a3);
  v15 = (struct tagPOINT)__PAIR64__(a6, a5);
  if ( (unsigned int)_TTIntersectSegmentAndLine(
                       (struct tagPOINT)__PAIR64__(a4, a3),
                       (struct tagPOINT)__PAIR64__(a6, a5),
                       a1,
                       a2,
                       &v14) == 1 )
  {
    y = v14.y;
    v13 = *a8;
    if ( !(_DWORD)v13 || a7->x != v14.x || a7->y != v14.y )
    {
      a7[v13].x = v14.x;
      *a8 = v13 + 1;
      a7[v13].y = y;
    }
  }
}
