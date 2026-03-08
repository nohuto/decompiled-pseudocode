/*
 * XREFs of ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C01DFF28
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C01DFDC8 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C033E5C0 (-GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(union _SLIST_HEADER *this)
{
  struct _SLIST_ENTRY *v2; // rax
  struct _SLIST_ENTRY *v3; // rbx
  union _SLIST_HEADER *v4; // rsi
  struct _SLIST_ENTRY *v5; // rbx
  __int64 v6; // rdi

  v2 = (struct _SLIST_ENTRY *)operator new[](0x2290uLL, 0x4B677844u, 256LL);
  v3 = v2;
  if ( v2 )
  {
    ExpInterlockedPushEntrySList(this + 2, v2);
    v4 = this + 3;
    v5 = v3 + 1;
    v6 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList(v4, v5);
      v5 += 69;
      --v6;
    }
    while ( v6 );
    return 1;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to grow present history buffer, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
