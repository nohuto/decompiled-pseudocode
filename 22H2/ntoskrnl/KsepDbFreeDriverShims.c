/*
 * XREFs of KsepDbFreeDriverShims @ 0x140758720
 * Callers:
 *     KsepGetShimsForDriver @ 0x140758368 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140758450 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075867C (KsepDbGetDriverShimsInternal.c)
 *     KseDriverUnloadImage @ 0x140772BB4 (KseDriverUnloadImage.c)
 *     KsepDbGetShimInfo @ 0x1408BF86C (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371F04 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14075AFF0 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rdi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1 + 3;
      v4 = a2;
      v5 = (char *)(a1 + 2);
      do
      {
        if ( v3[2] )
          KsepStringFree(v5 + 16);
        if ( *v3 )
          KsepStringFree(v5);
        if ( v3[4] )
          KsepStringFree(v5 + 32);
        v5 += 80;
        v3 += 10;
        --v4;
      }
      while ( v4 );
    }
    KsepPoolFreePaged(a1);
  }
}
