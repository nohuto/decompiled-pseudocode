void __fastcall CreateStandardAllocCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 6) = DXGDEVICE::CreateStandardAllocation(
                                 *(DXGDEVICE **)Parameter,
                                 *((struct _D3DKM_CREATESTANDARDALLOCATION **)Parameter + 1),
                                 *((struct COREDEVICEACCESS **)Parameter + 2));
}
