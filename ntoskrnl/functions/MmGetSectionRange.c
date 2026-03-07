__int64 __fastcall MmGetSectionRange(unsigned __int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int v15; // r8d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = MiLookupDataTableEntry(a1, 0);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8[6];
    v11 = a1 - v10;
    v12 = RtlImageNtHeader(v10);
    v13 = 0;
    if ( *(_WORD *)(v12 + 6) )
    {
      v14 = (unsigned int *)(v12 + *(unsigned __int16 *)(v12 + 20) + 32LL);
      while ( 1 )
      {
        v15 = v14[2];
        v16 = v14[1];
        if ( v15 < *v14 )
          v15 = *v14;
        if ( v11 >= v16 && v11 < v15 + (unsigned int)v16 )
          break;
        v14 += 10;
        if ( ++v13 >= (unsigned int)*(unsigned __int16 *)(v12 + 6) )
          goto LABEL_11;
      }
      v17 = v16 + v9[6];
      *a3 = v15;
      *a2 = v17;
      v7 = 0;
    }
  }
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v7;
}
