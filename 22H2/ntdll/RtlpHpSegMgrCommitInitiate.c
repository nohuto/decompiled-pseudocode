/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x18010EF74
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x18010EE40 (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        unsigned __int64 a4,
        volatile signed __int64 *a5,
        char *a6)
{
  unsigned __int64 v8; // rdx
  char v9; // r13
  int v10; // r14d
  char v11; // r12
  unsigned __int64 v12; // r8
  signed __int16 v13; // di
  __int16 v14; // bx
  __int16 v15; // bx
  signed __int16 v16; // bx
  __int16 v17; // si
  signed __int16 v18; // bx
  unsigned int v19; // edx
  __int64 v21; // [rsp+60h] [rbp+8h]
  __int16 v22; // [rsp+70h] [rbp+18h]

  v21 = a1;
  v8 = 0LL;
  v9 = a4;
  v10 = 0;
  v11 = 0;
  v12 = 2047LL;
LABEL_2:
  v13 = *a2;
  v22 = *a2;
  while ( 1 )
  {
    if ( a3 <= 0 )
    {
      if ( v13 >= 0 )
      {
        v19 = -1073741567;
        goto LABEL_30;
      }
      if ( !(a3 + (v13 & 0x7FF)) )
      {
        v16 = v22 | 0x4000;
        goto LABEL_18;
      }
LABEL_16:
      v15 = v22;
      goto LABEL_17;
    }
    if ( (v13 & 0x4000) != 0 )
    {
      _mm_pause();
      goto LABEL_2;
    }
    if ( (v13 & 0x7FF) != 0 )
      goto LABEL_16;
    if ( (v9 & 3) != 0 )
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_16;
      v14 = v22;
    }
    else
    {
      if ( !(unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1) )
        goto LABEL_16;
      v14 = v22;
    }
    v15 = v14 | 0x4000;
LABEL_17:
    v16 = a3 + v15;
LABEL_18:
    v17 = v16 & 0x4000;
    if ( (v16 & 0x4000) != 0 )
    {
      v10 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)a5, v8, v12, a4);
      v11 = -1;
    }
    v18 = _InterlockedCompareExchange16(a2, v16, v13);
    if ( v13 == v18 )
      break;
    v8 = 0LL;
    if ( v10 )
    {
      RtlReleaseSRWLockExclusive(a5);
      v8 = 0LL;
    }
    a1 = v21;
    v13 = v18;
    v22 = v18;
    v10 = 0;
    v12 = 2047LL;
  }
  if ( a3 <= 0 )
  {
    v19 = v17 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v13 >= 0 )
  {
    v19 = (v17 != 0) - 1073741567;
  }
  else
  {
    v19 = -1073741568;
  }
LABEL_30:
  if ( v10 )
    *a6 = v11;
  return v19;
}
