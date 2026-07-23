/*
 * XREFs of NtEnumerateDriverEntries @ 0x1409539B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x1402EC94C (ExUnlockUserBuffer.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x14089993C (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x140951120 (ExpSafeWcslen.c)
 *     ExpTranslateDriverEntryNameToId @ 0x140952190 (ExpTranslateDriverEntryNameToId.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r14
  unsigned int *v4; // r15
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  NTSTATUS v10; // ebx
  _DWORD *v11; // r13
  struct _KTHREAD *v12; // rax
  int v13; // r12d
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r14
  __int64 v16; // rax
  char *v17; // r8
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  BOOL v24; // r8d
  unsigned int v25; // edx
  BOOL v26; // eax
  BOOL v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  _DWORD *v30; // rcx
  size_t v31; // r8
  __int64 v32; // rax
  BOOL v33; // [rsp+38h] [rbp-A0h]
  int v34; // [rsp+3Ch] [rbp-9Ch] BYREF
  unsigned int v35; // [rsp+40h] [rbp-98h]
  unsigned int v36; // [rsp+44h] [rbp-94h]
  unsigned int v37; // [rsp+48h] [rbp-90h]
  NTSTATUS v38; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v39; // [rsp+50h] [rbp-88h]
  _DWORD *v40; // [rsp+58h] [rbp-80h] BYREF
  PVOID P; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-70h]
  size_t Size; // [rsp+70h] [rbp-68h]
  void *Src; // [rsp+78h] [rbp-60h]
  void *v45; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+F8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v40 = 0LL;
  P = 0LL;
  v4 = 0LL;
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v7 = (__int64)BufferLength;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    v8 = Buffer != 0LL ? *BufferLength : 0;
    if ( v8 )
      ProbeForWrite(Buffer, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v8 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( !v8
    || (result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v40, (struct _MDL **)&P),
        result >= 0) )
  {
    v9 = v40;
    v10 = 0;
    v33 = v8 != 0;
    v11 = 0LL;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    LODWORD(NumberOfBytes) = 0;
    v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, 0LL, &NumberOfBytes);
    if ( v13 == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
        v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, (__int64)PoolWithTag, &NumberOfBytes);
      else
        v13 = -1073741670;
    }
    else
    {
      LODWORD(NumberOfBytes) = 0;
    }
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v13 || !(_DWORD)NumberOfBytes )
      goto LABEL_53;
    v15 = v4;
    v42 = (unsigned __int64)v4 + 2 * (unsigned int)NumberOfBytes;
    while ( 1 )
    {
      v34 = 0;
      v16 = *((_QWORD *)v15 + 2) - EfiDriverVariablesGuid;
      if ( !v16 )
        v16 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v16 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v15 + 16, &v34) && v15[2] >= 8 )
      {
        v17 = (char *)v15 + v15[1];
        v37 = *((unsigned __int16 *)v17 + 2);
        Src = v17 + 6;
        v18 = ExpSafeWcslen((_WORD *)v17 + 3, v42);
        if ( v18 != -1 )
          v18 = 2 * v18 + 2;
        if ( v18 != -1 && v21 < v20 && v20 >= v21 + v18 + 6 )
          break;
      }
LABEL_49:
      v32 = *v15;
      if ( !(_DWORD)v32 )
      {
        v2 = BufferLength;
        if ( v11 )
          *v11 = 0;
LABEL_53:
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        if ( P )
          ExUnlockUserBuffer((struct _MDL *)P);
        if ( v13 < 0 )
          v10 = v13;
        *v2 = (_DWORD)v9 - (_DWORD)v40;
        return v10;
      }
      v15 = (unsigned int *)((char *)v15 + v32);
    }
    Size = v18;
    v45 = (void *)(v19 + v18 + 6LL);
    v22 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_DWORD *)v22 != v9 )
    {
      v23 = v22 - (_DWORD)v9;
      v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v8 < v23 )
      {
        v24 = 0;
        v8 = 0;
        v10 = -1073741789;
LABEL_38:
        v35 = (v18 + 23) & 0xFFFFFFFC;
        v36 = v21 + v35 + 12;
        v25 = v36 + 4;
        v39 = v36 + 4;
        if ( v8 < v36 + 4 )
          v10 = -1073741789;
        v38 = v10;
        v26 = 0;
        if ( v8 >= v25 )
          v26 = v24;
        v27 = v26;
        v33 = v26;
        v28 = v8;
        v29 = v8 - v25;
        v8 = 0;
        if ( v28 >= v25 )
          v8 = v29;
        if ( v27 )
        {
          memset(v9, 0, v25);
          v9[1] = 1;
          v9[2] = v36;
          v9[3] = v34;
          v9[4] = 20;
          v9[5] = v35;
          memmove(v9 + 6, Src, Size);
          v30 = (_DWORD *)((char *)v9 + v35 + 4);
          *v30 = 1;
          v31 = v37;
          v30[1] = v37 + 12;
          v30[2] = 4;
          memmove(v30 + 3, v45, v31);
          if ( v11 )
            *v11 = (_DWORD)v9 - (_DWORD)v11;
          v11 = v9;
          v10 = v38;
          v25 = v39;
        }
        v9 = (_DWORD *)((char *)v9 + v25);
        goto LABEL_49;
      }
      v8 -= v23;
    }
    v24 = v33;
    goto LABEL_38;
  }
  return result;
}
