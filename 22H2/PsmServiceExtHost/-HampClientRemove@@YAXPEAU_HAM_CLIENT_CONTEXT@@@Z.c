/*
 * XREFs of ?HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800087FC
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180008734 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800096F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampClientRemove(struct _HAM_CLIENT_CONTEXT *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx

  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a1);
  v2 = (_OWORD *)((char *)a1 + 8);
  v3 = *((_QWORD *)a1 + 1);
  if ( *(struct _HAM_CLIENT_CONTEXT **)(v3 + 8) != (struct _HAM_CLIENT_CONTEXT *)((char *)a1 + 8)
    || (v4 = (_QWORD *)*((_QWORD *)a1 + 2), (_OWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  HampManagerReleaseLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a1);
}
