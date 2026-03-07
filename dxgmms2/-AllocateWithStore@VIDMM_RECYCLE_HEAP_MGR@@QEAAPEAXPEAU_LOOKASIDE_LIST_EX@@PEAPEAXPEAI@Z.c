PVOID __fastcall VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _LOOKASIDE_LIST_EX *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v5; // rax
  PVOID v6; // rbx

  if ( *a4 )
  {
    v5 = *a4 - 1;
    v6 = a3[v5];
    a3[v5] = 0LL;
    --*a4;
  }
  else
  {
    v6 = ExAllocateFromLookasideListEx(a2);
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage(this, a2) && v6 )
    ++*((_DWORD *)this + 422);
  return v6;
}
