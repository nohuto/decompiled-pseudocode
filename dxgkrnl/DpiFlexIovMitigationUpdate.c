__int64 __fastcall DpiFlexIovMitigationUpdate(
        _QWORD *a1,
        struct _IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // rdi
  unsigned int v11; // ebx
  __int64 v13; // rdx
  int v14; // eax
  _BYTE v15[16]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-18h]

  v7 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    if ( a4 >= 8 && a3 && a6 >= 0x2C && a5 )
    {
      if ( (unsigned int)DpiFdoGetVirtualGpuType((__int64)a2) )
      {
        WdLogSingleEntry0(3LL);
        return 3221225659LL;
      }
      if ( *(_BYTE *)(v7 + 5388) && !*(_QWORD *)(v7 + 5376) )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v15, a1, a2, 1, 0);
        v14 = v16;
        if ( v16 >= 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 5440), 0, 0);
          *(_QWORD *)(v7 + 5376) = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoCsqInsertIrp((PIO_CSQ)(v7 + 5272), a2, 0LL);
          v14 = 259;
          v16 = 259;
        }
        v11 = v14;
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v15);
        goto LABEL_20;
      }
      v13 = -1073741811LL;
    }
    else
    {
      v13 = -1073741789LL;
    }
    v11 = v13;
    WdLogSingleEntry1(2LL, v13);
  }
  else
  {
    v11 = -1073741790;
    WdLogSingleEntry1(2LL, -1073741790LL);
  }
LABEL_20:
  if ( bTracingEnabled )
    VgpuTrace(0, v11, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  return v11;
}
