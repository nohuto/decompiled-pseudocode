/*
 * XREFs of ExpCovCreateUnloadedModuleEntry @ 0x140A034B4
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407F6CC8 (ExCovReadjustUnloadedModuleEntry.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusive @ 0x1402411A0 (ExfAcquirePushLockExclusive.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x140A03794 (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x140A0420C (ExpCovReadFriendlyName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall ExpCovCreateUnloadedModuleEntry(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // edi
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v9; // rsi
  void *v10; // rax
  UNICODE_STRING **v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // r9
  UNICODE_STRING StringIn; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  v1 = a1 + 72;
  v3 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)&StringIn.Length = 0LL;
  StringIn.Buffer = 0LL;
  if ( (int)ExpCovReadFriendlyName(v3, v1, &StringIn) < 0 )
  {
    DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
  if ( ExpCovCurrentPagedPoolInUse + 64 < (unsigned int)ExpCovCurrentPagedPoolInUse
    || (v5 = StringIn.Length + ExpCovCurrentPagedPoolInUse + 64, v5 < ExpCovCurrentPagedPoolInUse)
    || v5 == -1 )
  {
    v13 = a1 + 88;
  }
  else
  {
    v6 = StringIn.Length + v5;
    if ( v6 >= v5 )
    {
      v7 = *(_DWORD *)(a1 + 124) + v6;
      if ( v7 >= v5 && v7 != -1 )
      {
        if ( v7 <= ExCovMaxPagedPoolToUse )
        {
          Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 64LL, 1920364355LL);
          v9 = Pool2;
          if ( !Pool2 || RtlDuplicateUnicodeString(1u, &StringIn, Pool2 + 2) < 0 )
            goto LABEL_21;
          if ( StringIn.Buffer )
            RtlFreeUnicodeString(&StringIn);
          if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 88, &StringIn) >= 0
            && RtlDuplicateUnicodeString(1u, &StringIn, v9 + 1) >= 0
            && (*(_DWORD *)&v9[3].Length = *(_DWORD *)(a1 + 124),
                v10 = (void *)ExAllocatePool2(256LL, *(unsigned int *)(a1 + 124), 1920364355LL),
                (v9[3].Buffer = (wchar_t *)v10) != 0LL) )
          {
            memmove(v10, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 124));
            v11 = (UNICODE_STRING **)qword_140C2C848;
            if ( *(__int64 **)qword_140C2C848 != &ExpCovUnloadedModuleList )
              __fastfail(3u);
            *(_QWORD *)&v9->Length = &ExpCovUnloadedModuleList;
            v9->Buffer = (wchar_t *)v11;
            *v11 = v9;
            qword_140C2C848 = (__int64)v9;
            v12 = *(_OWORD *)(a1 + 88);
            ExpCovCurrentPagedPoolInUse = v7;
            v15 = v12;
            DbgPrintEx(0x7Eu, 2u, "COV: Entry created for %wZ in ExpCovUnloadedModuleList\n", &v15);
          }
          else
          {
LABEL_21:
            DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
            ExpCovFreeUnloadedModuleEntry(v9);
          }
        }
        else
        {
          DbgPrintEx(0x7Eu, 2u, "COV: Max paged pool size (%u) reached, coverage lost for %wZ\n");
        }
        goto LABEL_25;
      }
    }
    v13 = v1;
  }
  DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating paged pool size for %wZ\n", v13);
LABEL_25:
  ExfReleasePushLock(&ExpCovPushLock);
  KeLeaveCriticalRegion();
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
}
