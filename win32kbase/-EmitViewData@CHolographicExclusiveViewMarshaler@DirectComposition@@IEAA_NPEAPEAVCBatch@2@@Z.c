char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // r14
  void *v7; // rdi
  NTSTATUS v8; // ebx
  PVOID v9; // rcx
  char *v10; // rdx
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+38h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *v15; // [rsp+48h] [rbp-8h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v17; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v18; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  Object = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v6 = CheckOrAcquireDwmStateLock((__int64)this, (__int64)a2, a3, a4);
  v7 = (void *)ReferenceDwmProcess();
  if ( v7 )
  {
    v8 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = ObDuplicateObject(Object, -1LL, v7, &Handle, -1073741824, 0, 2, 1);
      if ( v8 >= 0 )
      {
        LOBYTE(v12) = 1;
        v8 = ObDuplicateObject(Object, *((_QWORD *)this + 11), v7, &v18, 1048578, 0, 2, v12);
        if ( v8 >= 0 )
        {
          LOBYTE(v13) = 1;
          v8 = ObDuplicateObject(Object, *((_QWORD *)this + 10), v7, &v17, -1073741824, 0, 2, v13);
        }
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v9 = Object;
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0);
  if ( v8 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
      Handle = 0LL;
    }
    if ( v18 )
    {
      ObCloseHandle(v18, 1);
      v18 = 0LL;
    }
    v9 = v17;
    if ( v17 )
    {
      ObCloseHandle(v17, 1);
      v17 = 0LL;
    }
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v6 )
    GreUnlockDwmState((__int64)v9);
  v15 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v15) )
  {
    v10 = (char *)v15;
    *(_DWORD *)v15 = 36;
    *(_OWORD *)(v10 + 4) = 0LL;
    *(_OWORD *)(v10 + 20) = 0LL;
    *((_DWORD *)v10 + 1) = 172;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v10 + 12) = v17;
    *(_QWORD *)(v10 + 20) = v18;
    *(_QWORD *)(v10 + 28) = Handle;
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
