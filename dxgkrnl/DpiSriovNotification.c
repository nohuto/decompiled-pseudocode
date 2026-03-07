__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+40h] [rbp-18h]

  v5 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiSriovNotification", 0LL);
  if ( a4 < 4 || !a3 )
  {
    v12 = -1073741789;
    v11 = -1073741789LL;
    goto LABEL_15;
  }
  if ( (unsigned int)DpiFdoGetVirtualGpuType((__int64)a2) )
  {
    v9 = 5400LL;
    v10 = 5420LL;
  }
  else
  {
    v9 = 5368LL;
    v10 = 5388LL;
  }
  if ( !*(_BYTE *)(v10 + v5) || *(_QWORD *)(v9 + v5) )
  {
    v11 = -1073741811LL;
    v12 = -1073741811;
LABEL_15:
    WdLogSingleEntry1(2LL, v11);
    goto LABEL_16;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v14, a1, a2, 1, 0);
  v12 = v15;
  if ( v15 >= 0 )
  {
    *(_QWORD *)(v9 + v5) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)(v5 + 5272), a2, 0LL);
    v12 = 259;
    v15 = 259;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v14);
LABEL_16:
  if ( bTracingEnabled )
    VgpuTrace(0, v12, (void *)v5, L"DpiSriovNotification", 0LL);
  return v12;
}
