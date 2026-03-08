/*
 * XREFs of ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C03268AC
 * Callers:
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C01D96A4 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02B5F64 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C00534EC (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C03256C8 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyOutputDuplManager(OUTPUTDUPL_MGR **a1)
{
  OUTPUTDUPL_MGR **v3; // rdi

  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 88) )
    {
      v3 = a1 - 3;
      if ( a1 != (OUTPUTDUPL_MGR **)24 )
      {
        OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(a1);
        *(a1 - 1) = 0LL;
        operator delete(v3);
      }
    }
    else
    {
      OUTPUTDUPL_MGR::`scalar deleting destructor'((OUTPUTDUPL_MGR *)a1);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid parameter for the function DestroyOutputDuplManager pOutputDuplMgr = 0x%I64x.",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
