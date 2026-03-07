__int64 __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _BYTE *a8)
{
  unsigned __int8 CurrentIrql; // r13
  char v9; // di
  PVOID v10; // r15
  PVOID v11; // r14
  NTSTATUS v12; // esi
  volatile signed __int64 *v13; // r12
  _BYTE *AssociatedWaitObject; // rax
  _BYTE *v15; // r12
  char v16; // al
  KSPIN_LOCK *v17; // rdx
  PVOID v18; // rdi
  PVOID v19; // rdx
  char v20; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  NTSTATUS v36; // [rsp+40h] [rbp-68h]
  KSPIN_LOCK *v37; // [rsp+48h] [rbp-60h]
  PVOID v38; // [rsp+50h] [rbp-58h] BYREF
  PVOID v39; // [rsp+58h] [rbp-50h] BYREF
  volatile signed __int64 *v40; // [rsp+60h] [rbp-48h]

  CurrentIrql = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  v37 = (KSPIN_LOCK *)Object;
  v13 = (volatile signed __int64 *)Object;
  v40 = (volatile signed __int64 *)Object;
  if ( v12 < 0 )
    goto LABEL_12;
  v39 = 0LL;
  v12 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v39, 0LL);
  v10 = v39;
  if ( v12 < 0 )
    goto LABEL_12;
  v38 = 0LL;
  v12 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v38, 0LL);
  v11 = v38;
  v36 = v12;
  if ( v12 < 0 )
    goto LABEL_12;
  AssociatedWaitObject = (_BYTE *)ObGetAssociatedWaitObject(v38);
  v15 = AssociatedWaitObject;
  if ( !AssociatedWaitObject || (v16 = *AssociatedWaitObject & 0x7F, v16 == 2) || v16 == 4 )
  {
    v12 = -1073741583;
    goto LABEL_39;
  }
  v9 = 1;
  v17 = v37;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v23) = 4;
    else
      v23 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v23;
    v37 = (KSPIN_LOCK *)Object;
  }
  KxAcquireSpinLock(v17 + 12);
  if ( *((_BYTE *)v37 + 104) )
  {
    v12 = -1073741585;
LABEL_39:
    v13 = v40;
    goto LABEL_12;
  }
  v18 = Object;
  *((_BYTE *)Object + 104) = 1;
  *((_QWORD *)v18 + 6) = a4;
  *((_QWORD *)v18 + 7) = a5;
  *((_DWORD *)v18 + 18) = a6;
  *((_QWORD *)v18 + 8) = a7;
  *((_QWORD *)v18 + 10) = v38;
  v19 = v39;
  *((_QWORD *)v18 + 11) = v39;
  v20 = KeRegisterObjectNotification(v15, v19, v18);
  KxReleaseSpinLock((volatile signed __int64 *)v18 + 12);
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v29 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v9 = 0;
  if ( a8 )
  {
    if ( PreviousMode )
    {
      v24 = (__int64)a8;
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v24 = *(_BYTE *)v24;
    }
    *a8 = v20;
  }
  v10 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
LABEL_12:
  if ( v9 )
  {
    KxReleaseSpinLock(v13 + 12);
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v13, 0x746C6644u);
  return (unsigned int)v12;
}
