__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v4; // ebp
  enum _D3DKMT_DEVICEEXECUTION_STATE v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  v25 = 0;
  v4 = 0;
  v5 = D3DKMT_DEVICEEXECUTION_ACTIVE;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 10066LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pExecutionState != NULL", 10066LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 152) != 1 )
  {
    if ( *((_DWORD *)this + 152) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v4;
    }
    if ( *((_DWORD *)this + 152) == 3 )
      goto LABEL_31;
    if ( *((_DWORD *)this + 152) != 4 )
    {
      WdLogSingleEntry1(1LL, 10166LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Unexpected device execution state!",
        10166LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_15:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
    return v4;
  }
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    v7 = *(_DWORD *)(*((_QWORD *)this + 60) + 16LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL)
                                                           + 192LL))(
           *((_QWORD *)this + 100),
           &v25);
    v7 = v25;
    v4 = v6;
  }
  v8 = v7;
  v9 = v7 & 0x7FFFFFFF;
  v10 = v8 & 0x80000000;
  v25 = v9;
  if ( (v4 & 0x80000000) != 0 )
    return v4;
  if ( v9 > 0xE )
  {
    v18 = v9 - 15;
    if ( !v18 )
      goto LABEL_42;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_42;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_42;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_42;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_42;
    v23 = v22 - 3;
    if ( v23 )
    {
      v24 = v23 - 2;
      if ( !v24 )
        goto LABEL_42;
      if ( v24 - 1 >= 2 )
      {
LABEL_29:
        WdLogSingleEntry1(1LL, 10154LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Unexpected device error!", 10154LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_30;
      }
    }
    goto LABEL_15;
  }
  if ( v9 == 14 )
    goto LABEL_15;
  if ( v9 )
  {
    v12 = v9 - 2;
    if ( !v12 )
    {
LABEL_30:
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
      return v4;
    }
    v13 = v12 - 4;
    if ( !v13 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
      return v4;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 2;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 || v17 - 1 < 2 )
            goto LABEL_30;
          goto LABEL_29;
        }
      }
LABEL_42:
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
      return v4;
    }
LABEL_31:
    *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
    return v4;
  }
  if ( v10 || *((_BYTE *)this + 73) )
    v5 = D3DKMT_DEVICEEXECUTION_RESET;
  *a2 = v5;
  return v4;
}
