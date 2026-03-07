void __fastcall xxxEnsureAllDpiCursors(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 i; // rax
  __int64 v10; // rdi
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[2] = 0LL;
  v3 = 0;
  v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v11;
  v11[1] = 0LL;
  v4 = 0LL;
  do
  {
    v5 = *(_QWORD *)(v4 + gasyscur[0] + 8);
    if ( v5 )
    {
      ThreadLockExchange(v5, v11);
      xxxEnsureDpiCursorsForSysCur(v3);
    }
    ++v3;
    v4 += 552LL;
  }
  while ( v3 < 0x13 );
  v6 = gSharedInfo[0];
  v7 = (_QWORD *)gpKernelHandleTable;
  v8 = gSharedInfo[1];
  for ( i = v8 + 32LL * giheLast; v8 <= i; i = gSharedInfo[1] + 32LL * giheLast )
  {
    v10 = *v7;
    if ( *(_BYTE *)(v8 + 24) == 3 && (*(_DWORD *)(v10 + 80) & 0x5240) == 0x4000 )
    {
      ThreadLockExchange(*v7, v11);
      xxxEnsureDpiCursors((struct tagCURSOR *)v10, 0LL, 0);
    }
    v8 += 32LL;
    v6 = gSharedInfo[0];
    v7 += 3;
  }
  ThreadUnlock1(v6, a2, a3);
}
