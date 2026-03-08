/*
 * XREFs of ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z @ 0x1C002F9CC
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C002F8AC (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 * Callees:
 *     ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1C002EEE8 (-GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0080388 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

void __fastcall CBaseInput::GatherDeviceInfoSummaryInformation(
        CBaseInput *this,
        struct DEVICEINFO *a2,
        unsigned int *a3,
        unsigned int *a4,
        int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int *v7; // r11
  int v8; // eax
  __int16 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // eax
  CKeyboardProcessor *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  bool v16; // r10
  int v17; // edx

  v7 = a3;
  v8 = *((unsigned __int8 *)a2 + 48);
  if ( *((_QWORD *)a2 + 28) )
  {
    if ( (_BYTE)v8 )
    {
      if ( v8 == 1 )
      {
        if ( anonymous_namespace_::GetKeyboardProcessor((unsigned int)(v8 - 1), a2, a3, a4) )
          CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(v13, a2, a7, v14);
      }
      else if ( v8 == 2 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
      {
        v15 = *((_QWORD *)a2 + 59);
        if ( v15 )
        {
          if ( (unsigned int)(*(_DWORD *)(v15 + 24) - 1) <= 6 )
            ++*a3;
        }
      }
    }
    else
    {
      v10 = *((_WORD *)a2 + 228);
      ++*v7;
      v11 = *((unsigned __int16 *)a2 + 229);
      v12 = *a6;
      if ( *a6 <= v11 )
        v12 = v11;
      *a6 = v12;
      if ( v10 < 0 )
      {
        v10 &= ~0x8000u;
        *a5 = 1;
      }
      if ( v10 == 32 || v10 == 64 || v10 == 256 )
        ++*a4;
    }
  }
  else if ( (_BYTE)v8 == 2 )
  {
    v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 23;
      LOBYTE(v17) = v16;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        3,
        23,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
        (char)a2);
    }
  }
}
