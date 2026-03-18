/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005CAB0
 * Callers:
 *     xxxDoPaint @ 0x1C005C838 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005CAB0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005CAB0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 *     xxxCompositedPaint @ 0x1C0239C94 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagWND *v9; // rdi
  struct tagWND *v11; // rax
  struct tagWND *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v16 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v14 = *(_QWORD *)(v3 + 416);
  *(_QWORD *)(v3 + 416) = &v14;
  v15 = a1;
  if ( !a1 )
    return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  HMLockObject(a1);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)a1 + 2) == a2 )
    {
      v7 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v7 + 27) & 2) != 0 )
      {
        xxxCompositedPaint(a1);
        a1 = (struct tagWND *)*((_QWORD *)a1 + 11);
        ThreadLockExchange(a1, &v14);
        goto LABEL_11;
      }
      if ( *(_QWORD *)(v7 + 136) || (*(_BYTE *)(v7 + 17) & 0x10) != 0 )
        break;
    }
    v7 = *((_QWORD *)a1 + 14);
    if ( v7 )
    {
      v11 = xxxInternalDoPaint((struct tagWND *)v7, a2);
      v12 = v11;
      if ( v11 )
      {
        if ( v11 == a1 )
          return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
        ThreadUnlock1(v7, v6, v8);
        return v12;
      }
    }
    a1 = (struct tagWND *)*((_QWORD *)a1 + 11);
    v9 = v15;
    v15 = a1;
    if ( a1 )
      HMLockObject(a1);
    if ( v9 )
      HMUnlockObject(v9);
LABEL_11:
    if ( !a1 )
      return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  }
  if ( (*(_BYTE *)(v7 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  v13 = *((_QWORD *)a1 + 11);
  if ( !v13 )
    return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v13 + 16) == a2 )
    {
      v7 = *(_QWORD *)(v13 + 40);
      if ( (*(_QWORD *)(v7 + 136) || (*(_BYTE *)(v7 + 17) & 0x10) != 0) && (*(_BYTE *)(v7 + 24) & 0x20) == 0 )
        break;
    }
    v13 = *(_QWORD *)(v13 + 88);
    if ( !v13 )
      return (struct tagWND *)ThreadUnlock1(v7, v6, v8);
  }
  ThreadUnlock1(v7, v6, v8);
  return (struct tagWND *)v13;
}
