/*
 * XREFs of WmipFindSMBiosStructure @ 0x1409DC350
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x14062C800 (WmipReadSMBiosSysInfo.c)
 *     WmipGetSMBiosEventlog @ 0x1409DC58C (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1409DC80C (WmipGetSysIds.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall WmipFindSMBiosStructure(char a1, _QWORD *a2, PVOID *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _WORD *i; // rcx
  int v15; // [rsp+20h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
  v9 = 0;
  v15 = 0;
  if ( WmipSMBiosTablePhysicalAddress )
  {
    v10 = MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
    *a3 = (PVOID)v10;
    if ( v10 )
    {
      *a4 = WmipSMBiosTableLength;
      v11 = *a3;
      goto LABEL_7;
    }
    v9 = -1073741670;
  }
  else
  {
    v9 = -1073741823;
  }
  v11 = 0LL;
  v15 = v9;
LABEL_7:
  if ( v9 < 0 )
  {
LABEL_20:
    ExReleaseResourceLite(&WmipSMBiosLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)v15;
  }
  *a2 = 0LL;
  v12 = &v11[(unsigned int)WmipSMBiosTableLength];
  v15 = -1073741823;
  while ( v11 < v12 )
  {
    if ( *v11 == a1 )
    {
      *a2 = v11;
      v15 = 0;
      break;
    }
    for ( i = &v11[(unsigned __int8)v11[1]]; *i && i < (_WORD *)v12; i = (_WORD *)((char *)i + 1) )
      ;
    v11 = i + 1;
  }
  if ( v15 < 0 )
  {
    if ( *a3 )
      MmUnmapIoSpace(*a3, (unsigned int)*a4);
    goto LABEL_20;
  }
  return (unsigned int)v15;
}
