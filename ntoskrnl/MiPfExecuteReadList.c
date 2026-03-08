/*
 * XREFs of MiPfExecuteReadList @ 0x1406A3F98
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406A3DCC (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14078DBC4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPageRead @ 0x14020CED0 (MiPageRead.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiReferenceInPageFile @ 0x140343354 (MiReferenceInPageFile.c)
 *     SmPageRead @ 0x1405C76E0 (SmPageRead.c)
 *     MiReadFromMemoryPagefile @ 0x14065E368 (MiReadFromMemoryPagefile.c)
 */

int __fastcall MiPfExecuteReadList(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r15d
  char v9; // r12
  int v11; // edi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v4 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 120;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = a2 & 2;
  v9 = 0;
  if ( v7 != a1 + 120 )
  {
    v11 = a2 & 1;
    do
    {
      v12 = *(_QWORD *)(v7 + 256);
      *(_WORD *)(v12 + 10) |= 0x42u;
      *(_DWORD *)(v7 + 184) = *(_DWORD *)(v12 + 40);
      v13 = MiReferenceInPageFile(v7, a3);
      if ( v13 )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = *(_QWORD *)(v7 + 200);
        v13 = *(_QWORD *)(v14 + 56);
      }
      *(_QWORD *)(v7 + 200) = v13;
      *(_QWORD *)(v7 + 168) = 0LL;
      *(_QWORD *)(v7 + 232) = *(_QWORD *)(v7 + 240);
      if ( v11 )
      {
        v9 = BYTE4(CurrentThread[1].Queue);
        BYTE4(CurrentThread[1].Queue) = 1;
      }
      if ( v14 && _bittest16((const signed __int16 *)(v14 + 204), 0xBu) )
      {
        MiReadFromMemoryPagefile(v14, v7);
        LODWORD(v4) = 0;
      }
      else
      {
        v15 = v7 + 32;
        if ( (*(_DWORD *)(v7 + 192) & 0x100) != 0 )
          LODWORD(v4) = SmPageRead(
                          *(_QWORD *)(*(_QWORD *)(v14 + 248) + 200LL),
                          (union _MM_STORE_KEY *)(v7 + 96),
                          (v7 + 272) | ((-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3),
                          v15,
                          (_SLIST_ENTRY *)(v7 + 80));
        else
          LODWORD(v4) = MiPageRead(*(struct _FILE_OBJECT **)(v7 + 200), v12, v7 + 96, v15, v7 + 80, 6, a4);
      }
      if ( v11 )
        BYTE4(CurrentThread[1].Queue) = v9;
      if ( (int)v4 < 0 )
      {
        *(_QWORD *)(v7 + 88) = 0LL;
        *(_DWORD *)(v7 + 80) = (_DWORD)v4;
        LODWORD(v4) = KeSetEvent((PRKEVENT)(v7 + 32), 0, 0);
      }
      v7 = *(_QWORD *)v7;
    }
    while ( v7 != v6 );
  }
  return (int)v4;
}
