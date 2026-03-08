/*
 * XREFs of ?CreateStandardAllocCallout@@YAXPEAX@Z @ 0x1C01B52E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4968 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

void __fastcall CreateStandardAllocCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 6) = DXGDEVICE::CreateStandardAllocation(
                                 *(DXGDEVICE **)Parameter,
                                 *((struct _D3DKM_CREATESTANDARDALLOCATION **)Parameter + 1),
                                 *((struct COREDEVICEACCESS **)Parameter + 2));
}
