/*
 * XREFs of IopValidateAndGetWriteParameters @ 0x1402400A0
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x14035A864 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1406B3E10 (IopWriteFile.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402409DC (IopVerifyDeviceObjectOnStack.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IopExceptionFilter @ 0x1405530E8 (IopExceptionFilter.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopValidateAndGetWriteParameters(
        struct _KTHREAD **a1,
        void *a2,
        struct _KTHREAD **a3,
        unsigned __int64 a4,
        char a5)
{
  PVOID *v8; // rsi
  struct _KTHREAD *v9; // rax
  int v10; // edx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // r8
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rdi
  _QWORD *v15; // rax
  struct _KTHREAD *i; // rax
  struct _KTHREAD *v17; // r15
  unsigned __int64 v18; // rcx
  struct _KTHREAD *v19; // r8
  _KPROCESS *Process; // rcx
  __int64 v21; // rax
  struct _KTHREAD *v22; // rcx
  NTSTATUS v23; // edi
  __int16 v24; // ax
  struct _KTHREAD *Lock; // rcx
  KPROCESSOR_MODE v26; // r9
  volatile __int32 *v27; // rdi
  struct _KTHREAD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rdx
  int v31; // eax
  struct _KTHREAD *v33; // r10
  unsigned int Dpc_low; // r8d
  _DWORD *v35; // r11
  int v36; // ecx
  __int64 v37; // rdi
  struct _KTHREAD **v38; // r15
  struct _KEVENT *v39; // rcx
  struct _KTHREAD *v41; // rcx
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h]

  Handle = a2;
  Object = a1;
  if ( a1[12] )
  {
    if ( a1[6] || a2 || (v8 = (PVOID *)(a1 + 2), a1[2]->ApcState.ApcListHead[1].Blink) )
    {
      v23 = -1073741811;
      v8 = (PVOID *)(a1 + 2);
      goto LABEL_115;
    }
  }
  else
  {
    v8 = (PVOID *)(a1 + 2);
  }
  v9 = a1[15];
  if ( v9 && *(_QWORD *)&v9->Header.Lock && *(_DWORD *)(*(_QWORD *)&v9->Header.Lock + 40LL) < *((_DWORD *)a1 + 18) )
  {
    v23 = -1073741811;
    goto LABEL_115;
  }
  v10 = *((_DWORD *)a1 + 28);
  if ( (v10 & 1) != 0 && (*((_DWORD *)*v8 + 20) & 8) == 0 )
  {
    v23 = -1073740587;
    goto LABEL_115;
  }
  CurrentThread = KeGetCurrentThread();
  *a1 = CurrentThread;
  *((_BYTE *)a1 + 8) = CurrentThread->PreviousMode;
  v12 = *v8;
  *((_BYTE *)a1 + 9) = (*((_BYTE *)*v8 + 80) & 2) != 0 && v10 >= 0;
  *((_BYTE *)a1 + 10) = (v10 & 0x40000000) == 0;
  v13 = v12[2];
  if ( (!v13 || (v14 = *(struct _KTHREAD **)(v13 + 8)) == 0LL)
    && ((v12[10] & 0x800) != 0
     || (v37 = *(_QWORD *)(v12[1] + 56LL)) == 0
     || (v14 = *(struct _KTHREAD **)(v37 + 8)) == 0LL) )
  {
    v14 = (struct _KTHREAD *)v12[1];
  }
  if ( v14->SListFaultAddress )
  {
    v15 = (_QWORD *)v12[26];
    if ( v15 )
    {
      if ( v15 != IopRevocationExtension )
      {
        v38 = (struct _KTHREAD **)v15[2];
        if ( v38 )
        {
          v17 = *v38;
          if ( v17 )
          {
            if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(v14, v17, 0LL) )
              goto LABEL_12;
          }
        }
      }
    }
    for ( i = (struct _KTHREAD *)v14->SListFaultAddress; i; i = (struct _KTHREAD *)i->SListFaultAddress )
      v14 = i;
  }
  v17 = v14;
LABEL_12:
  a1[3] = v17;
  if ( !*((_BYTE *)a1 + 8) || a1[12] )
  {
    if ( a3 )
      a1[10] = *a3;
    if ( a4 )
      *((_DWORD *)a1 + 22) = *(_DWORD *)a4;
  }
  else
  {
    v18 = (unsigned __int64)a1[7];
    if ( v18 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
    v19 = a1[5];
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v24 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( (v24 == 332 || v24 == 452) && !*((_BYTE *)a1 + 9) )
      {
        Lock = (struct _KTHREAD *)(unsigned int)a1[7]->Header.Lock;
        Lock->Header.LockNV = Lock->Header.LockNV;
        a1[7] = Lock;
        a1[5] = (struct _KTHREAD *)((unsigned __int64)v19 | 1);
      }
    }
    if ( !a1[16] )
    {
      v21 = *((unsigned int *)a1 + 18);
      if ( (_DWORD)v21 )
      {
        v22 = a1[8];
        if ( (unsigned __int64)v22 + v21 > 0x7FFFFFFF0000LL || (struct _KTHREAD *)((char *)v22 + v21) < v22 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( *((_QWORD *)*v8 + 22) && ((unsigned __int64)a1[5] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v23 = -1073741811;
      goto LABEL_54;
    }
    if ( a3 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a1[10] = *a3;
    }
    if ( a4 )
    {
      if ( a4 >= 0x7FFFFFFF0000LL )
        a4 = 0x7FFFFFFF0000LL;
      *((_DWORD *)a1 + 22) = *(_DWORD *)a4;
    }
  }
  v26 = *((_BYTE *)a1 + 8);
  if ( !v26 || (*((_DWORD *)*v8 + 20) & 8) == 0 )
    goto LABEL_40;
  v33 = a1[3];
  Dpc_low = LOWORD(v33->Timer.Dpc);
  v35 = a1 + 9;
  if ( ((_WORD)Dpc_low && ((Dpc_low - 1) & *v35) != 0
     || (LODWORD(v33->ApcState.ApcListHead[0].Flink) & (unsigned __int64)a1[8]) != 0)
    && ((_WORD)Dpc_low && *v35 % Dpc_low || (LODWORD(v33->ApcState.ApcListHead[0].Flink) & (unsigned __int64)a1[8]) != 0) )
  {
LABEL_102:
    v23 = -1073741811;
    goto LABEL_115;
  }
  if ( !a3
    || (v36 = *((_DWORD *)a1 + 20), v36 == -1) && *((_DWORD *)a1 + 21) == -1
    || v36 == -2 && *((_DWORD *)a1 + 21) == -1 && *((_BYTE *)a1 + 9)
    || !(_WORD)Dpc_low
    || ((Dpc_low - 1) & v36) == 0 )
  {
LABEL_40:
    if ( (a5 & 6) == 4 )
      a1[10] = (struct _KTHREAD *)-1LL;
    if ( Handle )
    {
      Object = 0LL;
      v23 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v26, &Object, 0LL);
      v39 = (struct _KEVENT *)Object;
      a1[4] = (struct _KTHREAD *)Object;
      if ( v23 < 0 )
        goto LABEL_54;
      KeResetEvent(v39);
    }
    else
    {
      v23 = 0;
    }
    if ( *((_BYTE *)a1 + 9) )
    {
      v27 = (volatile __int32 *)*v8;
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v29 = KeAbPreAcquire(v27 + 32, 0LL, 0LL);
      LOBYTE(Object) = 0;
      if ( _InterlockedExchange(v27 + 29, 1) )
      {
        v23 = IopWaitAndAcquireFileObjectLock((PVOID)v27, (__int64)&Object);
      }
      else
      {
        if ( v29 )
          *(_BYTE *)(v29 + 18) = 1;
        ObfReferenceObject((PVOID)v27);
        v23 = 0;
      }
      if ( (_BYTE)Object )
        goto LABEL_54;
      v30 = a1 + 10;
      if ( !a3 && !*(_DWORD *)v30 || *(_DWORD *)v30 == -2 && *((_DWORD *)a1 + 21) == -1 )
        *v30 = *((_QWORD *)*v8 + 13);
    }
    else if ( !a3 && (*((_DWORD *)*v8 + 20) & 0x280) == 0 )
    {
      v23 = -1073741811;
      goto LABEL_115;
    }
    v31 = *((_DWORD *)a1 + 21);
    if ( v31 < 0 && (v31 != -1 || *((_DWORD *)a1 + 20) != -1) )
    {
      if ( *((_BYTE *)a1 + 9) )
      {
        IopReleaseFileObjectLock(*v8);
        v23 = -1073741811;
        goto LABEL_115;
      }
      goto LABEL_102;
    }
LABEL_54:
    if ( v23 >= 0 )
      return (unsigned int)v23;
    goto LABEL_115;
  }
  v23 = -1073741811;
LABEL_115:
  v41 = a1[4];
  if ( v41 )
  {
    ObfDereferenceObjectWithTag(v41, 0x746C6644u);
    a1[4] = 0LL;
  }
  ObfDereferenceObjectWithTag(*v8, 0x746C6644u);
  *v8 = 0LL;
  return (unsigned int)v23;
}
