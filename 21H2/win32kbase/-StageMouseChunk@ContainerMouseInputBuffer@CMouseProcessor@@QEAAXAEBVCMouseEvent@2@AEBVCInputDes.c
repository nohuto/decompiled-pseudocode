/*
 * XREFs of ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01FC7A8
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C003595C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0144E50 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01B8D50 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01B8D74 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C01DAF08 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ApiSetGetLatestInputTransform @ 0x1C020D1AC (ApiSetGetLatestInputTransform.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  HWND WindowHandle; // rbp
  int v7; // r8d
  bool v8; // di
  int v9; // edx
  char v10; // di
  float *v11; // rax
  int v12; // r9d
  int v13; // ebp
  int v14; // r14d
  __int64 v15; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v16; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v17[8]; // [rsp+68h] [rbp-80h] BYREF
  float v18[16]; // [rsp+70h] [rbp-78h] BYREF

  if ( qword_1C029D818 && (int)qword_1C029D818() >= 0 && qword_1C029D820 )
    qword_1C029D820();
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD))(*(_QWORD *)a2 + 16LL))(
    a2,
    *((_QWORD *)this + 129));
  *(_QWORD *)(*((_QWORD *)this + 129) + 56LL) = CInputDest::GetContainerHwndDest(a3);
  WindowHandle = CInputDest::GetWindowHandle(a3);
  memset(v18, 0, sizeof(v18));
  if ( (unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v18) )
  {
    v10 = 1;
    *((_BYTE *)this + 1040) = 1;
    *((_DWORD *)this + 264) = *CInputDest::GetContainerId(a3);
    v16 = _mm_unpacklo_ps(
            (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.x),
            (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.y)).m128_u64[0];
    v11 = (float *)InverseTransformPoint((__int64)v17, (float *)&v16, v18);
    v13 = (int)*v11;
    v14 = (int)v11[1];
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v12,
        v15,
        0xCu,
        0x37u,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    *(_DWORD *)(*((_QWORD *)this + 129) + 12LL) = v13;
    *(_DWORD *)(*((_QWORD *)this + 129) + 16LL) = v14;
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 53;
      LOBYTE(v9) = v8;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        53,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids,
        (char)WindowHandle);
    }
  }
}
