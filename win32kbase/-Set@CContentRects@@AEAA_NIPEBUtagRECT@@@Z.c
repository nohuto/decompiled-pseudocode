bool __fastcall CContentRects::Set(CContentRects *this, unsigned int a2, const struct tagRECT *a3)
{
  const struct tagRECT *v3; // rsi
  __int64 v4; // rbx
  bool result; // al

  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      24,
      10,
      (__int64)&WPP_5f4aa0e535e73cdf7b29b9133c3090be_Traceguids,
      v4);
  }
  memmove((char *)this + 16, v3, 16 * v4);
  result = 1;
  *((_DWORD *)this + 20) = v4;
  return result;
}
