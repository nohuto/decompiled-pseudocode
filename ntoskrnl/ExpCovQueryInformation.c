/*
 * XREFs of ExpCovQueryInformation @ 0x140A03B6C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusive @ 0x1402411A0 (ExfAcquirePushLockExclusive.c)
 *     ExfAcquirePushLockShared @ 0x1402413D0 (ExfAcquirePushLockShared.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140A03718 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x140A038D4 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140A03908 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x140A0429C (ExpCovReadRequestBuffer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCovQueryInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v3; // r15
  __int64 v4; // rdi
  unsigned int *Pool2; // rsi
  __int64 v8; // rax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Buffer; // r13d
  unsigned int *v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // r14
  void *v15; // r15
  __int64 v16; // rax
  __int64 i; // rdi
  __int64 v18; // r15
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  unsigned int v21; // eax
  _WORD *v22; // rdx
  void *v23; // rax
  unsigned int *v24; // [rsp+20h] [rbp-138h]
  int v25; // [rsp+28h] [rbp-130h] BYREF
  int v26; // [rsp+2Ch] [rbp-12Ch]
  unsigned __int64 v27; // [rsp+30h] [rbp-128h]
  unsigned int *v28; // [rsp+38h] [rbp-120h]
  unsigned int v29; // [rsp+40h] [rbp-118h]
  UNICODE_STRING StringIn; // [rsp+48h] [rbp-110h] BYREF
  _WORD *v31; // [rsp+58h] [rbp-100h]
  void *v32; // [rsp+60h] [rbp-F8h]
  _QWORD *v33; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+70h] [rbp-E8h]
  UNICODE_STRING v35[4]; // [rsp+80h] [rbp-D8h] BYREF
  _OWORD v36[4]; // [rsp+C0h] [rbp-98h] BYREF
  UNICODE_STRING v37; // [rsp+100h] [rbp-58h] BYREF

  v3 = a3;
  v24 = a3;
  v4 = a2;
  v29 = a2;
  v34 = a1;
  memset(v35, 0, sizeof(v35));
  StringIn = 0LL;
  v25 = 0;
  v27 = 0LL;
  Pool2 = 0LL;
  v28 = 0LL;
  LODWORD(v35[3].Buffer) = 64;
  LODWORD(v35[0].Buffer) = v4;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( v3 )
    *v3 = 64;
  if ( (unsigned int)v4 < 0x40 )
    return 3221225476LL;
  v27 = a1 + 32;
  v8 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v8 = a1;
  v36[0] = *(_OWORD *)v8;
  v36[1] = *(_OWORD *)(v8 + 16);
  v36[2] = *(_OWORD *)(v8 + 32);
  v36[3] = *(_OWORD *)(v8 + 48);
  BYTE4(v35[0].Buffer) = LODWORD(v36[0]) == 1;
  v9 = ExpCovReadRequestBuffer((char *)v36 + 8, &StringIn, &v37, &v25);
  if ( v9 >= 0 )
  {
    *(_DWORD *)&v35[3].Length = v25;
    v35[2] = v37;
    if ( !StringIn.Buffer || (v9 = RtlDuplicateUnicodeString(1u, &StringIn, &v35[1]), v9 >= 0) )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, v4, 1920364355LL);
      v28 = Pool2;
      *(_QWORD *)&v35[0].Length = Pool2;
      if ( !Pool2 )
      {
        v9 = -1073741670;
        goto LABEL_51;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)v35);
      if ( v9 < 0 )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_51;
      }
      ExpCovQueryHypervisorInformation((__int64 *)v35);
      Buffer = (unsigned int)v35[3].Buffer;
      v26 = *(_DWORD *)(&v35[3].MaximumLength + 1);
      if ( (unsigned int)v4 >= LODWORD(v35[3].Buffer)
        && (unsigned int)((__int64)(*(_QWORD *)&v35[0].Length - (_QWORD)Pool2) >> 5) )
      {
        v12 = Pool2;
        v13 = *(_DWORD *)(&v35[3].MaximumLength + 1);
        v14 = v27;
        while ( v13 )
        {
          v15 = (void *)(v12[6] + v14 + 32);
          *(_DWORD *)v14 = *v12;
          *(_DWORD *)(v14 + 4) = v12[1];
          *(_DWORD *)(v14 + 24) = v12[6];
          memmove((void *)(v14 + 28), v12 + 7, v12[6]);
          *(_WORD *)(v14 + 8) = *((_WORD *)v12 + 4);
          *(_WORD *)(v14 + 10) = *((_WORD *)v12 + 5);
          *(_QWORD *)(v14 + 16) = v15;
          memmove(v15, *((const void **)v12 + 2), *((unsigned __int16 *)v12 + 4));
          v16 = *v12;
          v14 += v16;
          v27 = v14;
          v12 = (unsigned int *)((char *)v12 + v16);
          v13 = --*(_DWORD *)(&v35[3].MaximumLength + 1);
        }
        v3 = v24;
      }
      else
      {
        if ( (unsigned int)v4 < LODWORD(v35[3].Buffer) )
          v9 = -1073741820;
        v14 = v27;
      }
      if ( LODWORD(v36[0]) == 1 )
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
      else
        ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
      for ( i = ExpCovUnloadedModuleList; ; i = *(_QWORD *)i )
      {
        while ( 1 )
        {
          if ( (__int64 *)i == &ExpCovUnloadedModuleList )
          {
            ExfReleasePushLock(&ExpCovPushLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( v3 )
              *v3 = Buffer;
            *(_DWORD *)(v34 + 4) = v26;
            goto LABEL_51;
          }
          v33 = (_QWORD *)i;
          v18 = *(_QWORD *)(i + 56);
          if ( v18 )
          {
            if ( ExpCovIsUnLoadedModulePresent(i, v25, &StringIn, &v37) )
              break;
          }
LABEL_31:
          i = *(_QWORD *)i;
          v3 = v24;
        }
        v19 = *(_DWORD *)(i + 48);
        if ( LODWORD(v36[0]) != 1 )
          v19 -= *(_DWORD *)(v18 + 28);
        if ( v19 >= 0xFFFFFFE0 || (v20 = *(unsigned __int16 *)(i + 32) + v19 + 32, v20 < 0x20) )
          v20 = -1;
        v31 = (_WORD *)(i + 32);
        v21 = v20 + Buffer;
        if ( v20 + Buffer < Buffer )
        {
          DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", i + 32, v24);
          goto LABEL_31;
        }
        Buffer += v20;
        if ( v29 >= v21 )
        {
          v32 = (void *)(v19 + v14 + 32);
          *(_DWORD *)v14 = v20;
          *(_DWORD *)(v14 + 4) = 0;
          *(_DWORD *)(v14 + 24) = v19;
          memmove((void *)(v14 + 28), *(const void **)(i + 56), v19);
          v22 = v31;
          *(_WORD *)(v14 + 8) = *v31;
          *(_WORD *)(v14 + 10) = *v22;
          v23 = v32;
          *(_QWORD *)(v14 + 16) = v32;
          memmove(v23, *(const void **)(i + 40), (unsigned __int16)*v22);
          v14 += v20;
          v27 = v14;
          if ( LODWORD(v36[0]) == 1 )
          {
            i = *(_QWORD *)(i + 8);
            ExpCovDeleteUnloadedModuleEntry(v33);
          }
          v3 = v24;
        }
        else
        {
          v3 = v24;
          if ( v24 )
            *v24 = v21;
          v9 = -1073741820;
        }
        ++v26;
      }
    }
  }
LABEL_51:
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
  if ( v35[1].Buffer )
    RtlFreeUnicodeString(&v35[1]);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x72766F43u);
  return (unsigned int)v9;
}
