/*
 * XREFs of ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0214CE4
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C0217734 (xxxPointerWindowHitTest.c)
 * Callees:
 *     _TTPixelsToHm @ 0x1C02600D0 (_TTPixelsToHm.c)
 */

void __fastcall TTSqm(struct tagPOINT a1, const struct tagTOUCHTARGETINGCONTACT *a2)
{
  unsigned int v2; // edi
  LONG x; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // r10d
  __int64 v8; // r8
  LONG y; // [rsp+44h] [rbp+Ch]

  y = a1.y;
  v2 = 0;
  x = a1.x;
  if ( gSqmIsOptedIn )
  {
    if ( a1.x || (v5 = 0, a1.y) )
      v5 = 1;
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8657LL, v5 != 0 ? 0x3E8 : 0);
    if ( v5 )
    {
      TTPixelsToHm(abs32(y), *((unsigned int *)a2 + 47));
      v6 = TTPixelsToHm(abs32(x), *((unsigned int *)a2 + 46));
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8293LL, (unsigned int)(v6 + v7));
      v8 = 0LL;
      if ( x > 0 )
        v8 = 1000LL;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8294LL, v8);
      if ( y > 0 )
        v2 = 1000;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8634LL, v2);
    }
  }
}
