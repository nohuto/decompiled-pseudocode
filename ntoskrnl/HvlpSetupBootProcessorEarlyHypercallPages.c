/*
 * XREFs of HvlpSetupBootProcessorEarlyHypercallPages @ 0x14053FC6C
 * Callers:
 *     HvlPhase0Initialize @ 0x14080D7C8 (HvlPhase0Initialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpSetupBootProcessorEarlyHypercallPages(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v2; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_140C01B28)(a1, 6LL, &v7);
  if ( !v2 )
    return 3221225626LL;
  CurrentPrcb->HypercallCachedPages = (void *)v2;
  v4 = (_QWORD *)(v2 + 16);
  v5 = v7;
  v6 = 2LL;
  do
  {
    *v4 = v5;
    v4 += 512;
    v5 = v7 + 4096;
    v7 += 4096LL;
    --v6;
  }
  while ( v6 );
  return 0LL;
}
