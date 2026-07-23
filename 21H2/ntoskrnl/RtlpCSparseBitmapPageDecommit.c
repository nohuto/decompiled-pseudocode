/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x140220E60
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x140220B54 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140214048 (ExpUnblockPushLock.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140221C2C (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x140221C70 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x140222010 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14022208C (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpHpEnvFreeVA @ 0x140305554 (RtlpHpEnvFreeVA.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140595A40 (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  const signed __int64 *v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  const signed __int64 *v10; // rdx
  const signed __int64 *v11; // r9
  signed __int64 v12; // r8
  const signed __int64 *v13; // rdx
  BOOL v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v17; // r13
  const signed __int64 *v18; // r8
  const signed __int64 *v19; // r9
  signed __int64 v20; // r10
  bool j; // zf
  bool v22; // zf
  bool v23; // al
  char v24; // al
  __int64 v25; // r8
  signed __int32 v26[8]; // [rsp+0h] [rbp-E8h] BYREF
  BOOL v27; // [rsp+20h] [rbp-C8h]
  const signed __int64 *i; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v29; // [rsp+30h] [rbp-B8h]
  const signed __int64 *v30; // [rsp+38h] [rbp-B0h]
  __int64 v31; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v34; // [rsp+68h] [rbp-80h]
  __int128 v35; // [rsp+70h] [rbp-78h] BYREF
  __int128 v36; // [rsp+80h] [rbp-68h]
  __int128 v37; // [rsp+90h] [rbp-58h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-48h] BYREF
  int v39; // [rsp+108h] [rbp+20h]

  v34 = a1;
  v31 = 0LL;
  v33[0] = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  v39 = 0;
  v6 = *(const signed __int64 **)(a1 + 8);
  v29 = *(_QWORD *)(a1 + 16);
  v30 = v6;
  v7 = a2 << 15;
  v33[1] = a2 << 15;
  v8 = 0x8000LL;
  v9 = v29 - (a2 << 15);
  if ( v9 <= 0x8000 )
    v8 = v9;
  v33[2] = v8;
  v36 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(&v38, a1);
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_23;
    i = 0LL;
    if ( v7 >= v29 )
    {
LABEL_14:
      v14 = 0;
      goto LABEL_20;
    }
    if ( v8 <= 1 )
    {
      if ( v8 != 1 )
        goto LABEL_14;
      v14 = !_bittest64(v30, v7);
    }
    else
    {
      if ( v29 - v7 < v8 )
        goto LABEL_14;
      v10 = &v30[v7 >> 6];
      i = v10;
      v11 = &v30[(v8 + v7 - 1) >> 6];
      v12 = *v10;
      if ( v10 == v11 )
      {
        v15 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
      }
      else
      {
        if ( (v12 & (-1LL << v7)) != 0 )
          goto LABEL_14;
        v13 = v10 + 1;
        for ( i = v13; ; i = v13 )
        {
          v12 = *v13;
          if ( v13 == v11 )
            break;
          if ( v12 )
            goto LABEL_14;
          ++v13;
        }
        v15 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v8 + (unsigned __int8)v7 - 1);
      }
      v14 = (v12 & v15) == 0;
    }
LABEL_20:
    v27 = v14;
    if ( !v14 )
      goto LABEL_21;
LABEL_23:
    RtlpCSparseBitmapLock(a1, 1LL, &v35);
    v31 = *(_QWORD *)(a1 + 32);
    v17 = v34;
    if ( v31 == -1 )
      break;
    RtlpCSparseBitmapUnlock(&v35);
    RtlpCSparseBitmapWaitOnAddress(v17 + 32, &v31, v25, a1, v27, i);
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_21;
    a3 = 0;
  }
  *(_QWORD *)(v34 + 32) = a2;
  RtlpCSparseBitmapUnlock(&v35);
  v39 = 1;
  if ( !_bittest64(*(const signed __int64 **)a1, a2) || v7 >= v29 )
    goto LABEL_21;
  if ( v8 <= 1 )
  {
    if ( v8 != 1 )
      goto LABEL_21;
    if ( !_bittest64(v30, v7) )
      goto LABEL_36;
    v23 = 0;
LABEL_35:
    if ( !v23 )
      goto LABEL_21;
LABEL_36:
    _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
    v33[0] = *(_QWORD *)(a1 + 8) + (a2 << 12);
    v32 = 4096LL;
    RtlpHpEnvFreeVA(v33, &v32, 1073758208LL);
    goto LABEL_21;
  }
  if ( v29 - v7 < v8 )
    goto LABEL_21;
  v18 = &v30[v7 >> 6];
  v19 = &v30[(v8 + v7 - 1) >> 6];
  v20 = *v18;
  if ( v18 == v19 )
  {
    v22 = (v20 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7)) == 0;
LABEL_34:
    v23 = v22;
    goto LABEL_35;
  }
  for ( j = (v20 & (-1LL << v7)) == 0; j; j = *v18 == 0 )
  {
    if ( ++v18 == v19 )
    {
      v22 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v8 + (unsigned __int8)v7 - 1)) & *v18) == 0;
      goto LABEL_34;
    }
  }
LABEL_21:
  if ( v39 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    v24 = *(_BYTE *)(a1 + 48);
    _InterlockedOr(v26, 0);
    if ( !v24 )
    {
      if ( *(_QWORD *)(a1 + 40) )
        ExpUnblockPushLock((volatile __int64 *)(a1 + 40), 0LL, 0);
    }
  }
  v37 = v36;
  return RtlCSparseBitmapLeaveLockingRegion(&v37);
}
