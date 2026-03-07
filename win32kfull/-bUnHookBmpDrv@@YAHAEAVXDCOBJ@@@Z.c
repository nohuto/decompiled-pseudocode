__int64 __fastcall bUnHookBmpDrv(struct XDCOBJ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  HDEV *v4; // rcx
  __int64 v5; // rsi
  signed __int32 v6; // ett
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int64 result; // rax
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8608LL) )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v2 + 36) & 0x4000) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  v4 = *(HDEV **)(v2 + 496);
  v14 = v3;
  v5 = *(_QWORD *)(v3 + 3496);
  _m_prefetchw((const void *)(v3 + 40));
  do
    v6 = *(_DWORD *)(v3 + 40);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 40), v6 & 0xFF7FFFFF, v6) );
  v7 = v14;
  *(_QWORD *)(v14 + 3496) = 0LL;
  bBmpUndoMakeOpaque(v4);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v5;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v15 = v8;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v15, (struct PDEVOBJ *)&v14, (struct PDEVOBJ *)&v15);
  memmove((void *)(v8 + 80), (const void *)(v7 + 80), 0x598uLL);
  v9 = 8LL;
  v10 = (_OWORD *)(v8 + 1536);
  v11 = (_OWORD *)(v7 + 1536);
  do
  {
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10 += 8;
    v12 = v11[7];
    v11 += 8;
    *(v10 - 1) = v12;
    --v9;
  }
  while ( v9 );
  *v10 = *v11;
  v10[1] = v11[1];
  v10[2] = v11[2];
  v10[3] = v11[3];
  v10[4] = v11[4];
  v10[5] = v11[5];
  *((_QWORD *)v10 + 12) = *((_QWORD *)v11 + 12);
  result = 1LL;
  *(_QWORD *)(v8 + 80) = v8;
  return result;
}
