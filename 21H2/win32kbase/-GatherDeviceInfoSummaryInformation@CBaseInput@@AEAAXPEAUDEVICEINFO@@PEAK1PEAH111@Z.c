/*
 * XREFs of ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C004A5F0
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C004A36C (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C003E734 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1C00C4A28 (-GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z.c)
 */

void __fastcall CBaseInput::GatherDeviceInfoSummaryInformation(
        CBaseInput *this,
        struct DEVICEINFO *a2,
        unsigned int *a3,
        unsigned int *a4,
        int *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int *v8; // r11
  int v9; // eax
  __int16 v11; // r8
  unsigned int v12; // edx
  unsigned int v13; // eax
  CKeyboardProcessor *v14; // rcx
  __int64 v15; // rax
  char v16; // r10
  int v17; // edx

  v8 = a3;
  v9 = *((unsigned __int8 *)a2 + 48);
  if ( *((_QWORD *)a2 + 28) )
  {
    if ( (_BYTE)v9 )
    {
      if ( v9 == 1 )
      {
        if ( anonymous_namespace_::GetKeyboardProcessor() )
          CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(v14, a2, a7);
      }
      else if ( v9 == 2 )
      {
        if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
        {
          v15 = *((_QWORD *)a2 + 59);
          if ( v15 )
          {
            if ( (unsigned int)(*(_DWORD *)(v15 + 24) - 1) <= 6 )
              ++*a3;
          }
        }
        ++*a8;
      }
    }
    else
    {
      v11 = *((_WORD *)a2 + 228);
      ++*v8;
      v12 = *((unsigned __int16 *)a2 + 229);
      v13 = *a6;
      if ( *a6 <= v12 )
        v13 = v12;
      *a6 = v13;
      if ( v11 < 0 )
      {
        v11 &= ~0x8000u;
        *a5 = 1;
      }
      if ( v11 == 32 || v11 == 64 || v11 == 256 )
        ++*a4;
    }
  }
  else if ( (_BYTE)v9 == 2 )
  {
    v16 = 1;
    ++*a8;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v16 = 0;
    }
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
        (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
        (char)a2);
    }
  }
}
