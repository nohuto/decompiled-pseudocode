void __fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(
        PVOID *a1)
{
  struct _LOOKASIDE_LIST_EX *v2; // rcx

  v2 = (struct _LOOKASIDE_LIST_EX *)*a1;
  if ( v2 )
  {
    ExDeleteLookasideListEx(v2);
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0x4D504F47u);
    *a1 = 0LL;
  }
}
