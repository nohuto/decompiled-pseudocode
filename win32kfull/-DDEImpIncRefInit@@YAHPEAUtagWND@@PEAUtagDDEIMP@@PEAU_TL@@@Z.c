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
