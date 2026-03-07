void __fastcall IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer(struct CONTAINER_ID *a1, int a2)
{
  int v4; // edx
  int v5; // r8d
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // edx
  int v9; // r8d
  float *v10; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // r10d
  _QWORD v14[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v15; // [rsp+60h] [rbp-68h]
  float v16[16]; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+E0h] [rbp+18h] BYREF
  char v18; // [rsp+E8h] [rbp+20h] BYREF

  CIVGenericSerializer::CIVGenericSerializer(v14);
  v6 = v15;
  if ( v15 )
  {
    *v15 = *((_QWORD *)a1 + 1);
    *((_DWORD *)v6 + 2) = a2;
    memset(v16, 0, sizeof(v16));
    v7 = 0xFFFF8300FFFF8300uLL;
    if ( CDesktopInputSink::GetTransform((struct tagINPUT_TRANSFORM *)v16) )
    {
      v17 = _mm_unpacklo_ps(
              (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.x),
              (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.y)).m128_u64[0];
      v10 = (float *)InverseTransformPoint((__int64)&v18, (float *)&v17, v16);
      v13 = (int)*v10;
      v17 = __PAIR64__((int)v10[1], v13);
      v7 = v17;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          12,
          12,
          (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids,
          v13,
          SBYTE4(v17));
      }
    }
    else
    {
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          13,
          (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids);
      }
    }
    *(_QWORD *)((char *)v6 + 12) = v7;
    ivrIVSend((const struct CIVSerializer *)v14, 3u, a1);
  }
  else
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        11,
        (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids);
    }
  }
  v14[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v14);
}
