/*
 * XREFs of ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C032D6A4
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C01A8B90 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGDEVICE *__fastcall OUTPUTDUPL_CONTEXT::GetProducerDevice(OUTPUTDUPL_CONTEXT *this)
{
  __int64 v1; // rdx
  __int64 i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi

  v1 = 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + i + 6);
    v5 = *(_QWORD *)(v4 + 8);
    if ( v1 )
    {
      v6 = v1;
      if ( v5 && v1 != v5 )
      {
        WdLogSingleEntry1(1LL, 2094LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCurrentMutexDevice || (pDeviceFound == pCurrentMutexDevice)",
          2094LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v1 = v6;
      }
    }
    else if ( v5 )
    {
      v1 = *(_QWORD *)(v4 + 8);
    }
  }
  return (struct DXGDEVICE *)v1;
}
