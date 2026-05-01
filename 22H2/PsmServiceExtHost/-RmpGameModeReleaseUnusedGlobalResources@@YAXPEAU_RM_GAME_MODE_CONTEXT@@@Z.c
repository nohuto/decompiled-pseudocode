/*
 * XREFs of ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180032648
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180032290 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeReleaseUnusedGlobalResources(struct _RM_GAME_MODE_CONTEXT *a1)
{
  unsigned int v1; // r14d
  struct _RM_GAME_MODE_CONTEXT *v2; // rax
  char *v4; // rbp
  __int64 v5; // rsi
  bool v6; // bl
  int v7; // edx
  int v8; // ebx
  bool v9; // zf
  bool v10; // al

  v1 = *((_DWORD *)a1 + 32);
  v2 = (struct _RM_GAME_MODE_CONTEXT *)*((_QWORD *)a1 + 11);
  *((_DWORD *)a1 + 20) = 0;
  v4 = (char *)v2 - 88;
  if ( v2 == (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 88) )
    v4 = 0LL;
  v9 = !_BitScanForward((unsigned int *)&v5, v1);
  v6 = !v9;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v6 )
  {
    do
    {
      v7 = 1 << v5;
      v8 = ~(1 << v5);
      v1 &= v8;
      if ( BYTE1(off_180093EB0[5 * v5 + 4]) )
      {
        v9 = (v7 & *((_DWORD *)a1 + 33)) == 0;
      }
      else
      {
        if ( !v4 )
        {
          v10 = 0;
          goto LABEL_11;
        }
        v9 = (v7 & *((_DWORD *)v4 + 41)) == 0;
      }
      v10 = !v9;
LABEL_11:
      if ( !v10 )
      {
        off_180093EB0[5 * v5 + 3](a1, 0LL);
        *((_DWORD *)a1 + 32) &= v8;
      }
      v9 = !_BitScanForward((unsigned int *)&v5, v1);
    }
    while ( !v9 );
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
}
