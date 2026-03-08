/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x140581D60
 * Callers:
 *     PpmEstimateIdleDuration @ 0x14022A74C (PpmEstimateIdleDuration.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall PpmGetIdleConstrainedMask(unsigned __int16 *a1)
{
  size_t v2; // r8
  char v3; // di
  bool v4; // cf
  unsigned int v5; // r10d
  int v6; // r10d
  int v7; // r11d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 8LL * *a1;
  v15 = 0LL;
  v3 = 0;
  memset(a1 + 4, 0, v2);
  v4 = KeNumberNodes != 0;
  *a1 = 1;
  v5 = 0;
  if ( v4 )
  {
    do
    {
      v14 = 0;
      v12 = KeNodeBlock[v5];
      v13 = *(_DWORD *)(v12 + 16);
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v12, &v15) )
      {
        v8 = v15;
        v9 = *(unsigned __int16 *)(v15 + 136);
        v10 = *(_QWORD *)(v15 + 72);
        if ( *a1 > (unsigned __int16)v9 )
          goto LABEL_7;
        if ( a1[1] > (unsigned __int16)v9 )
        {
          *a1 = v7 + v9;
LABEL_7:
          *(_QWORD *)&a1[4 * v9 + 4] |= v10;
        }
        if ( *(_QWORD *)(v8 + 72) )
          v3 = v7;
      }
      v5 = v7 + v6;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  return v3;
}
