/*
 * XREFs of ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01CCEE4
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C01E1520 (NtUserfnDDEINIT.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 */

__int64 __fastcall DDEImpIncRefInit(struct tagWND *a1, struct tagDDEIMP *a2, struct _TL *a3)
{
  __int16 v3; // ax
  __int64 v6; // rcx

  v3 = *((_WORD *)a2 + 44);
  if ( v3 >= 4096 )
    return 0LL;
  v6 = 0LL;
  *((_WORD *)a2 + 44) = v3 + 1;
  if ( a1 )
    v6 = *(_QWORD *)a1;
  PushW32ThreadLock(v6, a3, (__int64)DDEImpDecRefInitWorker);
  return 1LL;
}
