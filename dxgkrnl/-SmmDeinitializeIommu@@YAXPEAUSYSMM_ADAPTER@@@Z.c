void __fastcall SmmDeinitializeIommu(struct SYSMM_ADAPTER *a1)
{
  struct _MDL *v2; // rcx

  if ( (*((_DWORD *)a1 + 5) & 1) == 0 )
  {
    if ( *((_QWORD *)a1 + 14) )
    {
      SmmDetachDomainFromAllDevices();
      if ( !*((_DWORD *)a1 + 26) )
        SmmIommuDeleteDomain(*((_QWORD *)a1 + 14));
      *((_QWORD *)a1 + 14) = 0LL;
    }
    SmmClearPageManager((__int64)a1 + 128);
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 144));
    v2 = (struct _MDL *)*((_QWORD *)a1 + 30);
    if ( v2 != (struct _MDL *)((char *)a1 + 248) )
      IoFreeMdl(v2);
    if ( (*((_DWORD *)a1 + 5) & 4) != 0 && (SmmUseIommuV2Interface() || SmmUseIommuV3Interface()) )
      ((void (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, void *)))qword_1C013BC78)(SmmDomainTypeStateChangeCallback);
  }
}
