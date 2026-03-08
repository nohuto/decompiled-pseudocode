/*
 * XREFs of KeQueryNodeActiveProcessorCount @ 0x1403AEEE0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x1402AE38C (KiQuerySubNodeActiveAffinity.c)
 */

__int64 __fastcall KeQueryNodeActiveProcessorCount(unsigned __int16 a1)
{
  unsigned int v1; // r10d
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0;
  if ( a1 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  _mm_lfence();
  v5 = 0;
  v3 = KeNodeBlock[a1];
  v4 = *(_DWORD *)(v3 + 16);
  while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v3, &v7) )
    KiQuerySubNodeActiveAffinity(v7, 0LL, &v6);
  return v1;
}
