/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x14039D7D4
 * Callers:
 *     LdrpGetRcConfig @ 0x14035CDC4 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14035D07C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1407928C4 (LdrResGetRCConfig.c)
 * Callees:
 *     KeReleaseMutant @ 0x14030E920 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140791780 (MmUnmapViewInSystemSpace.c)
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        PVOID *a2,
        HANDLE *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  HANDLE v11; // rdi
  unsigned int i; // eax
  unsigned __int64 v13; // rbx
  char *v14; // rcx
  char *v15; // rsi
  unsigned int j; // eax
  unsigned __int64 v17; // rcx
  __int16 v18; // dx
  __int64 v19; // rax
  int v20; // r9d
  int v21; // r8d
  unsigned __int64 v22; // rcx
  char *v23; // rdx
  PVOID v24; // rax
  char *v25; // rax
  char *Pool2; // rax
  struct _KMUTANT *Parameter; // [rsp+38h] [rbp-30h] BYREF

  v11 = 0LL;
  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  Parameter = &MuiMutex;
  RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = 0; i < AlternateResourceModuleCount; ++i )
  {
    v13 = (unsigned __int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v13 + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && *(_QWORD *)((char *)AlternateResourceModules + v13 + 16) )
        goto LABEL_53;
      if ( (a6 & 1) != 0
        && *(_QWORD *)((char *)AlternateResourceModules + v13 + 32)
        && a5
        && *(_WORD *)((char *)AlternateResourceModules + v13) == a5 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v14 = (char *)AlternateResourceModules;
        *a2 = *(PVOID *)((char *)AlternateResourceModules + v13 + 32);
        if ( a3 )
          *a3 = *(HANDLE *)&v14[v13 + 40];
        goto LABEL_53;
      }
    }
  }
  if ( (a6 & 0x10) != 0 )
    goto LABEL_53;
  v15 = (char *)AlternateResourceModules;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      Pool2 = (char *)ExAllocatePool2(
                        256LL,
                        (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6,
                        1766880370LL);
      v15 = Pool2;
      if ( !Pool2 )
        goto LABEL_53;
      memmove(Pool2, AlternateResourceModules, (unsigned __int64)(unsigned int)AltResMemBlockCount << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v15;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v25 = (char *)ExAllocatePool2(256LL, 2048LL, 1766880370LL);
    v15 = v25;
    if ( !v25 )
      goto LABEL_53;
    AlternateResourceModules = v25;
    AltResMemBlockCount = 32;
  }
  for ( j = 0; j < AlternateResourceModuleCount; ++j )
  {
    v17 = (unsigned __int64)j << 6;
    if ( *(_QWORD *)&v15[v17 + 8] == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)&v15[v17 + 16] )
      {
        *(_QWORD *)&v15[v17 + 16] = a4;
        *(_DWORD *)&v15[v17 + 56] = a7;
        goto LABEL_53;
      }
      if ( (a6 & 1) != 0 && !*(_QWORD *)&v15[v17 + 32] )
      {
        v18 = *(_WORD *)&v15[v17];
        if ( v18 == a5 || !v18 )
        {
          *(_QWORD *)&v15[v17 + 32] = *a2;
          if ( a3 )
            v11 = *a3;
          *(_QWORD *)&v15[v17 + 40] = v11;
          *(_WORD *)&v15[v17] = a5;
          *(_DWORD *)&v15[v17 + 56] = a7;
          *(_QWORD *)&v15[v17 + 48] = a8;
          goto LABEL_53;
        }
      }
    }
  }
  v19 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 88);
    v21 = AlternateResourceModuleCount;
    v22 = (unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6;
    v23 = (char *)AlternateResourceModules;
    *(_QWORD *)((char *)AlternateResourceModules + v22 + 8) = a1;
    *(_QWORD *)&v23[v22 + 16] = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v24 = *a2;
      else
        v24 = 0LL;
      *(_QWORD *)&v23[v22 + 32] = v24;
      if ( a3 )
        v11 = *a3;
      *(_QWORD *)&v23[v22 + 40] = v11;
      *(_QWORD *)&v23[v22 + 48] = a8;
    }
    else
    {
      *(_QWORD *)&v23[v22 + 32] = 0LL;
      *(_QWORD *)&v23[v22 + 40] = 0LL;
      *(_QWORD *)&v23[v22 + 48] = 0LL;
    }
    *(_WORD *)&v23[v22] = a5;
    *(_DWORD *)&v23[v22 + 24] = v20;
    *(_DWORD *)&v23[v22 + 56] = a7;
    AlternateResourceModuleCount = v21 + 1;
  }
LABEL_53:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return 1;
}
