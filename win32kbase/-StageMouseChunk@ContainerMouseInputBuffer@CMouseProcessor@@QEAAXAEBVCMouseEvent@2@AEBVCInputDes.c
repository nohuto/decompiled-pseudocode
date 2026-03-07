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
  int v12; // r8d
  int v13; // r9d
  int v14; // ebp
  int v15; // r14d
  int v16; // edx
  unsigned __int64 v17; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v18[8]; // [rsp+68h] [rbp-80h] BYREF
  float v19[16]; // [rsp+70h] [rbp-78h] BYREF

  if ( qword_1C02D7FE0 && (int)qword_1C02D7FE0() >= 0 && qword_1C02D7FE8 )
    qword_1C02D7FE8();
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD))(*(_QWORD *)a2 + 16LL))(
    a2,
    *((_QWORD *)this + 129));
  *(_QWORD *)(*((_QWORD *)this + 129) + 56LL) = CInputDest::GetContainerHwndDest(a3);
  WindowHandle = CInputDest::GetWindowHandle(a3);
  memset(v19, 0, sizeof(v19));
  if ( (unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v19) )
  {
    v10 = 1;
    *((_BYTE *)this + 1040) = 1;
    *((_DWORD *)this + 264) = *CInputDest::GetContainerId(a3);
    v17 = _mm_unpacklo_ps(
            (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.x),
            (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.y)).m128_u64[0];
    v11 = (float *)InverseTransformPoint((__int64)v18, (float *)&v17, v19);
    v14 = (int)*v11;
    v15 = (int)v11[1];
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 55;
      LOBYTE(v16) = v10;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v16, v12, v13);
    }
    *(_DWORD *)(*((_QWORD *)this + 129) + 12LL) = v14;
    *(_DWORD *)(*((_QWORD *)this + 129) + 16LL) = v15;
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
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids,
        (char)WindowHandle);
    }
  }
}
