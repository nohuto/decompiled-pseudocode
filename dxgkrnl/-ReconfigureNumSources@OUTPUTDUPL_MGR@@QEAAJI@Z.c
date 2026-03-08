/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0329F40
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x1C032C60C (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C021428C (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0326944 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0329EEC (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edi

  if ( *((_DWORD *)this + 18) )
  {
    WdLogSingleEntry1(1LL, 2449LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsNewConnectionAllowed() == FALSE",
      2449LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a2 <= 0x10 )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 19) )
    {
      while ( !(unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, v5) )
      {
        if ( ++v5 >= *((_DWORD *)this + 19) )
          goto LABEL_8;
      }
      WdLogSingleEntry1(1LL, 2463LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Cannot reconfigure the number of sources if any are active",
        2463LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3223192386LL;
    }
    else
    {
LABEL_8:
      OUTPUTDUPL_MGR::DestroySourceContextLists(this);
      *((_DWORD *)this + 19) = a2;
      result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
      if ( (int)result < 0 )
        *((_DWORD *)this + 19) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 16LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Output duplication manager only support 0x%I64x sources\n",
      16LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  return result;
}
