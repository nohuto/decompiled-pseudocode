char __fastcall MiAweViewInserter(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  bool v5; // dl
  _QWORD *v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 1680);
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v5 = 0;
  v6 = *(_QWORD **)(v4 + 384);
  v7 = *(unsigned int *)(*(_QWORD *)(a2 + 24) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 24)
                                                                                              + 32LL) << 32);
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = v6[3];
      if ( v7 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
        || v7 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) )
      {
        v9 = (_QWORD *)v6[1];
        if ( !v9 )
        {
          v5 = 1;
          break;
        }
      }
      else
      {
        v9 = (_QWORD *)*v6;
        if ( !*v6 )
          break;
      }
      v6 = v9;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(v4 + 384), (unsigned __int64)v6, v5, a2);
  return MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
