/*
 * XREFs of MiInitializeMdlOneNodeBatchPages @ 0x140355284
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x140354E44 (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x1402384D0 (MiPfnZeroingNeeded.c)
 *     MiChangePageAttributeBatch @ 0x140283C20 (MiChangePageAttributeBatch.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiZeroAndConvertPage @ 0x14030E7F0 (MiZeroAndConvertPage.c)
 *     MiCreateColorAnchors @ 0x1403538F4 (MiCreateColorAnchors.c)
 *     MiZeroInParallel @ 0x1403542C0 (MiZeroInParallel.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140355540 (MiPageAttributeBatchChangeNeeded.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403555A8 (MiInsertMdlPageNeedsZero.c)
 *     MiDeleteColorAnchors @ 0x14035560C (MiDeleteColorAnchors.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, _DWORD **a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD **v4; // rax
  int v5; // edx
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  int v11; // ecx
  _DWORD *v12; // r9
  char v13; // r15
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  _DWORD *v20; // r9
  char v21; // [rsp+20h] [rbp-A8h]
  int v22; // [rsp+24h] [rbp-A4h]
  _DWORD **v23; // [rsp+28h] [rbp-A0h]
  __int64 v24; // [rsp+30h] [rbp-98h]
  __int64 v25; // [rsp+38h] [rbp-90h]
  __int128 v26; // [rsp+50h] [rbp-78h] BYREF
  __int128 v27; // [rsp+60h] [rbp-68h]
  __int128 v28; // [rsp+70h] [rbp-58h]

  v3 = *(int *)(a1 + 60);
  v4 = a2;
  v23 = a2;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = 0LL;
  v25 = a3;
  v7 = 0LL;
  v21 = v5;
  v8 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( !a3 )
    return MiDeleteColorAnchors(&v26);
  v10 = 0xFFFFFA8000000000uLL;
  v11 = v5 & 1;
  v22 = v11;
  do
  {
    v12 = *v4;
    v13 = 0;
    v14 = v10 + 48LL * (_QWORD)*v4;
    if ( v11 || !MiPfnZeroingNeeded(v10 + 48LL * (_QWORD)v12, v3) )
    {
      if ( *(unsigned __int8 *)(v14 + 34) >> 6 == (_DWORD)v3 )
        goto LABEL_5;
      goto LABEL_15;
    }
    if ( (_DWORD)v27 )
      goto LABEL_14;
    v18 = MiSearchNumaNodeTable((__int64)(v14 - v10) / 48);
    if ( (unsigned int)MiCreateColorAnchors((__int64)&v26, *((_DWORD *)v18 + 2)) )
    {
      v19 = 3;
      if ( (v21 & 8) != 0 )
        v19 = 7;
      *((_QWORD *)&v26 + 1) = __PAIR64__(v3, v19);
      v12 = *v23;
LABEL_14:
      MiInsertMdlPageNeedsZero(&v26, v12, 1LL);
      ++v24;
      v13 = 1;
LABEL_15:
      if ( (_DWORD)v3 == 3 && v13 == 1 )
      {
        if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v14) == 1 )
        {
          v17 = v6;
          v6 = v14;
        }
        else
        {
          v17 = v7;
          v7 = v14;
        }
        *(_QWORD *)(v14 + 16) = v17;
      }
      else if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v14) == 1 )
      {
        if ( !v13 || dword_140C4DF98[4 * ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) >> 6) + v3] == (_DWORD)v3 )
        {
          *(_QWORD *)(v14 + 16) = v8;
          v8 = v14;
        }
        else
        {
          *(_QWORD *)(v14 + 16) = v9;
          v9 = v14;
        }
      }
      goto LABEL_19;
    }
    MiZeroAndConvertPage(v14, 3u, v3, 2);
LABEL_19:
    v10 = 0xFFFFFA8000000000uLL;
LABEL_5:
    v11 = v22;
    v4 = v23 + 1;
    v15 = v25-- == 1;
    ++v23;
  }
  while ( !v15 );
  if ( v8 )
    MiChangePageAttributeBatch(v8, (unsigned int)v3, 0LL, v12);
  if ( v6 )
    MiChangePageAttributeBatch(v6, 1LL, -1LL, v12);
  if ( v24 )
  {
    MiZeroInParallel((__int64 *)&v26);
    if ( v6 )
      MiChangePageAttributeBatch(v6, 3LL, 0LL, v20);
    if ( v7 )
      MiChangePageAttributeBatch(v7, 3LL, 0LL, v20);
    if ( v9 )
      MiChangePageAttributeBatch(v9, (unsigned int)v3, 0LL, v20);
  }
  return MiDeleteColorAnchors(&v26);
}
