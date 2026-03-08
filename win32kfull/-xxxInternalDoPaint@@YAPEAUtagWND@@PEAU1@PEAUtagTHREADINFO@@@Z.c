/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00C3680
 * Callers:
 *     xxxDoPaint @ 0x1C00C3298 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00C3680 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     xxxCompositedPaint @ 0x1C0015794 (xxxCompositedPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00C3680 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagWND *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  struct tagWND *v9; // rax
  struct tagWND *v10; // rdi
  __int64 v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v3 = a1;
  ThreadLock(a1, &v12);
  if ( !v3 )
    return (struct tagWND *)ThreadUnlock1(v5, v4, v6);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)v3 + 2) == a2 )
    {
      v5 = *((_QWORD *)v3 + 5);
      if ( (*(_BYTE *)(v5 + 27) & 2) != 0 )
      {
        xxxCompositedPaint(v3);
        v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
        ThreadLockExchange(v3, &v12);
        goto LABEL_8;
      }
      if ( *(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0 )
        break;
    }
    v5 = *((_QWORD *)v3 + 14);
    if ( v5 )
    {
      v9 = xxxInternalDoPaint((struct tagWND *)v5, a2);
      v10 = v9;
      if ( v9 )
      {
        if ( v9 == v3 )
          return (struct tagWND *)ThreadUnlock1(v5, v4, v6);
        ThreadUnlock1(v5, v4, v6);
        return v10;
      }
    }
    v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
    v7 = *((_QWORD *)&v12 + 1);
    *((_QWORD *)&v12 + 1) = v3;
    if ( v3 )
      HMLockObject(v3);
    if ( v7 )
      HMUnlockObject(v7);
LABEL_8:
    if ( !v3 )
      return (struct tagWND *)ThreadUnlock1(v5, v4, v6);
  }
  if ( (*(_BYTE *)(v5 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v5, v4, v6);
  v11 = *((_QWORD *)v3 + 11);
  if ( !v11 )
    return (struct tagWND *)ThreadUnlock1(v5, v4, v6);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v11 + 16) == a2 )
    {
      v5 = *(_QWORD *)(v11 + 40);
      if ( (*(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0) && (*(_BYTE *)(v5 + 24) & 0x20) == 0 )
        break;
    }
    v11 = *(_QWORD *)(v11 + 88);
    if ( !v11 )
      return (struct tagWND *)ThreadUnlock1(v5, v4, v6);
  }
  ThreadUnlock1(v5, v4, v6);
  return (struct tagWND *)v11;
}
