/*
 * XREFs of ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1C0173B80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039FEC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqttQ3_EtwWriteTransfer @ 0x1C003FC10 (McTemplateK0qqqqqqqttQ3_EtwWriteTransfer.c)
 */

void __fastcall DxgkCddLogEvent(__int64 a1, __int64 a2, struct _DXGKETW_PARAMS *a3)
{
  int v4; // esi
  const EVENT_DESCRIPTOR *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = a1;
  if ( (_DWORD)a1 == 8012 )
  {
    if ( !*(_QWORD *)a3 )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = 2662LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventGdiRenderDuringCS,
        (__int64)a3,
        *(_QWORD *)a3);
  }
  else
  {
    if ( (qword_1C00B19B0 & 0x20) == 0 )
      return;
    if ( a3 )
    {
      if ( (_BYTE)a2 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
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
      else if ( (_BYTE)a2 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
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
        if ( (_BYTE)a2 )
        {
          v7 = WdLogNewEntry5_WdAssertion(a1, a2);
          *(_QWORD *)(v7 + 24) = 2648LL;
          WdLogEvent5_WdAssertion(v7);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
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
    else if ( (_BYTE)a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v5 = &EventProfilerEnter;
LABEL_8:
        McTemplateK0q_EtwWriteTransfer(a1, v5, (__int64)a3, v4);
      }
    }
    else if ( (_BYTE)a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v5 = &EventProfilerExit;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (_BYTE)a2 )
      {
        v6 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v6 + 24) = 2609LL;
        WdLogEvent5_WdAssertion(v6);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v5 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
        goto LABEL_8;
      }
    }
  }
}
