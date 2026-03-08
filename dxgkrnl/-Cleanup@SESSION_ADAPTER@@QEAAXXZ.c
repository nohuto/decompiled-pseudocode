/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01C595C
 * Callers:
 *     DxgkDestroyCsrssProcess @ 0x1C01C56D4 (DxgkDestroyCsrssProcess.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01C5874 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01C59E4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(SESSION_ADAPTER *this)
{
  unsigned int *v1; // rdi
  int *v2; // rsi
  SESSION_ADAPTER *v4; // rbp
  DXGADAPTER *v5; // rcx
  SESSION_ADAPTER *v6; // r12
  SESSION_ADAPTER *v7; // r13
  void *v8; // rax
  _QWORD *v9; // r14
  int v10; // ecx
  SESSION_ADAPTER *v11; // rcx
  SESSION_ADAPTER **v12; // rax

  v1 = (unsigned int *)((char *)this + 8);
  v2 = (int *)((char *)this + 12);
  if ( *((_DWORD *)this + 12) )
  {
    WdLogSingleEntry3(2LL, *((unsigned int *)this + 12), *v2, *v1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Detected multiple reference leakage (0x%I64x) on session adapter for adapter 0x%I64x%08I64x",
      *((unsigned int *)this + 12),
      *v2,
      *v1,
      0LL,
      0LL);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext(this, *((struct DXGDEVICE **)this + 7));
  v4 = (SESSION_ADAPTER *)*((_QWORD *)this + 14);
  while ( v4 != (SESSION_ADAPTER *)((char *)this + 112) )
  {
    v6 = v4;
    v7 = v4;
    v4 = *(SESSION_ADAPTER **)v4;
    WdLogSingleEntry4(2LL, *((unsigned int *)v7 + 10), *((unsigned int *)v7 - 4), *v2, *v1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Detected multiple reference leakage (0x%I64x) on display source (0x%I64x) in session adapter for adapter 0x%I64x%08I64x",
      *((unsigned int *)v7 + 10),
      *((unsigned int *)v7 - 4),
      *v2,
      *v1,
      0LL);
    v8 = (char *)v7 + 56;
    v9 = (_QWORD *)((char *)v7 + 568);
    if ( *((_QWORD *)v7 + 7) || *v9 )
    {
      WdLogSingleEntry1(1LL, 2872LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplaySource->m_pCddPrimaryAllocation[0] == NULL) && (pDisplaySource->m_pCddShadowAllocation == NULL)",
        2872LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = (char *)v7 + 56;
    }
    memset(v8, 0, 0x200uLL);
    *v9 = 0LL;
    v10 = *((_DWORD *)v7 - 4);
    *((_DWORD *)v7 + 10) = 0;
    *((_DWORD *)this + 26) &= ~(1 << v10);
    *((_QWORD *)v7 - 1) = 0LL;
    v11 = *(SESSION_ADAPTER **)v6;
    if ( *(SESSION_ADAPTER **)(*(_QWORD *)v6 + 8LL) != v6 || (v12 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 1), *v12 != v6) )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    --*((_DWORD *)this + 27);
  }
  v5 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    DXGADAPTER::ReleaseReference(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
}
