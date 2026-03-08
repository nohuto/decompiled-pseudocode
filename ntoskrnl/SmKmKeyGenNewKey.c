/*
 * XREFs of SmKmKeyGenNewKey @ 0x1409D6384
 * Callers:
 *     SmKmKeyGenGenerate @ 0x1409D601C (SmKmKeyGenGenerate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SmCrGenRandom @ 0x1405CB86C (SmCrGenRandom.c)
 *     SmKmKeyGenKeyFind @ 0x1409D61C4 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenLoadKey @ 0x1409D6208 (SmKmKeyGenLoadKey.c)
 */

__int64 __fastcall SmKmKeyGenNewKey(ULONG_PTR BugCheckParameter2, _WORD *Src, ULONG cbBuffer)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  void *NonPaged; // rax
  __int64 v8; // rdi
  NTSTATUS v9; // esi
  void *v10; // rcx
  __int64 v11; // r8
  ULONG v12; // r9d
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  HANDLE v17; // r9
  _WORD *v18; // rcx
  __int64 v19; // r8
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  v3 = cbBuffer;
  KeyHandle = 0LL;
  v4 = -1LL;
  ValueName = 0LL;
  do
    ++v4;
  while ( Src[v4] );
  NonPaged = (void *)SSHSupportAllocateNonPaged(cbBuffer + 42 + 2 * (_DWORD)v4, 0x474B6D73u);
  v8 = (__int64)NonPaged;
  if ( !NonPaged )
    return (unsigned int)-1073741670;
  memset(NonPaged, 0, (unsigned int)(v3 + 42 + 2 * v4));
  *(_QWORD *)(v8 + 24) = v8 + 40;
  v10 = (void *)(v3 + v8 + 40);
  *(_DWORD *)(v8 + 32) = v3;
  *(_QWORD *)(v8 + 16) = v10;
  memmove(v10, Src, 2LL * (unsigned int)v4);
  if ( !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_8;
  v13 = SmKmKeyGenLoadKey((UNICODE_STRING *)(BugCheckParameter2 + 24), v8, &KeyHandle);
  v9 = v13;
  if ( v13 >= 0 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( !SmKmKeyGenKeyFind(BugCheckParameter2, Src) )
    {
      v15 = (__int64 *)(BugCheckParameter2 + 8);
      v16 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( *(_QWORD *)(v16 + 8) != BugCheckParameter2 + 8 )
        __fastfail(3u);
      v17 = KeyHandle;
      *(_QWORD *)v8 = v16;
      *(_QWORD *)(v8 + 8) = v15;
      *(_QWORD *)(v16 + 8) = v8;
      *v15 = v8;
      if ( v17 )
      {
        if ( *(_QWORD *)(v8 + 16) )
        {
          v18 = *(_WORD **)(v8 + 16);
          v19 = 0x7FFFLL;
          while ( *v18 )
          {
            ++v18;
            if ( !--v19 )
              goto LABEL_19;
          }
          ValueName.Buffer = *(wchar_t **)(v8 + 16);
          ValueName.Length = 2 * (0x7FFF - v19);
          ValueName.MaximumLength = ValueName.Length + 2;
        }
LABEL_19:
        ZwDeleteValueKey(v17, &ValueName);
      }
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v9 = 0;
    goto LABEL_24;
  }
  if ( v13 == -1073741772 )
  {
LABEL_8:
    v9 = SmCrGenRandom(*(PUCHAR *)(v8 + 24), v3, v11, v12);
    if ( v9 >= 0 )
      goto LABEL_9;
  }
LABEL_24:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  return (unsigned int)v9;
}
