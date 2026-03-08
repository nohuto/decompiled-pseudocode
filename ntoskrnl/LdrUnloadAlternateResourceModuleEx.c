/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x14036C9E0
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x14035D974 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14036C804 (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeReleaseMutant @ 0x14030E920 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140791780 (MmUnmapViewInSystemSpace.c)
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1)
{
  char v2; // bl
  int v3; // edi
  int v4; // r15d
  _QWORD *v5; // rsi
  char *v6; // rcx
  void *v7; // rcx
  int v8; // ebx
  int v9; // eax
  void *Pool2; // rax
  void *v11; // rdi
  struct _KMUTANT *v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 0;
  v13 = &MuiMutex;
  RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &v13, 0LL);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v3 <= 0 )
        goto LABEL_21;
      v4 = v3 - 1;
      v5 = (char *)AlternateResourceModules + 64 * (__int64)(v3 - 1);
      if ( v5[1] == a1 )
        break;
LABEL_5:
      v3 = v4;
    }
    v6 = (char *)v5[4];
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v6);
      v7 = (void *)v5[5];
      if ( v7 )
      {
        ZwClose(v7);
        v5[5] = 0LL;
      }
      v5[4] = 0LL;
    }
    v8 = AlternateResourceModuleCount;
    if ( v3 != AlternateResourceModuleCount )
      memmove(v5, v5 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v3) << 6);
    AlternateResourceModuleCount = v8 - 1;
    if ( v8 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v9 = 0;
    }
    else
    {
      if ( v8 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v2 = 1;
        goto LABEL_5;
      }
      Pool2 = (void *)ExAllocatePool2(
                        256LL,
                        (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                        1766880370LL);
      v11 = Pool2;
      if ( !Pool2 )
      {
        v2 = 0;
        goto LABEL_21;
      }
      memmove(Pool2, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v11;
      v9 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v9;
    goto LABEL_20;
  }
  v2 = 1;
LABEL_21:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v2;
}
