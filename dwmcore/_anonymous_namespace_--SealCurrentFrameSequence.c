/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x180035F64
 * Callers:
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18004F8FC (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180050C2C (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x180036340 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEA.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180036504 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x180036EC0 (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180037050 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180037510 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800375FC (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800377C8 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x1800D63B0 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800F5240 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012A09C (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequence(char a1)
{
  LARGE_INTEGER v2; // rcx
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r8d
  HANDLE CurrentProcess; // rax
  _QWORD *v13; // rcx
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  void *v18; // rax
  void *v19; // rbx
  union _SLIST_HEADER *v20; // rcx
  struct _SLIST_ENTRY *v21; // rdx
  _BYTE v22[408]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+1B8h] [rbp+B8h]
  __int64 v24; // [rsp+1C0h] [rbp+C0h]
  __int64 v25; // [rsp+1C8h] [rbp+C8h]
  __int64 v26; // [rsp+1D0h] [rbp+D0h]
  __int64 v27; // [rsp+1E0h] [rbp+E0h]
  __int64 v28; // [rsp+1E8h] [rbp+E8h]
  __int128 v29; // [rsp+1F0h] [rbp+F0h]
  _BYTE ppsmemCounters[80]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v31; // [rsp+250h] [rbp+150h]

  if ( dword_1803E2A18 )
  {
    memset_0(ppsmemCounters, 0, 0x58uLL);
    xmmword_1803E2C20 = *(_OWORD *)ppsmemCounters;
    xmmword_1803E2C30 = *(_OWORD *)&ppsmemCounters[16];
    xmmword_1803E2C40 = *(_OWORD *)&ppsmemCounters[32];
    xmmword_1803E2C50 = *(_OWORD *)&ppsmemCounters[48];
    *(_QWORD *)ppsmemCounters = off_1802CB110;
    xmmword_1803E2C60 = *(_OWORD *)&ppsmemCounters[64];
    qword_1803E2C70 = v31;
    *(_QWORD *)&ppsmemCounters[56] = ppsmemCounters;
    CProcessAttributionObserver::ForEachChangedProcessAttribution(*(_QWORD *)qword_1803E2C80, 0LL, ppsmemCounters);
    v2 = g_qpcFrequency;
    v3 = *((_QWORD *)&xmmword_1803E2B60 + 1);
    v4 = xmmword_1803E2B60;
    dword_1803E2A30 = 1000
                    * ((*((_QWORD *)&xmmword_1803E2B60 + 1) - (_QWORD)xmmword_1803E2B60)
                     / g_qpcFrequency.QuadPart)
                    + (unsigned __int64)(1000
                                       * ((*((_QWORD *)&xmmword_1803E2B60 + 1) - (_QWORD)xmmword_1803E2B60)
                                        % g_qpcFrequency.QuadPart))
                    / g_qpcFrequency.QuadPart;
    v5 = xmmword_1803E2C10 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)xmmword_1803E2C10 == *(_QWORD *)&GUID_NULL.Data1 )
      v5 = *((_QWORD *)&xmmword_1803E2C10 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v5 )
    {
      dword_1803E2C78 = 0;
      qword_1803E2B78 = 0LL;
    }
    else
    {
      v10 = dword_1803E2A20;
      if ( (unsigned int)dword_1803E2A20 > 0x37
        && (dword_1803E2BE4 & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v3 = *((_QWORD *)&xmmword_1803E2B60 + 1);
        v4 = xmmword_1803E2B60;
        v10 = dword_1803E2A20;
        v2 = g_qpcFrequency;
      }
      v11 = v10 + dword_1803E2C78;
      dword_1803E2C78 += v10;
      if ( qword_1803E2B78 )
      {
        if ( v11 >= 0x30570
          && (unsigned __int64)(v3 - qword_1803E2B78) / v2.QuadPart
           + (unsigned __int64)(v3 - qword_1803E2B78) % v2.QuadPart / v2.QuadPart < 0xE10
          && (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
            (LARGE_INTEGER)v2.QuadPart,
            &EVTDESC_DIAGTRACK_TRIGGER,
            16525050LL,
            1LL);
        }
      }
      else
      {
        qword_1803E2B78 = v4;
      }
    }
    v6 = *((_QWORD *)qword_1803E2C80 + 5);
    if ( *(_QWORD *)(v6 + 24) == *(_QWORD *)(v6 + 32) )
    {
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        v6 + 16,
        *(_QWORD *)(v6 + 24),
        &unk_1803E2990);
    }
    else
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(*(_QWORD *)(v6 + 24), &unk_1803E2990);
      *(_QWORD *)(v6 + 24) += 480LL;
    }
    v7 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
           *((_QWORD *)qword_1803E2C80 + 5),
           qword_1803E2BD8);
    if ( a1
      || v7 >= CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds
      || g_fTelemetry_FramesReportFast && v7 >= 0x3E8 )
    {
      *(_DWORD *)ppsmemCounters = 80;
      CurrentProcess = GetCurrentProcess();
      if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
      {
        HIDWORD(qword_1803E2BD0) = *(_QWORD *)&ppsmemCounters[16] >> 10;
        LODWORD(qword_1803E2BD0) = *(_QWORD *)&ppsmemCounters[56] >> 10;
      }
      v13 = qword_1803E2C80;
      v14 = xmmword_1803E2BA0;
      *(_OWORD *)(*((_QWORD *)qword_1803E2C80 + 5) + 176LL) = xmmword_1803E2C10;
      v15 = v13[5];
      *(_OWORD *)(v15 + 40) = xmmword_1803E2B90;
      v16 = xmmword_1803E2BB0;
      *(_OWORD *)(v15 + 56) = v14;
      v17 = xmmword_1803E2BC0;
      *(_OWORD *)(v15 + 72) = v16;
      *(_QWORD *)&v16 = qword_1803E2BD0;
      *(_OWORD *)(v15 + 88) = v17;
      *(_QWORD *)(v15 + 104) = v16;
      v18 = operator new(0xC0uLL);
      v19 = v18;
      if ( v18 )
      {
        memset_0(v18, 0, 0xC0uLL);
        v18 = (void *)anonymous_namespace_::FramesReport::FramesReport(v19);
      }
      v20 = (union _SLIST_HEADER *)qword_1803E2C80;
      v21 = (struct _SLIST_ENTRY *)*((_QWORD *)qword_1803E2C80 + 5);
      *((_QWORD *)qword_1803E2C80 + 5) = v18;
      InterlockedPushEntrySList(v20 + 3, v21);
      SubmitThreadpoolWork(*((PTP_WORK *)qword_1803E2C80 + 1));
    }
    v29 = 0LL;
    memset_0(v22, 0, sizeof(v22));
    v24 = 0LL;
    v8 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
    v26 = 0LL;
    v23 = v8;
    v9 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
    v28 = 0LL;
    v25 = v9;
    v27 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_1803E2990, v22);
    anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v22);
  }
}
