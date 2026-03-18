/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180050DFC
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18004DCC0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180036054 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x180051040 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D476 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x18012DF20 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x18012E656 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A28E4 (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x1801CDC34 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(char a1, char a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  LARGE_INTEGER v6; // rcx
  int v7; // r8d
  void *v8; // rdx
  int v9; // ecx
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+88h] [rbp-30h] BYREF

  if ( a2 )
    dword_1803E5A10 |= 0x80u;
  byte_1803E5BE8 = dword_1803E5A98 != dword_1803E65D8;
  if ( a1 )
  {
    ++dword_1803E5A1C;
    v4 = CycleTime;
    v5 = anonymous_namespace_::MeasureCyclesDelta(&qword_1803E5BF0, &unk_1803E5A38);
    v6 = g_qpcFrequency;
    qword_1803E5A70 = v5 - v4;
    *((_QWORD *)&xmmword_1803E5B60 + 1) = a3;
    dword_1803E4380 = 3;
    v7 = dword_1803E5A34;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_1803E5BD8) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_1803E5BD8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803E5A34 )
      v7 = 1000000 * ((unsigned __int64)(a3 - qword_1803E5BD8) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_1803E5BD8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803E5A34 = v7;
  }
  else
  {
    if ( dword_1803E5A98 == dword_1803E65D8
      && dword_1803E5AA0 == dword_1803E65E0
      && dword_1803E5A9C == dword_1803E65DC
      && dword_1803E5AA4 == dword_1803E65E4 )
    {
      ++dword_1803E5A24;
      v8 = &unk_1803E5A48;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_UNPRESENTED_FRAME,
          a3,
          1LL,
          v11);
      ++dword_1803E5A20;
      v8 = &unk_1803E5A40;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_1803E5BF0, v8);
    if ( byte_1803E5BEA )
    {
      ++dword_1803E5AB4;
      if ( dword_1803E4380 )
        --dword_1803E4380;
      else
        ++dword_1803E5A0C;
    }
    QueryPerformanceCounter(&PerformanceCount);
    v6 = g_qpcFrequency;
    *((LARGE_INTEGER *)&xmmword_1803E5B60 + 1) = PerformanceCount;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_1803E5AE0 - HIDWORD(xmmword_1803E5C30),
      dword_1803E5AF8 - xmmword_1803E5C40,
      dword_1803E5B14 - xmmword_1803E5C30,
      dword_1803E5B18 - DWORD1(xmmword_1803E5C30),
      dword_1803E5B1C - BYTE8(xmmword_1803E5C30),
      dword_1803E5AE0 - BYTE12(xmmword_1803E5C30),
      dword_1803E5AF8 - xmmword_1803E5C40,
      dword_1803E5AEC - BYTE4(xmmword_1803E5C40),
      dword_1803E59C8 - BYTE8(xmmword_1803E5C40),
      dword_1803E59CC - BYTE12(xmmword_1803E5C40),
      dword_1803E59D0 - xmmword_1803E5C50,
      dword_1803E59D4 - BYTE4(xmmword_1803E5C50),
      dword_1803E59D8 - BYTE8(xmmword_1803E5C50),
      dword_1803E59DC - BYTE12(xmmword_1803E5C50),
      dword_1803E59E0 - xmmword_1803E5C60);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_1803E5ACC - DWORD1(xmmword_1803E5C60)),
        (unsigned int)(dword_1803E5AD0 - DWORD2(xmmword_1803E5C60)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v9,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_1803E5AD4 - HIDWORD(xmmword_1803E5C60),
          dword_1803E5AD8 - xmmword_1803E5C70,
          dword_1803E5ADC - BYTE4(xmmword_1803E5C70));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_1803E5AF0 - DWORD2(xmmword_1803E5C70)),
            (unsigned int)(dword_1803E5AF4 - HIDWORD(xmmword_1803E5C70)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_1803E5AFC - qword_1803E5C80),
              (unsigned int)(dword_1803E5B00 - HIDWORD(qword_1803E5C80)));
        }
      }
    }
    anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&xmmword_1803E5C30);
    v6 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_1803E5BD8 - xmmword_1803E5B60) / v6.QuadPart)
     + 1000 * ((unsigned __int64)(qword_1803E5BD8 - xmmword_1803E5B60) % v6.QuadPart) / v6.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
