void __fastcall ExCovReadjustUnloadedModuleEntry(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  char v7; // si
  _DWORD *v8; // rdi
  _DWORD *v9; // rbp
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned int v12; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    CurrentThread = KeGetCurrentThread();
    String2.Buffer = 0LL;
    *(_DWORD *)&String2.Length = 0;
    --CurrentThread->KernelApcDisable;
    ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
    v5 = ExpCovUnloadedModuleList;
    v6 = 0LL;
    v7 = 0;
    while ( (__int64 *)v5 != &ExpCovUnloadedModuleList )
    {
      v6 = v5;
      if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 72, &String2) >= 0
        && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 32), &String2, 1u) )
      {
        if ( String2.Buffer )
          RtlFreeUnicodeString(&String2);
        break;
      }
      if ( String2.Buffer )
        RtlFreeUnicodeString(&String2);
      v5 = *(_QWORD *)v5;
    }
    if ( !v6 || (__int64 *)v5 == &ExpCovUnloadedModuleList )
    {
      if ( !a2 )
        v7 = 1;
    }
    else
    {
      v8 = *(_DWORD **)(v6 + 56);
      v9 = *(_DWORD **)(a1 + 128);
      if ( v9[1] == v8[1] && v9[6] == v8[6] && v9[7] == v8[7] && RtlCompareMemory(v9 + 2, v8 + 2, 0x10uLL) == 16 )
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for same versioned %wZ found\n", v6 + 16, *(_QWORD *)&String2.Length);
        v10 = *(_QWORD *)(a1 + 128) + (unsigned int)v9[8];
        v11 = *(_QWORD *)(v6 + 56) + (unsigned int)v8[8];
        if ( a2 )
        {
          memmove(
            (void *)(*(_QWORD *)(a1 + 128) + (unsigned int)v9[8]),
            (const void *)(*(_QWORD *)(v6 + 56) + (unsigned int)v8[8]),
            (unsigned int)v9[7]);
          ExpCovDeleteUnloadedModuleEntry(v6);
        }
        else
        {
          v12 = 0;
          if ( (v8[7] & 0xFFFFFFFC) != 0 )
          {
            do
            {
              _InterlockedOr((volatile signed __int32 *)(v11 + 4LL * v12), *(_DWORD *)(v10 + 4LL * v12));
              ++v12;
            }
            while ( v12 < v8[7] >> 2 );
          }
        }
      }
      else
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for different versioned %wZ found\n", v6 + 16, *(_QWORD *)&String2.Length);
        ExpCovDeleteUnloadedModuleEntry(v6);
        if ( !a2 )
          v7 = 1;
      }
    }
    ExfReleasePushLock(&ExpCovPushLock);
    KeLeaveCriticalRegion();
    if ( v7 )
      ExpCovCreateUnloadedModuleEntry(a1);
  }
}
