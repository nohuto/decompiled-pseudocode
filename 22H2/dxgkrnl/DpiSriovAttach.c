/*
 * XREFs of DpiSriovAttach @ 0x1C039E23C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01E4AC0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005B17C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005E398 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005E510 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C036B268 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C039B7EC (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovAttach(_QWORD *a1, struct _IRP *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edi
  unsigned int v7; // eax
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]

  v3 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovAttach", 0LL);
  v5 = (unsigned int)DpiFdoGetVirtualGpuType((__int64)a2) != 0 ? 0x20 : 0;
  if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    if ( *(_BYTE *)(v5 + v3 + 5388) || *(_QWORD *)(v5 + v3 + 5360) )
    {
      v6 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
    }
    else
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, a2, 1, 0);
      v7 = v10;
      if ( v10 >= 0 )
      {
        if ( *(_DWORD *)(v3 + 236) == 2 )
        {
          *(_BYTE *)(v5 + v3 + 5388) = 1;
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v3 + 152));
        }
        else
        {
          *(_QWORD *)(v5 + v3 + 5360) = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoCsqInsertIrp((PIO_CSQ)(v3 + 5272), a2, 0LL);
          v10 = 259;
        }
        _InterlockedIncrement(&dword_1C01409A8);
        v7 = v10;
      }
      v6 = v7;
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
    }
  }
  else
  {
    v6 = -1073741790;
    WdLogSingleEntry1(2LL, -1073741790LL);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v6, (void *)v3, L"DpiSriovAttach", 0LL);
  return v6;
}
