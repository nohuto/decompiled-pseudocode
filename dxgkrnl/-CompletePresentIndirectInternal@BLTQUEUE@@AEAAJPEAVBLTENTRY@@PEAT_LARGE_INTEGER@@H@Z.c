/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C03CC4E4
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C03CD34C (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03CD618 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002997C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0xqdid_EtwWriteTransfer @ 0x1C006D9D4 (McTemplateK0xqdid_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C0355968 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rdi
  struct DXGSWAPCHAIN *v8; // r14
  int SetMetaDataInternal; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  LONGLONG QuadPart; // rax
  DXGPUSHLOCK *v14; // rcx
  struct DXGSWAPCHAIN **v15; // rcx
  struct DXGSWAPCHAIN *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct DXGPROCESS *Current; // rax
  int v20; // eax
  int v22; // [rsp+38h] [rbp-A1h]
  _D3DKMT_GETSETSWAPCHAINMETADATA v23; // [rsp+50h] [rbp-89h] BYREF
  LONGLONG v24; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-59h] BYREF
  DXGPUSHLOCK *v26; // [rsp+88h] [rbp-51h]
  int v27; // [rsp+90h] [rbp-49h]
  _DWORD v28[20]; // [rsp+A0h] [rbp-39h] BYREF

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
  LODWORD(v7) = 0;
  if ( !v3 )
  {
    WdLogSingleEntry1(2LL, 1608LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present to Indirect display does not have a shared swapchain to present to",
      1608LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  v8 = *v3;
  if ( !*((_DWORD *)*v3 + 58) )
  {
    memset(v28, 0, sizeof(v28));
    v23.hNtSwapChain = 0LL;
    v23.pBuffer = v28;
    *(_QWORD *)&v23.DataCopied = 0LL;
    *(_QWORD *)&v23.bProducer = 1LL;
    v23.bSetMetaData = 0;
    v23.BufferSize = 80;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v23, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)this + 51, 0);
    DXGPUSHLOCK::AcquireShared(v26);
    v12 = v28[2];
    v27 = 1;
    if ( SetMetaDataInternal >= 0 && (v28[0] & 2) != 0 && (v10 = *((_QWORD *)this + 56), v28[2] > v10) )
    {
      QuadPart = *((_QWORD *)this + 57) + *((_QWORD *)this + 58) * (v28[2] - v10);
      v24 = QuadPart;
    }
    else
    {
      if ( a3 )
      {
        QuadPart = a3->QuadPart;
      }
      else
      {
        QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        v12 = v28[2];
      }
      v24 = QuadPart;
      if ( SetMetaDataInternal < 0 )
      {
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_20;
        v22 = 0;
        goto LABEL_19;
      }
    }
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      goto LABEL_20;
    v22 = v12;
LABEL_19:
    McTemplateK0xqdid_EtwWriteTransfer(
      v10,
      v12,
      v11,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      v28[3],
      QuadPart,
      v22);
LABEL_20:
    v14 = v26;
    v27 = 0;
    _InterlockedDecrement((volatile signed __int32 *)v26 + 4);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = v28[2];
    v15 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
    v23.hNtSwapChain = 0LL;
    *(_QWORD *)&v23.bProducer = 1LL;
    *(_QWORD *)&v23.DataCopied = 0LL;
    v16 = *v15;
    v23.bSetMetaData = 1;
    v23.pBuffer = &v24;
    v23.BufferSize = 8;
    v17 = SwapChainGetSetMetaDataInternal(v16, &v23, 0x18u, 0);
    if ( v17 < 0 )
      WdLogSingleEntry1(3LL, v17);
    ObfReferenceObject(*((PVOID *)this + 339));
    Current = DXGPROCESS::GetCurrent(v18);
    v20 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
            (void (*)(void *))lambda_6d6dde8dff0ce95e6db7d2028557ce08_::_lambda_invoker_cdecl_,
            *((void **)this + 339));
    v7 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect display present failed to queue the buffer release: 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  }
  return (unsigned int)v7;
}
