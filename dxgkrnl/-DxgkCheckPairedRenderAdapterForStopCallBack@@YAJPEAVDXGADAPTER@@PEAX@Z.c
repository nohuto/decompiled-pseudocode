__int64 __fastcall DxgkCheckPairedRenderAdapterForStopCallBack(struct DXGADAPTER *a1, DXGADAPTER *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // r15d
  unsigned int i; // r14d
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // ebx
  DXGADAPTER *v12[2]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-39h] BYREF
  struct DXGADAPTER *v14; // [rsp+38h] [rbp-31h]
  char v15; // [rsp+40h] [rbp-29h]
  _BYTE v16[64]; // [rsp+50h] [rbp-19h] BYREF

  v2 = *((_QWORD *)a1 + 365);
  v14 = a1;
  v15 = 0;
  v5 = *(_DWORD *)(v2 + 96);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    if ( *((_BYTE *)a2 + 209) && !*((_QWORD *)a1 + 366) )
    {
      COREACCESS::COREACCESS((COREACCESS *)v16, a1);
      COREACCESS::AcquireExclusive((__int64)v16, 1u, 0);
      for ( i = 0; i < v5; ++i )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v2, i);
        if ( VidPnSourceOwner && *(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) == a2 )
        {
          v8 = *(_QWORD *)(v2 + 448);
          v9 = 2920LL * i;
          BLTQUEUE::Flush((BLTQUEUE *)(v9 + *(_QWORD *)(v8 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v9 + *(_QWORD *)(v8 + 8)), 0);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v16);
    }
    v12[0] = 0LL;
    ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, v12, 0LL);
    if ( v12[0] == a2 )
    {
      v10 = 0;
      if ( v5 )
      {
        while ( !ADAPTER_DISPLAY::IsPartOfDesktop((ADAPTER_DISPLAY *)v2, v10) )
        {
          if ( ++v10 >= v5 )
            goto LABEL_14;
        }
        *(_BYTE *)(v2 + 288) = 1;
      }
      else
      {
LABEL_14:
        ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, 0LL, 0LL);
      }
    }
    DXGADAPTER_REFERENCE::Assign(v12, 0LL);
  }
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return 0LL;
}
