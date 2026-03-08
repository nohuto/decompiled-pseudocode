/*
 * XREFs of CommonBuffer_AcquireBuffers @ 0x1C000B404
 * Callers:
 *     TR_EnsureSegments @ 0x1C000B240 (TR_EnsureSegments.c)
 * Callees:
 *     CommonBuffer_QueueWorkItem @ 0x1C0008160 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C000B490 (XilCoreCommonBuffer_AcquireBuffers.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffers(
        KSPIN_LOCK *Context,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v8; // eax
  unsigned int v9; // edi
  _QWORD *v11; // rbx
  KIRQL v12; // al
  PVOID *v13; // r8
  KSPIN_LOCK *v14; // r14
  char v15; // bp
  KIRQL v16; // al
  _QWORD **v17; // rsi
  KIRQL v18; // dl
  _QWORD *i; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  char v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0;
  v8 = XilCoreCommonBuffer_AcquireBuffers((int)Context + 88, a2, a3, a4, a5, a6, (__int64)&v22);
  v9 = v8;
  if ( !v22 )
    return v9;
  v11 = a7;
  if ( v8 < 0 && a7 )
  {
    v9 = 259;
    v12 = KeAcquireSpinLockRaiseToDpc(Context + 6);
    v13 = (PVOID *)Context[8];
    if ( *v13 != Context + 7 )
      goto LABEL_20;
    *v11 = Context + 7;
    v11[1] = v13;
    *v13 = v11;
    Context[8] = (KSPIN_LOCK)v11;
    KeReleaseSpinLock(Context + 6, v12);
  }
  if ( CommonBuffer_QueueWorkItem((struct _KEVENT *)Context) || !v11 )
    return v9;
  v14 = Context + 6;
  v15 = 0;
  v16 = KeAcquireSpinLockRaiseToDpc(Context + 6);
  v17 = (_QWORD **)(Context + 7);
  v18 = v16;
  for ( i = *v17; ; i = (_QWORD *)*i )
  {
    if ( v17 == i )
      goto LABEL_14;
    if ( i == v11 )
      break;
  }
  v20 = *v11;
  if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v21 = (_QWORD *)v11[1], (_QWORD *)*v21 != v11) )
LABEL_20:
    __fastfail(3u);
  *v21 = v20;
  v15 = 1;
  *(_QWORD *)(v20 + 8) = v21;
LABEL_14:
  KeReleaseSpinLock(v14, v18);
  if ( v15 )
    return (unsigned int)-1073741670;
  return v9;
}
