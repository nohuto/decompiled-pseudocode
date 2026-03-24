/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C02FD0A8
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C02FDD50 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C02FE080 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C004B494 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0did_EtwWriteTransfer @ 0x1C005F490 (McTemplateK0did_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02ACF48 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rbx
  struct DXGSWAPCHAIN *v8; // rcx
  int SetMetaDataInternal; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  LONGLONG QuadPart; // rax
  struct DXGSWAPCHAIN **v14; // rcx
  struct DXGSWAPCHAIN *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGPROCESS *Current; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  LONGLONG v33; // [rsp+30h] [rbp-39h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v34; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v35[8]; // [rsp+60h] [rbp-9h] BYREF
  DXGPUSHLOCK *v36; // [rsp+68h] [rbp-1h]
  int v37; // [rsp+70h] [rbp+7h]
  __int128 v38; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v39; // [rsp+88h] [rbp+1Fh]
  int v40; // [rsp+90h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 337);
  LODWORD(v7) = 0;
  if ( v3 )
  {
    v8 = *v3;
    if ( !*((_DWORD *)*v3 + 56) )
    {
      v34.hNtSwapChain = 0LL;
      v39 = 0LL;
      v40 = 0;
      *(_QWORD *)&v34.DataCopied = 0LL;
      v34.pBuffer = &v38;
      *(_QWORD *)&v34.bProducer = 1LL;
      v38 = 0LL;
      v34.bSetMetaData = 0;
      v34.BufferSize = 28;
      SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v34, 0, 0);
      if ( SetMetaDataInternal == -2147483643 )
        SetMetaDataInternal = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireShared(v36);
      v12 = DWORD1(v38);
      v37 = 1;
      if ( SetMetaDataInternal >= 0 && (v38 & 2) != 0 && (v10 = *((_QWORD *)this + 55), DWORD1(v38) > v10) )
      {
        QuadPart = *((_QWORD *)this + 56) + *((_QWORD *)this + 57) * (DWORD1(v38) - v10);
      }
      else if ( a3 )
      {
        QuadPart = a3->QuadPart;
      }
      else
      {
        QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        v12 = DWORD1(v38);
      }
      v33 = QuadPart;
      if ( SetMetaDataInternal < 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0did_EtwWriteTransfer(v10, v12, v11, SDWORD2(v38), QuadPart, 0);
      }
      else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0did_EtwWriteTransfer(v10, v12, v11, SDWORD2(v38), QuadPart, v12);
      }
      v37 = 0;
      ExReleasePushLockSharedEx(v36, 0LL);
      KeLeaveCriticalRegion();
      *((_DWORD *)a2 + 17) = DWORD1(v38);
      v14 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 337);
      v34.hNtSwapChain = 0LL;
      *(_QWORD *)&v34.bProducer = 1LL;
      *(_QWORD *)&v34.DataCopied = 0LL;
      v15 = *v14;
      v34.bSetMetaData = 1;
      v34.pBuffer = &v33;
      v34.BufferSize = 8;
      v16 = SwapChainGetSetMetaDataInternal(v15, &v34, 0x14u, 0);
      v20 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdWarning(v21);
      }
      ObfReferenceObject(*((PVOID *)this + 337));
      Current = DXGPROCESS::GetCurrent(v23, v22, v24, v25);
      v27 = DXGWORKQUEUE::QueueWork(
              (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 88LL),
              (struct _LIST_ENTRY *)lambda_8e631c23aebb5c5c759a7e2e825fab1c_::_lambda_invoker_cdecl_,
              *((struct _LIST_ENTRY **)this + 337));
      v7 = v27;
      if ( v27 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v30 + 24) = v7;
        WdLogEvent5_WdError(v30);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v31 + 24) = 1568LL;
    WdLogEvent5_WdError(v31);
    LODWORD(v7) = -1073741823;
  }
  return (unsigned int)v7;
}
