void __fastcall DxgkCddLogEvent(__int64 a1, char a2, struct _DXGKETW_PARAMS *a3)
{
  int v4; // esi
  const EVENT_DESCRIPTOR *v5; // rdx

  v4 = a1;
  if ( (_DWORD)a1 == 8012 )
  {
    if ( !*(_QWORD *)a3 )
    {
      WdLogSingleEntry1(1LL, 2725LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"params->Adapter != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventGdiRenderDuringCS,
        (__int64)a3,
        *(_QWORD *)a3);
  }
  else
  {
    if ( (qword_1C013A870 & 0x20) == 0 )
      return;
    if ( a3 )
    {
      if ( a2 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            a1,
            &EventExtendedProfilerEnter,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else if ( a2 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            a1,
            &EventExtendedProfilerExit,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else
      {
        if ( a2 )
        {
          WdLogSingleEntry1(1LL, 2720LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EventType == EVENT_TRACE_TYPE_INFO",
            2720LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            a1,
            &EventExtendedProfilerInfo,
            (__int64)a3,
            v4,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
    }
    else if ( a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        v5 = &EventProfilerEnter;
LABEL_8:
        McTemplateK0q_EtwWriteTransfer(a1, v5, (__int64)a3, v4);
      }
    }
    else if ( a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        v5 = &EventProfilerExit;
        goto LABEL_8;
      }
    }
    else
    {
      if ( a2 )
      {
        WdLogSingleEntry1(1LL, 2681LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"EventType == EVENT_TRACE_TYPE_INFO",
          2681LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        v5 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
        goto LABEL_8;
      }
    }
  }
}
