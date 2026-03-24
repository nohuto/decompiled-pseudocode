/*
 * XREFs of ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EDA2C
 * Callers:
 *     ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01ED9D0 (-EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C0048E10 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C004AA00 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C004AA44 (CheckOrAcquireDwmStateLock.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0063BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // r14
  PVOID v5; // rdi
  NTSTATUS v6; // ebx
  char *v7; // rdx
  int v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *v12; // [rsp+48h] [rbp-8h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v14; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v15; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  Object = 0LL;
  Handle = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v4 = CheckOrAcquireDwmStateLock();
  v5 = ReferenceDwmProcess();
  if ( v5 )
  {
    v6 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &Object, 0LL);
    if ( v6 >= 0 )
    {
      v6 = ObDuplicateObject(Object, -1LL, v5, &Handle, -1073741824, 0, 2, 1);
      if ( v6 >= 0 )
      {
        LOBYTE(v9) = 1;
        v6 = ObDuplicateObject(Object, *((_QWORD *)this + 11), v5, &v15, 1048578, 0, 2, v9);
        if ( v6 >= 0 )
        {
          LOBYTE(v10) = 1;
          v6 = ObDuplicateObject(Object, *((_QWORD *)this + 10), v5, &v14, -1073741824, 0, 2, v10);
        }
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0);
  if ( v6 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
      Handle = 0LL;
    }
    if ( v15 )
    {
      ObCloseHandle(v15, 1);
      v15 = 0LL;
    }
    if ( v14 )
    {
      ObCloseHandle(v14, 1);
      v14 = 0LL;
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v4 )
    GreUnlockDwmState();
  v12 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v12) )
  {
    v7 = (char *)v12;
    *(_DWORD *)v12 = 36;
    *(_OWORD *)(v7 + 4) = 0LL;
    *(_OWORD *)(v7 + 20) = 0LL;
    *((_DWORD *)v7 + 1) = 180;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v7 + 12) = v14;
    *(_QWORD *)(v7 + 20) = v15;
    *(_QWORD *)(v7 + 28) = Handle;
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
