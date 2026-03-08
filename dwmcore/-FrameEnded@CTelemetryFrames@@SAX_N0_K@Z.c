/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180050C2C
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18004DAF0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180035F64 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x180050E70 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180129D70 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x18012A4A6 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x1801CAA04 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
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
    dword_1803E2A10 |= 0x80u;
  byte_1803E2B88 = dword_1803E2A98 != dword_1803E3358;
  if ( a1 )
  {
    ++dword_1803E2A1C;
    v4 = CycleTime;
    v5 = anonymous_namespace_::MeasureCyclesDelta(&qword_1803E2BF0, &unk_1803E2A38);
    v6 = g_qpcFrequency;
    qword_1803E2A70 = v5 - v4;
    *((_QWORD *)&xmmword_1803E2B60 + 1) = a3;
    dword_1803E1380 = 3;
    v7 = dword_1803E2A34;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_1803E2BD8) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_1803E2BD8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803E2A34 )
      v7 = 1000000 * ((unsigned __int64)(a3 - qword_1803E2BD8) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_1803E2BD8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803E2A34 = v7;
  }
  else
  {
    if ( dword_1803E2A98 == dword_1803E3358
      && dword_1803E2AA0 == dword_1803E3360
      && dword_1803E2A9C == dword_1803E335C
      && dword_1803E2AA4 == dword_1803E3364 )
    {
      ++dword_1803E2A24;
      v8 = &unk_1803E2A48;
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
      ++dword_1803E2A20;
      v8 = &unk_1803E2A40;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_1803E2BF0, v8);
    if ( byte_1803E2B8A )
    {
      ++dword_1803E2AB4;
      if ( dword_1803E1380 )
        --dword_1803E1380;
      else
        ++dword_1803E2A0C;
    }
    QueryPerformanceCounter(&PerformanceCount);
    v6 = g_qpcFrequency;
    *((LARGE_INTEGER *)&xmmword_1803E2B60 + 1) = PerformanceCount;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_1803E2AE0 - HIDWORD(xmmword_1803E2C20),
      dword_1803E2AF8 - xmmword_1803E2C30,
      dword_1803E2B14 - xmmword_1803E2C20,
      dword_1803E2B18 - DWORD1(xmmword_1803E2C20),
      dword_1803E2B1C - BYTE8(xmmword_1803E2C20),
      dword_1803E2AE0 - BYTE12(xmmword_1803E2C20),
      dword_1803E2AF8 - xmmword_1803E2C30,
      dword_1803E2AEC - BYTE4(xmmword_1803E2C30),
      dword_1803E29C8 - BYTE8(xmmword_1803E2C30),
      dword_1803E29CC - BYTE12(xmmword_1803E2C30),
      dword_1803E29D0 - xmmword_1803E2C40,
      dword_1803E29D4 - BYTE4(xmmword_1803E2C40),
      dword_1803E29D8 - BYTE8(xmmword_1803E2C40),
      dword_1803E29DC - BYTE12(xmmword_1803E2C40),
      dword_1803E29E0 - xmmword_1803E2C50);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_1803E2ACC - DWORD1(xmmword_1803E2C50)),
        (unsigned int)(dword_1803E2AD0 - DWORD2(xmmword_1803E2C50)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v9,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_1803E2AD4 - HIDWORD(xmmword_1803E2C50),
          dword_1803E2AD8 - xmmword_1803E2C60,
          dword_1803E2ADC - BYTE4(xmmword_1803E2C60));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_1803E2AF0 - DWORD2(xmmword_1803E2C60)),
            (unsigned int)(dword_1803E2AF4 - HIDWORD(xmmword_1803E2C60)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_1803E2AFC - qword_1803E2C70),
              (unsigned int)(dword_1803E2B00 - HIDWORD(qword_1803E2C70)));
        }
      }
    }
    anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&xmmword_1803E2C20);
    v6 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_1803E2BD8 - xmmword_1803E2B60) / v6.QuadPart)
     + 1000 * ((unsigned __int64)(qword_1803E2BD8 - xmmword_1803E2B60) % v6.QuadPart) / v6.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
