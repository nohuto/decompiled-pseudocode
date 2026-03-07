int __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  char v7; // dl
  bool v8; // r15
  char v9; // cl
  unsigned int v10; // esi
  volatile signed __int32 *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // rbx
  bool v15; // zf
  __int64 v16; // r12
  _QWORD *v17; // rcx
  _QWORD *v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // r9
  char v23[4]; // [rsp+30h] [rbp-68h] BYREF
  int v24; // [rsp+34h] [rbp-64h]
  int v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  char v28; // [rsp+A0h] [rbp+8h]
  char v29; // [rsp+A8h] [rbp+10h]

  v4 = 0LL;
  v23[0] = 0;
  v26 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *(unsigned __int16 *)(a1 + 114);
  v29 = 0;
  v28 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v10;
    v26 = a2 + 136;
    LODWORD(v11) = 1;
    v9 = 1;
    v28 = 1;
  }
  else
  {
    LODWORD(v11) = 1;
    if ( a3 )
    {
      v7 = 1;
      v29 = 1;
    }
    else
    {
      v8 = a4 != 0;
    }
  }
  if ( !v10 )
    goto LABEL_5;
  while ( 2 )
  {
    _BitScanReverse((unsigned int *)&v11, v10);
    v12 = (_QWORD *)(16LL * (unsigned int)v11 + a1 + 136);
    v25 = v10 ^ (1 << (char)v11);
    v27 = 16LL * (unsigned int)v11;
    v13 = (_QWORD *)*v12;
    v24 = (int)v11;
    do
    {
      v14 = (__int64)(v13 - 27);
      if ( v9 )
      {
        *(_QWORD *)(v14 + 944) = a2;
      }
      else
      {
        *(_DWORD *)(v14 + 116) &= ~0x2000u;
        v15 = (*(_DWORD *)(v14 + 120) & 0x400000) == 0;
        *(_QWORD *)(v14 + 944) = v4;
        if ( !v15 )
        {
          v11 = *(volatile signed __int32 **)(v14 + 968);
          _InterlockedAnd(v11, 0xFFFBFFFF);
        }
      }
      v13 = (_QWORD *)*v13;
      if ( v8 )
      {
        LODWORD(v11) = KiInsertDeferredReadyList(a4, v14);
      }
      else
      {
        if ( !v7 )
          continue;
        KiGetThreadEffectiveRankNonZero(v14, a1, 0LL, v23);
        LODWORD(v11) = KiAddThreadToPrcbQueue(a3, v14, *(char *)(v14 + 195), 0, v23[0]);
        v4 = 0LL;
      }
      v7 = v29;
      v9 = v28;
    }
    while ( v13 != v12 );
    v10 = v25;
    v16 = v27;
    if ( v9 )
    {
      v17 = (_QWORD *)*v12;
      v18 = (_QWORD *)v12[1];
      if ( *(_QWORD **)(*v12 + 8LL) != v12
        || (_QWORD *)*v18 != v12
        || (v19 = v26,
            *v18 = v17,
            v20 = (_QWORD *)(v16 + v19),
            v17[1] = v18,
            v21 = (_QWORD *)v20[1],
            *(_QWORD **)(*v20 + 8LL) != v20)
        || (_QWORD *)*v21 != v20
        || *(_QWORD **)(*v17 + 8LL) != v17
        || (_QWORD *)*v18 != v17 )
      {
        __fastfail(3u);
      }
      *v21 = v17;
      v20[1] = v17[1];
      v11 = (volatile signed __int32 *)v17[1];
      *(_QWORD *)v11 = v20;
      v17[1] = v21;
      v9 = v28;
    }
    v12[1] = v12;
    *v12 = v12;
    if ( v10 )
    {
      v7 = v29;
      continue;
    }
    break;
  }
LABEL_5:
  *(_WORD *)(a1 + 114) = v4;
  return (int)v11;
}
