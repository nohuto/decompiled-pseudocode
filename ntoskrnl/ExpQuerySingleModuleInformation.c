/*
 * XREFs of ExpQuerySingleModuleInformation @ 0x1409F4608
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x14079FD98 (ExpConvertLdrEntryToModuleInfo.c)
 */

__int64 __fastcall ExpQuerySingleModuleInformation(unsigned __int64 *a1, unsigned int a2, char a3, _DWORD *a4)
{
  unsigned __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v9; // rcx
  __int16 v10; // r9
  PVOID v11; // rdx
  int v12; // ebx

  *a4 = 0;
  if ( a3 )
    return 3221225506LL;
  if ( a2 < 0x148 )
    return 3221225476LL;
  v7 = *a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v9 = (PVOID *)PsLoadedModuleList;
  v10 = 0;
  if ( PsLoadedModuleList )
  {
    while ( v9 != &PsLoadedModuleList )
    {
      v11 = v9[6];
      if ( v7 >= (unsigned __int64)v11 && v7 < (unsigned __int64)v11 + *((unsigned int *)v9 + 16) )
      {
        *((_WORD *)a1 + 4) = 0;
        ExpConvertLdrEntryToModuleInfo((__int64)v9, v10, (__int64)(a1 + 1));
        v12 = 0;
        goto LABEL_11;
      }
      v9 = (PVOID *)*v9;
      ++v10;
    }
  }
  v12 = -1073741275;
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 >= 0 )
    *a4 = 328;
  return (unsigned int)v12;
}
