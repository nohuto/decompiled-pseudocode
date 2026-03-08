/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C039FA48
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C03A00C0 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C005E784 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        struct _FILE_OBJECT *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        struct _FILE_OBJECT *a9,
        bool *a10)
{
  struct _FILE_OBJECT *v10; // r12
  unsigned int v11; // ebp
  size_t v13; // rsi
  __int64 v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // eax
  struct _FILE_OBJECT **Pool2; // rbx
  __int64 v19; // rcx
  void (*v20)(void *, struct _IO_STATUS_BLOCK *); // rax
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v23; // rax
  struct _FILE_OBJECT **v25; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+78h] [rbp+20h]

  Src = a4;
  v10 = a6;
  v11 = a7;
  v13 = (unsigned int)Size;
  v25 = 0LL;
  if ( !Object )
  {
    WdLogSingleEntry1(3LL, DeviceObject);
    LODWORD(v15) = -1073741130;
    goto LABEL_21;
  }
  v16 = Size;
  if ( (unsigned int)Size <= a7 )
    v16 = a7;
  v17 = v16 + 56;
  if ( v17 < 0x38 )
  {
    v15 = -1073741675LL;
    v19 = 2LL;
    goto LABEL_20;
  }
  Pool2 = (struct _FILE_OBJECT **)ExAllocatePool2(64LL, v17, 1953656900LL);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v25);
  v25 = Pool2;
  a10 = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&a10);
  if ( !Pool2 )
  {
    v15 = -1073741801LL;
    v19 = 6LL;
LABEL_20:
    WdLogSingleEntry1(v19, v15);
    goto LABEL_21;
  }
  v20 = a8;
  *Pool2 = Object;
  Pool2[3] = (struct _FILE_OBJECT *)v20;
  Pool2[4] = a9;
  *((_DWORD *)Pool2 + 12) = 1;
  LODWORD(v15) = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
  if ( (int)v15 >= 0 )
  {
    Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
    v15 = (__int64)Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( !v11 )
        v10 = 0LL;
      CurrentStackLocation[-1].MajorFunction = 14;
      CurrentStackLocation[-1].Parameters.Read.Length = v11;
      CurrentStackLocation[-1].Parameters.Create.Options = v13;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2296832;
      Irp->UserBuffer = v10;
      Pool2[5] = v10;
      if ( (_DWORD)v13 || v11 )
      {
        Irp->AssociatedIrp.MasterIrp = (struct _IRP *)(Pool2 + 7);
        if ( (_DWORD)v13 )
          memmove(Pool2 + 7, Src, v13);
      }
      CurrentStackLocation[-1].FileObject = Object;
      v25 = 0LL;
      v23 = *(_QWORD *)(v15 + 184);
      *(_QWORD *)(v23 - 16) = DpiIndirectIoCompleteRoutine;
      *(_QWORD *)(v23 - 8) = Pool2;
      *(_BYTE *)(v23 - 69) = -32;
      LODWORD(v15) = IofCallDriver(DeviceObject, (PIRP)v15);
    }
    else
    {
      LODWORD(v15) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
  }
LABEL_21:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v25);
  return (unsigned int)v15;
}
