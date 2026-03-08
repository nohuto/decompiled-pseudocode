/*
 * XREFs of IopCommitConfiguration @ 0x14084D8A8
 * Callers:
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14096A7C4 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopCommitConfiguration(_QWORD **a1)
{
  _QWORD *v1; // r14
  unsigned int i; // ebp
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx

  v1 = *a1;
  for ( i = 0; v1 != a1; *v5 = v5 )
  {
    v4 = v1;
    v5 = v1;
    v1 = (_QWORD *)*v1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(v4 - 8) + 32LL))(*(_QWORD *)(*(v4 - 8) + 8LL), 2LL);
    v7 = v4 - 2;
    v5[1] = v5;
    v7[1] = v7;
    *v7 = v7;
    v8 = v4 - 6;
    if ( v6 < 0 )
      i = v6;
    v8[1] = v8;
    *((_WORD *)v4 + 8) = 0;
    *v8 = v8;
    v9 = v4 - 4;
    v9[1] = v9;
    *v9 = v9;
  }
  return i;
}
