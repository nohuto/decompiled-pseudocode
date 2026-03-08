/*
 * XREFs of MiScanPagefileSpace @ 0x140A2FF20
 * Callers:
 *     <none>
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiReferencePageRuns @ 0x1402EB520 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1402EBA0C (MiDereferencePageRuns.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPage @ 0x1404647C4 (MiLockPage.c)
 *     MiUnlockPage @ 0x1404647DA (MiUnlockPage.c)
 */

void __fastcall MiScanPagefileSpace(__int64 a1)
{
  __int16 v1; // r12
  int v2; // ebp
  _DWORD *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  char v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  char v12; // r12
  __int64 v13; // rcx
  unsigned __int8 v14; // [rsp+70h] [rbp+8h]
  __int16 v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h]
  _DWORD *v17; // [rsp+88h] [rbp+20h]

  v1 = *(_WORD *)a1;
  v15 = *(_WORD *)a1;
  v2 = 0;
  v16 = 0;
  v4 = (_DWORD *)MiReferencePageRuns(a1, 0);
  v17 = v4;
  do
  {
    v5 = 48LL * *(_QWORD *)&v4[4 * v2 + 4] - 0x220000000000LL;
    v6 = v5 + 48LL * *(_QWORD *)&v4[4 * v2 + 6];
    if ( v5 < v6 )
    {
      v7 = v5 + 16;
      do
      {
        v8 = *(_QWORD *)(v7 + 24);
        if ( ((v8 >> 43) & 0x3FF) == v1 )
        {
          v9 = *(_BYTE *)(v7 + 18);
          if ( (((v9 & 7) - 2) & 0xFA) == 0
            && (v9 & 7) != 6
            && (*(_DWORD *)v7 & 0x400LL) == 0
            && (unsigned int)MiGetPagingFileOffset((__int64 *)v7)
            && (v8 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
            && *(_WORD *)(v7 + 16)
            && (v9 & 0x28) == 0
            && (*(_BYTE *)(v7 + 19) & 0x10) == 0 )
          {
            v10 = 0LL;
            v11 = MiLockPage(v5);
            v12 = *(_BYTE *)(v7 + 18);
            v14 = v11;
            if ( (((v12 & 7) - 2) & 0xFA) == 0
              && (v12 & 7) != 6
              && (*(_DWORD *)v7 & 0x400LL) == 0
              && (unsigned int)MiGetPagingFileOffset((__int64 *)v7)
              && (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
              && *(_WORD *)(v7 + 16)
              && ((unsigned __int8)~(*(_BYTE *)(v7 + 19) >> 4) & ((v12 & 0x28) == 0)) != 0 )
            {
              v10 = MiCaptureDirtyBitToPfn(v5);
            }
            MiUnlockPage(v5, v14);
            if ( v10 )
              MiReleasePageFileInfo(a1, v10, 0);
          }
          v1 = v15;
        }
        v5 += 48LL;
        v7 += 48LL;
      }
      while ( v5 < v6 );
      v2 = v16;
      v4 = v17;
    }
    v16 = ++v2;
  }
  while ( v2 != *v4 );
  MiDereferencePageRuns((__int64)v4);
  v13 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 1024) = 0LL;
  PsDereferencePartition(v13);
}
