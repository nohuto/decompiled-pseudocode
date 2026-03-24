/*
 * XREFs of ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C019A310
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C019A190 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A23C (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _pGetAdditionalTiming @ 0x1C019A3FC (_pGetAdditionalTiming.c)
 */

__int64 __fastcall DXGMONITOR::_GetAdditionalTiming(
        DXGMONITOR *this,
        unsigned __int64 a2,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a3)
{
  unsigned int *v4; // r14
  unsigned int *v6; // rdi
  bool v7; // cf
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // al
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = (unsigned int *)a2;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  *v4 = 0;
  v6 = (unsigned int *)((char *)this + 496);
  *a3 = 0LL;
  v7 = *((_DWORD *)this + 124) != -1;
  if ( *((_DWORD *)this + 124) != -1 )
    goto LABEL_15;
  if ( *((_DWORD *)this + 12) == -2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *((_QWORD *)this + 4);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
    v8 = *((_QWORD *)this + 4);
  }
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  LOBYTE(a2) = 0;
  if ( *(int *)(*(_QWORD *)(v9 + 16) + 2328LL) >= 9216 )
  {
    v16 = IsAnalogueVideoOutput(*((_DWORD *)this + 12));
    a2 = (unsigned __int8)a2;
    if ( !v16 )
      a2 = 1LL;
  }
  result = pGetAdditionalTiming(*((unsigned int *)this + 12), a2, (char *)this + 496, (char *)this + 504);
  if ( (int)result >= 0 )
  {
    v7 = *v6 != -1;
LABEL_15:
    if ( !v7 )
    {
      v17 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( !*((_QWORD *)this + 63) )
    {
      v18 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v18);
    }
    ++*((_DWORD *)this + 128);
    *v4 = *v6;
    *a3 = (struct _DXGK_TARGETMODE_DETAIL_TIMING *)*((_QWORD *)this + 63);
    return 0LL;
  }
  return result;
}
