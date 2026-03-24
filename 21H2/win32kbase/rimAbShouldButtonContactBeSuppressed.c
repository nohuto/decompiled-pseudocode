/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C0159488
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01595D0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015999C (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013705C (WPP_RECORDER_SF_Dd.c)
 *     RIMGetPointerInputType @ 0x1C015E628 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01803B8 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edx
  _QWORD **v9; // r14
  _QWORD *i; // rsi
  int v11; // ebx
  __int64 v12; // rcx

  v6 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    v7 = *(_DWORD *)(a2 + 956);
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v7;
    if ( !v7 )
    {
      if ( a3 )
      {
        v6 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 14, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
        }
      }
      else if ( (*(_DWORD *)(a2 + 312) & 8) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v9 = (_QWORD **)(a1 + 448);
        for ( i = *v9; i != v9; i = (_QWORD *)*i )
        {
          v11 = RIMGetPointerInputType(*(i - 1));
          if ( v11 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v12 = *(i - 1);
            if ( *(_DWORD *)(v12 + 956) )
            {
              v6 = 1;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Dd(
                  (__int64)gRimLog,
                  4u,
                  1u,
                  0xFu,
                  (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                  *(_DWORD *)(v12 + 24),
                  *(_DWORD *)(v12 + 956));
              return v6;
            }
          }
        }
      }
    }
  }
  return v6;
}
