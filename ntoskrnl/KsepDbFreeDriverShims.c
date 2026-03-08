/*
 * XREFs of KsepDbFreeDriverShims @ 0x14079E360
 * Callers:
 *     KsepGetShimsForDriver @ 0x14079E39C (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x14079EDE8 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x14079EF10 (KsepDbGetDriverShimsInternal.c)
 *     KseDriverUnloadImage @ 0x1407F7364 (KseDriverUnloadImage.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
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
