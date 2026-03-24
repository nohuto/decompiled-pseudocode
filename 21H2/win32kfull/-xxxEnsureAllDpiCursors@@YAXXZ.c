/*
 * XREFs of ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C0025B2C
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C0028388 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C0024C2C (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024C7C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ThreadLockExchange @ 0x1C00C15B0 (ThreadLockExchange.c)
 */

void xxxEnsureAllDpiCursors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rcx
  struct tagCURSOR **v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // rcx
  struct tagCURSOR *v6; // rdi
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[2] = 0LL;
  v0 = 0;
  v7[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v7;
  v7[1] = 0LL;
  v1 = 0LL;
  do
  {
    v2 = *(_QWORD *)(v1 + gasyscur[0] + 8);
    if ( v2 )
    {
      ThreadLockExchange(v2, v7);
      xxxEnsureDpiCursorsForSysCur(v0);
    }
    ++v0;
    v1 += 552LL;
  }
  while ( v0 < 0x13 );
  v3 = (struct tagCURSOR **)gpKernelHandleTable;
  v4 = gSharedInfo[1];
  for ( i = v4 + 32LL * giheLast; v4 <= i; i = gSharedInfo[1] + 32LL * giheLast )
  {
    if ( *(_BYTE *)(v4 + 24) == 3 )
    {
      v6 = *v3;
      if ( (*((_DWORD *)*v3 + 20) & 0x5240) == 0x4000 )
      {
        ThreadLockExchange(*v3, v7);
        xxxEnsureDpiCursors(v6, 0LL, 0);
      }
    }
    v4 += 32LL;
    v3 += 3;
  }
  ThreadUnlock1(i);
}
