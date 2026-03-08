/*
 * XREFs of ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01E5220
 * Callers:
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E6CBC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     TouchTargetingIntersectSegment @ 0x1C0250F30 (TouchTargetingIntersectSegment.c)
 */

__int64 __fastcall OffsetInContact(struct tagPOINT a1, const struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  int v6; // edi
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( a3 )
  {
    v5 = a1.x + a3.x;
    v6 = a3.y + a1.y;
    if ( (unsigned int)TouchTargetingIntersectSegment(a1.x, a1.x + a3.x, (_DWORD)a2, (unsigned int)&v7, (__int64)&v8)
      && ((_DWORD)v7 == v5 && HIDWORD(v7) == v6 || (_DWORD)v8 == v5 && HIDWORD(v8) == v6) )
    {
      return 1;
    }
    return v3;
  }
  else
  {
    return *((unsigned int *)a2 + 44);
  }
}
