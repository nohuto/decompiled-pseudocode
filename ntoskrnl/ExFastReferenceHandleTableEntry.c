/*
 * XREFs of ExFastReferenceHandleTableEntry @ 0x14035A944
 * Callers:
 *     ObpReferenceObjectByHandle @ 0x1407DF424 (ObpReferenceObjectByHandle.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140749B5C (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExFastReferenceHandleTableEntry(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 i; // rax
  unsigned __int64 v7; // rax
  __int128 v8; // rt0
  unsigned __int8 v9; // tt

  _m_prefetchw(a2);
  *a3 = *a2;
  a3[1] = a2[1];
  for ( i = *a3; ; i = *a3 )
  {
    if ( (i & 0x1FFFE) == 0 )
      return 0xFFFFFFFFLL;
    if ( (i & 1) != 0 )
      break;
    ExpBlockOnLockedHandleEntry(a1, a2, i);
    _m_prefetchw(a2);
    *a3 = *a2;
    a3[1] = a2[1];
LABEL_7:
    ;
  }
  v8 = *(_OWORD *)a3;
  v9 = _InterlockedCompareExchange128(a2, *((signed __int64 *)&v8 + 1), i - 2, (signed __int64 *)&v8);
  v7 = v8;
  *(_OWORD *)a3 = v8;
  if ( !v9 )
    goto LABEL_7;
  if ( (unsigned __int16)(v7 >> 1) != 16 )
    return 0LL;
  *a3 = v7 ^ (v7 ^ (2 * (v7 >> 1) - 2)) & 0x1FFFE;
  return 32752LL;
}
