NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  unsigned int v2; // edi
  NTSTATUS inserted; // ebx
  int OperationRegistrationCount; // eax
  unsigned int v7; // ebp
  __int64 Pool2; // rax
  _WORD *v9; // rsi
  unsigned int Length; // edx
  void *v11; // rcx
  unsigned int v12; // r12d
  OB_OPERATION_REGISTRATION *v13; // r14
  unsigned __int64 PreOperation; // rcx
  unsigned __int64 *p_PostOperation; // rbp
  struct _EX_RUNDOWN_REF *v16; // rbx
  POBJECT_TYPE v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  _QWORD *v21; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  struct _KTHREAD *v25; // rax
  bool v26; // zf

  v2 = 0;
  inserted = 0;
  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  if ( !(_WORD)OperationRegistrationCount )
    return -1073741811;
  v7 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  Pool2 = ExAllocatePool2(256LL, v7, 1816552015LL);
  v9 = (_WORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_WORD *)Pool2 = 256;
  *(_QWORD *)(Pool2 + 8) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  *(_WORD *)(Pool2 + 18) = Length;
  *(_WORD *)(Pool2 + 16) = Length;
  v11 = (void *)(Pool2 + v7 - Length);
  *(_QWORD *)(Pool2 + 24) = v11;
  memmove(v11, CallbackRegistration->Altitude.Buffer, Length);
  v12 = 0;
  if ( CallbackRegistration->OperationRegistrationCount )
  {
    while ( 1 )
    {
      v13 = &CallbackRegistration->OperationRegistration[v12];
      if ( !v13->Operations || ((*v13->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
      {
LABEL_19:
        inserted = -1073741811;
        goto LABEL_12;
      }
      PreOperation = (unsigned __int64)v13->PreOperation;
      p_PostOperation = (unsigned __int64 *)&v13->PostOperation;
      if ( PreOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
          break;
      }
      else if ( !*p_PostOperation )
      {
        goto LABEL_19;
      }
      if ( *p_PostOperation && !(unsigned int)MmVerifyCallbackFunctionCheckFlags(*p_PostOperation, 32) )
        break;
      v16 = (struct _EX_RUNDOWN_REF *)&v9[32 * (unsigned __int64)v12 + 16];
      v16[1].Count = (unsigned __int64)v16;
      v16->Count = (unsigned __int64)v16;
      ExInitializePushLock(v16 + 7);
      LODWORD(v16[2].Count) = v13->Operations;
      v16[3].Count = (unsigned __int64)v9;
      v17 = *v13->ObjectType;
      v16[4].Count = (unsigned __int64)v17;
      v16[5].Count = (unsigned __int64)v13->PreOperation;
      v16[6].Count = *p_PostOperation;
      inserted = ObpInsertCallbackByAltitude(v17, v16);
      if ( inserted >= 0 )
      {
        ++v9[1];
        if ( ++v12 < CallbackRegistration->OperationRegistrationCount )
          continue;
      }
      goto LABEL_12;
    }
    inserted = -1073741790;
  }
LABEL_12:
  v18 = v9[1];
  if ( inserted < 0 )
  {
    if ( v18 )
    {
      do
      {
        v21 = &v9[32 * (unsigned __int64)v2 + 16];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v21[4] + 184LL, 0LL);
        v23 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v24 = (_QWORD *)v21[1], (_QWORD *)*v24 != v21) )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        ExReleasePushLockEx((__int64 *)(v21[4] + 184LL), 0LL);
        v25 = KeGetCurrentThread();
        v26 = v25->SpecialApcDisable++ == -1;
        if ( v26 && ($C71981A45BEB2B45F82C232A7085991E *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
          KiCheckForKernelApcDelivery();
        ++v2;
      }
      while ( v2 < (unsigned __int16)v9[1] );
    }
    ExFreePoolWithTag(v9, 0x6C46624Fu);
  }
  else
  {
    if ( v18 )
    {
      do
      {
        v19 = v2++;
        *(_DWORD *)&v9[32 * v19 + 26] |= 1u;
      }
      while ( v2 < (unsigned __int16)v9[1] );
    }
    *RegistrationHandle = v9;
  }
  return inserted;
}
