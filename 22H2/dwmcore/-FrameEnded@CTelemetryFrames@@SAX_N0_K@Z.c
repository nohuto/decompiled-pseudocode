/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180071D98
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18006E0E0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028600 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B284C (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800C72F8 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@?A0xd209ef2d@@QEAAXXZ @ 0x180152500 (-UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@-A0xd209ef2d@@QEAAXXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801526D8 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180152748 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x1801527C8 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(char a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  HANDLE CurrentThread; // rax
  BOOL v7; // eax
  LARGE_INTEGER v8; // rcx
  int v9; // r8d
  void *v10; // rdx
  int v11; // ecx
  unsigned __int64 CycleTime; // [rsp+80h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+88h] [rbp-30h] BYREF

  v3 = 0LL;
  if ( a2 )
    dword_1803472A0 |= 0x80u;
  byte_180347400 = dword_180347328 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_1803472AC;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_180347128 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v7 )
        qword_1803472C8 += CycleTime - qword_180347128;
    }
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803473F0 + 1) = a3;
    qword_180347300 = v3 - v5;
    dword_180345A90 = 3;
    v9 = dword_1803472C4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_180347118) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_180347118) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803472C4 )
      v9 = 1000000 * ((unsigned __int64)(a3 - qword_180347118) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_180347118) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803472C4 = v9;
  }
  else
  {
    if ( dword_180347328 == `anonymous namespace'::_frameStartSnaphot
      && dword_180347330 == dword_180347630
      && dword_18034732C == dword_18034762C
      && dword_180347334 == dword_180347634 )
    {
      ++dword_1803472B4;
      v10 = &unk_1803472D8;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_UNPRESENTED_FRAME,
          a3,
          1LL,
          v13);
      ++dword_1803472B0;
      v10 = &unk_1803472D0;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_180347128, v10);
    if ( byte_180347124 )
    {
      ++dword_180347344;
      if ( dword_180345A90 )
        --dword_180345A90;
      else
        ++dword_18034729C;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803473F0 + 1) = CycleTime;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_180347370 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_180347388 - xmmword_180347180,
      dword_1803473A4 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_1803473A8 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_1803473AC - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_180347370 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_180347388 - xmmword_180347180,
      dword_18034737C - BYTE4(xmmword_180347180),
      dword_180347258 - BYTE8(xmmword_180347180),
      dword_18034725C - BYTE12(xmmword_180347180),
      dword_180347260 - xmmword_180347190,
      dword_180347264 - BYTE4(xmmword_180347190),
      dword_180347268 - BYTE8(xmmword_180347190),
      dword_18034726C - BYTE12(xmmword_180347190),
      dword_180347270 - xmmword_1803471A0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18034735C - DWORD1(xmmword_1803471A0)),
        (unsigned int)(dword_180347360 - DWORD2(xmmword_1803471A0)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v11,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_180347364 - HIDWORD(xmmword_1803471A0),
          dword_180347368 - xmmword_1803471B0,
          dword_18034736C - BYTE4(xmmword_1803471B0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_180347380 - DWORD2(xmmword_1803471B0)),
            (unsigned int)(dword_180347384 - HIDWORD(xmmword_1803471B0)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18034738C - qword_1803471C0),
              (unsigned int)(dword_180347390 - HIDWORD(qword_1803471C0)));
        }
      }
    }
    `anonymous namespace'::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot((_anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_ *)&`anonymous namespace'::_etwEndFrameSnapshot);
    v8 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_180347118 - xmmword_1803473F0) / v8.QuadPart)
     + 1000 * ((unsigned __int64)(qword_180347118 - xmmword_1803473F0) % v8.QuadPart) / v8.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
