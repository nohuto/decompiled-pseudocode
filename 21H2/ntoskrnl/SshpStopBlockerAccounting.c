/*
 * XREFs of SshpStopBlockerAccounting @ 0x14036B2A4
 * Callers:
 *     SshpSetBlockerActive @ 0x14036B250 (SshpSetBlockerActive.c)
 *     SshpWriteBlocker @ 0x140399BC4 (SshpWriteBlocker.c)
 *     SshpSetCollectionActive @ 0x1403DB4A4 (SshpSetCollectionActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SshpStopBlockerAccounting(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 *v8; // r11
  unsigned int v9; // r8d

  result = *(_QWORD *)(a1 + 24);
  v5 = a2;
  v6 = a1 + ((unsigned __int64)((*(_DWORD *)(a1 + 8) & 1) == 0) << 7);
  if ( a2 >= result )
  {
    v7 = a2 - result;
    *(_QWORD *)(v6 + 32) += v7;
    v8 = PopFxAccountingBucketLimits;
    v9 = 0;
    while ( 1 )
    {
      if ( v7 >= *v8 )
      {
        result = v9 + 1;
        if ( v7 < PopFxAccountingBucketLimits[result] )
          break;
      }
      ++v9;
      ++v8;
      if ( v9 >= 5 )
        goto LABEL_7;
    }
    result = v9;
    if ( a3 )
    {
      ++*(_DWORD *)(v6 + 4LL * v9 + 140);
      *(_QWORD *)(v6 + 8LL * v9 + 80) += v7;
    }
    else
    {
      ++*(_DWORD *)(v6 + 4LL * v9 + 120);
      *(_QWORD *)(v6 + 8LL * v9 + 40) += v7;
    }
  }
LABEL_7:
  if ( a3 == 1 )
    v5 = 0LL;
  *(_QWORD *)(a1 + 24) = v5;
  return result;
}
