/*
 * XREFs of ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C03445B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0343F1C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C03444F0 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine(
        PVOID IoObject,
        struct _EX_RUNDOWN_REF *Context,
        PIO_WORKITEM IoWorkItem)
{
  ULONG_PTR Count; // rax
  __int64 v6; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  WdLogSingleEntry1(4LL, 1252LL);
  Count = Context[2].Count;
  v9 = 0;
  v8 = *(_QWORD *)(Count + 16);
  v6 = v8;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( *(_DWORD *)(v6 + 200) == 1 )
    DXGPROTECTEDSESSION::SignalFence((DXGPROTECTEDSESSION *)Context);
  ExReleaseRundownProtection(Context + 17);
  DXGPROTECTEDSESSION::DestroyProtectedSession((struct DXGPROTECTEDSESSION *)Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( v9 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
}
