__int64 __fastcall SysMmQueryTestInterface(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  if ( a3 <= 1 && a2 >= 0x98 )
  {
    *a1 = SysMmTestCreatePhysicalObjectForExistingMdl;
    a1[1] = SysMmTestCreatePhysicalObjectForExistingPhysicalMemory;
    a1[2] = SysMmReferencePhysicalObject;
    a1[3] = SysMmUnreferencePhysicalObject;
    a1[4] = SysMmOpenPhysicalObject;
    a1[5] = SysMmClosePhysicalObject;
    a1[6] = SysMmTestLockObject;
    a1[7] = SysMmUnlockObject;
    a1[8] = SysMmCreateAdl;
    a1[9] = SysMmFreeAdl;
    a1[10] = SysMmTestEnableIommu;
    a1[11] = SysMmTestDisableIommu;
    a1[12] = SysMmTestCreateContiguousMemoryPhysicalObject;
    a1[13] = SysMmTestCreateMdlPhysicalObject;
    a1[14] = SysMmTestCreateSectionPhysicalObject;
    a1[15] = SysMmTestCreateIoSpacePhysicalObject;
    a1[16] = SysMmTestCreateVirtualMemoryPhysicalObject;
    a1[17] = SysMmTestMapPhysicalObject;
    a1[18] = SysMmUnmapPhysicalObject;
    if ( !a3 )
      return 0LL;
    if ( a2 >= 0xA0 )
    {
      a1[19] = &SysMmTestQueryAdapterInfo;
      return 0LL;
    }
  }
  return 3221225485LL;
}
