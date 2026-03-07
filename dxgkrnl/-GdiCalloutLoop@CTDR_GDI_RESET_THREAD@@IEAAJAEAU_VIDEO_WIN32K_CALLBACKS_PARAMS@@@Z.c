__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  bool v4; // zf
  enum _NT_PRODUCT_TYPE ProductType[4]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v10; // [rsp+48h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  __int64 v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+70h] [rbp+27h]
  BOOL v15; // [rsp+74h] [rbp+2Bh]
  LONG Status; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]

  v3 = 0;
  v9[0] = 6;
  v13 = 0LL;
  v4 = a2->Param == 0;
  v11 = 0LL;
  v9[1] = 64;
  v15 = !v4;
  v12 = 0LL;
  v10 = 0LL;
  v14 = 49;
  v17 = 0;
  do
  {
    LOBYTE(a3) = 1;
    SMgrGdiCallout(
      a2,
      0x100000000LL,
      a3,
      &CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback,
      *((_QWORD *)this + 3),
      *(_QWORD *)(*((_QWORD *)this + 3) + 2896LL));
    if ( a2->Status == -1073741816 )
      ZwYieldExecution();
  }
  while ( a2->Status == -1073741816 );
  Status = a2->Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9, 0x100000000LL);
  ProductType[0] = 0;
  RtlGetNtProductType(ProductType);
  if ( ProductType[0] != NtProductServer )
    return (unsigned int)a2->Status;
  return v3;
}
