/*
 * XREFs of ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C035BBB8
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x1C004EC88 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x1C035BB74 (_DxgDbgTakeSnapshot_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgDbgTakeSnapshot(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rsi
  int v7; // eax
  int Snapshot; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  void *Src[2]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  if ( SeSinglePrivilegeCheck((LUID)11LL, 1) )
  {
    *(_OWORD *)Src = 0LL;
    v7 = TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, 0);
    if ( v7 )
    {
      v9 = v7 + 4096;
      Src[0] = (void *)ExAllocatePool2(256LL, (unsigned int)(v7 + 4096), 1380209782LL);
      if ( Src[0] )
      {
        WdLogSingleEntry2(4LL, a1, v4);
        v10 = TdrCollectBugcheckSecondaryDumpData((char *)Src[0], v9, 1, 0);
        Snapshot = WdDbgCreateSnapshot(&WdDxgkSecondaryDataGUID, Src[0], v10, &Src[1], a3);
        if ( Snapshot >= 0 )
        {
          if ( (unsigned int)v4 >= *a3 )
          {
            if ( a1 )
              memmove(a1, Src[1], *a3);
            Snapshot = 0;
          }
          else
          {
            Snapshot = 1075707914;
          }
        }
      }
      else
      {
        Snapshot = -1073741801;
      }
    }
    else
    {
      Snapshot = -1073741823;
    }
    DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO((__int64)Src);
    return (unsigned int)Snapshot;
  }
  else
  {
    WdLogSingleEntry2(4LL, a1, (unsigned int)v4);
    return 3221225506LL;
  }
}
