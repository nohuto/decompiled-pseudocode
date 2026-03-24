/*
 * XREFs of _DelegateCapturePointers @ 0x1C01F0284
 * Callers:
 *     EditionDelegateCapturePointers @ 0x1C01EFA00 (EditionDelegateCapturePointers.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F5FA4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF694 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     WPP_RECORDER_SF_LHL @ 0x1C01EFF78 (WPP_RECORDER_SF_LHL.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01F0D88 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rbp
  int v9; // edx
  int v10; // ecx
  int v11; // r15d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-58h]
  _BYTE v15[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v5 = a1;
  if ( (_DWORD)a1 )
  {
    v6 = a2 + 4;
    do
    {
      if ( *(_DWORD *)(v6 + 116) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_LHL(a1, a2, a3, 0x13u, v14);
        v7 = *(_QWORD *)(v6 + 84);
        v8 = *(_QWORD *)(v7 + 16);
        v11 = DeferNotifyDelegateCapture(
                (struct tagTHREADINPUTPOINTERLIST *)(v8 + 1088),
                *(_WORD *)(v6 - 4),
                *(_DWORD *)v6,
                (struct tagWND *)v7);
        if ( v11 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 4;
            WPP_RECORDER_SF_(v10, v9, 19, 20, (__int64)&WPP_b43beeb5a22232e36856aa8311da4939_Traceguids);
          }
          SetWakeBit(v8, 0x1000u);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 4;
            WPP_RECORDER_SF_(v10, v9, 19, 21, (__int64)&WPP_b43beeb5a22232e36856aa8311da4939_Traceguids);
          }
          CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
            gpTouchProcessor,
            *(_DWORD *)v6,
            *(_WORD *)(v6 - 4),
            0x200000u);
        }
        CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
          (__int64)v15,
          *(_QWORD *)(v8 + 432));
        DelegateDiscardMessages(
          *(struct tagQ **)(v8 + 432),
          v11,
          (struct tagDELEGATEPOINTERMAP *)(a2 + ((unsigned __int64)v3 << 7)),
          v12);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_LHL(a1, a2, a3, 0x12u, v14);
      }
      ++v3;
      v6 += 128LL;
    }
    while ( v3 < v5 );
  }
  return 1LL;
}
