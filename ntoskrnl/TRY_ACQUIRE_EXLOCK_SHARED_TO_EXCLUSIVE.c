/*
 * XREFs of TRY_ACQUIRE_EXLOCK_SHARED_TO_EXCLUSIVE @ 0x140608DC8
 * Callers:
 *     MiInsertLargeVadMapping @ 0x140643BA8 (MiInsertLargeVadMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TRY_ACQUIRE_EXLOCK_SHARED_TO_EXCLUSIVE(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  unsigned int v3; // [rsp+10h] [rbp+10h]
  signed __int32 v4; // [rsp+18h] [rbp+18h]
  signed __int32 v5; // [rsp+20h] [rbp+20h]

  v3 = 0x80000000;
  v4 = _InterlockedCompareExchange(a1, 0x80000000, 1);
  if ( v4 == 1 )
    return 1LL;
  while ( v4 == 1 )
  {
    v1 = v3 & 0xBFFFFFFF;
LABEL_6:
    v3 = v1;
    v5 = v4;
    v4 = _InterlockedCompareExchange(a1, v1, v4);
    if ( v4 == v5 )
      return 1LL;
  }
  if ( v4 == 1073741825 )
  {
    v1 = v3 | 0x40000000;
    goto LABEL_6;
  }
  return 0LL;
}
