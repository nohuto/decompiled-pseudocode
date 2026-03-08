/*
 * XREFs of UnlockChildPages @ 0x1C03917B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void UnlockChildPages(__int64 a1, char a2, __int64 a3, ...)
{
  int v3; // eax
  __int64 v6; // rbx
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rcx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = *(_DWORD *)(a1 + 424);
  if ( (v3 & 0x100) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
LABEL_3:
    v7 = (struct _KTHREAD **)(v6 + 160);
    goto LABEL_7;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 608);
    goto LABEL_3;
  }
  v7 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, v7 + 2, 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v12 = 1;
  if ( *((_BYTE *)v7 + 68) )
  {
    v9 = *v7;
    LOBYTE(v8) = a2;
    v13 = a3;
    ((void (__fastcall *)(struct _KTHREAD *, __int64, __int64, __int64 *, __int64 *))qword_1C013D0C8)(
      v9,
      v8,
      1LL,
      &v13,
      (__int64 *)va);
  }
  _InterlockedDecrement(&g_VgpuNumLockedChildRanges);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
