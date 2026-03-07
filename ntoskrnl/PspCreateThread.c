__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        void *a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char PreviousMode; // r12
  _KPROCESS *v14; // rdi
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  int inserted; // ebx
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r13
  int Flink_high; // eax
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+68h] [rbp-98h] BYREF
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  PVOID v29; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  ULONG_PTR v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-40h]
  _BYTE v39[400]; // [rsp+D0h] [rbp-30h] BYREF

  PreviousMode = 0;
  v14 = a5;
  v30 = a6;
  v35 = a7;
  v33 = a9;
  v28 = a11;
  v31 = a12;
  v34 = a3;
  v27 = a2;
  v36 = a1;
  v32 = a13;
  v26 = 0;
  memset(v39, 0, sizeof(v39));
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v29 = 0LL;
  Object = 0LL;
  if ( a4 )
  {
    inserted = ObReferenceObjectByHandleWithTag(
                 a4,
                 2u,
                 (POBJECT_TYPE)PsProcessType,
                 KeGetCurrentThread()->PreviousMode,
                 0x72437350u,
                 &Object,
                 0LL);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v14 = (_KPROCESS *)Object;
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741816;
    ObfReferenceObjectWithTag(a5, 0x72437350u);
    Object = a5;
  }
  v19 = v14->SecureState.SecureHandle & 1;
  if ( a8 || v19 )
    PreviousMode = CurrentThread->PreviousMode;
  if ( v14 != Process )
  {
    if ( !PspIsProcessReadyForRemoteThread((__int64)v14) )
      return 3221225473LL;
    v14 = (_KPROCESS *)Object;
  }
  v20 = v28;
  if ( v28 && a8 )
  {
    v20 = v28 & -(__int64)(v19 != 0);
    v28 = v20;
  }
  if ( !v30
    && !v20
    && (((__int64)v14[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || _bittest((const signed __int32 *)&v14[2].ReadyListHead.Blink + 1, 0xEu)
     || _bittest((const signed __int32 *)&Process[2].ReadyListHead.Blink + 1, 0xEu)) )
  {
    return 3221225506LL;
  }
  if ( !PreviousMode )
  {
LABEL_12:
    if ( (HIDWORD(v14[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v14[2].Affinity.Count && a8 )
      goto LABEL_39;
    PspMapThreadCreationFlags(a10, &v26);
    if ( v19 )
    {
      if ( a8 )
      {
LABEL_39:
        inserted = -1073741790;
        goto LABEL_45;
      }
      v26 |= 0x400u;
    }
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
    {
      ObfReferenceObjectWithTag(Object, 0x72437350u);
      v21 = v30;
      v22 = v33;
      v37 = v33;
      inserted = PspAllocateThread(
                   (PRKPROCESS)Object,
                   v34,
                   PreviousMode,
                   v30,
                   a8,
                   &v37,
                   v28,
                   v31,
                   &v26,
                   &v29,
                   (_BYTE *)v32,
                   (size_t)v39);
      if ( inserted >= 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x72437350u);
        inserted = PspInsertThread(
                     (ULONG_PTR)v29,
                     (__int64)Object,
                     v22,
                     &v26,
                     v27,
                     (_BYTE *)v32,
                     v21,
                     v31,
                     (PACCESS_STATE)v39,
                     (PVOID *)v36,
                     (_OWORD *)v35);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObject(v29);
        return (unsigned int)inserted;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      inserted = -1073741558;
    }
    v14 = (_KPROCESS *)Object;
    goto LABEL_45;
  }
  Flink_high = HIDWORD(v14[2].Header.WaitListHead.Flink);
  if ( (Flink_high & 0x1000) == 0 )
  {
    if ( (Flink_high & 1) != 0 )
    {
      inserted = -1073741816;
LABEL_45:
      ObfDereferenceObjectWithTag(v14, 0x72437350u);
      return (unsigned int)inserted;
    }
    goto LABEL_12;
  }
  ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return 3221225480LL;
}
