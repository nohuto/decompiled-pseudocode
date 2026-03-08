/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x140543EF8
 * Callers:
 *     HvlAcknowledgePageRequest @ 0x140540470 (HvlAcknowledgePageRequest.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpFastAcknowledgePageRequest @ 0x140543CC0 (HvlpFastAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, const void *a2, int *a3)
{
  __int64 v3; // rbx
  PHYSICAL_ADDRESS *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+68h] [rbp+20h]

  v3 = a1;
  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 32 * v3);
    v11 = HvcallInitiateHypercall(166);
    HvlpReleaseHypercallPage((__int64)&v8);
    *a3 = WORD2(v11) & 0xFFF;
    return (unsigned __int16)v11;
  }
  else
  {
    if ( (unsigned int)v3 >= 3 )
      LODWORD(v3) = 3;
    return HvlpFastAcknowledgePageRequest(v3, (__int64)a2, a3);
  }
}
