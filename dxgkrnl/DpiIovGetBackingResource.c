__int64 __fastcall DpiIovGetBackingResource(_DWORD *a1, struct _LUID a2, unsigned __int16 a3, __int64 a4, void *a5)
{
  _QWORD *v5; // r14
  int VirtualGpuType; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rdi
  int v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 v13; // [rsp+34h] [rbp-2Ch]
  __int16 v14; // [rsp+36h] [rbp-2Ah]
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  _BYTE v17[8]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  int ResourceForBar; // [rsp+58h] [rbp-8h]
  struct _LUID v20; // [rsp+98h] [rbp+38h] BYREF

  v20 = a2;
  v5 = a5;
  a5 = 0LL;
  *(_OWORD *)a4 = 0LL;
  *(_DWORD *)(a4 + 16) = 0;
  *v5 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &a5);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v17, a5, 0LL, 1, 0);
  v9 = ResourceForBar;
  if ( ResourceForBar < 0 )
    goto LABEL_10;
  v10 = v18;
  LOWORD(a5) = 0;
  ResourceForBar = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD **)(v18 + 3912), VirtualGpuType, &v20, &a5);
  v9 = ResourceForBar;
  if ( ResourceForBar < 0 )
    goto LABEL_10;
  if ( *(_BYTE *)(v10 + 2692) )
  {
    if ( !*(_QWORD *)(v10 + 5248) )
    {
      ResourceForBar = DxgkDdiGetResourceForBar(*(_QWORD **)(v10 + 3912), VirtualGpuType, (unsigned __int16)a5, a3, a4);
      v9 = ResourceForBar;
      if ( ResourceForBar >= 0 )
      {
        *v5 = *(_QWORD *)(a4 + 4);
        *(_OWORD *)a4 = 0LL;
        *(_DWORD *)(a4 + 16) = 0;
      }
      goto LABEL_10;
    }
  }
  else if ( !*(_QWORD *)(v10 + 5248) )
  {
    goto LABEL_10;
  }
  v12 = (unsigned __int16)a5;
  v14 = 0;
  v16 = 0LL;
  v13 = a3;
  v15 = a4;
  ResourceForBar = DxgkDdiGetBackingResource(*(_QWORD **)(v10 + 3912), VirtualGpuType, (__int64)&v12);
  v9 = ResourceForBar;
  if ( ResourceForBar >= 0 )
    *v5 = v16;
LABEL_10:
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v17);
  return v9;
}
