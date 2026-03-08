/*
 * XREFs of _DelegateCapturePointers @ 0x1C01C5C88
 * Callers:
 *     EditionDelegateCapturePointers @ 0x1C01C5350 (EditionDelegateCapturePointers.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01CCF38 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C4E48 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHL @ 0x1C01C5980 (WPP_RECORDER_AND_TRACE_SF_LHL.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01C6958 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rsi
  char v6; // dl
  char v7; // dl
  struct tagWND *v8; // r9
  __int64 v9; // r14
  int v10; // edx
  int v11; // r8d
  int v12; // r15d
  int v13; // r9d
  PDEVICE_OBJECT v14; // rcx
  unsigned __int16 v15; // bx
  unsigned int v16; // edi
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+38h] [rbp-50h]

  v2 = 0;
  if ( a1 )
  {
    v5 = a2 + 4;
    do
    {
      if ( *(_DWORD *)(v5 + 116) )
      {
        v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_LHL(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v7,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            19LL,
            v19,
            v20,
            0x13u,
            v21);
        v8 = *(struct tagWND **)(v5 + 84);
        v9 = *((_QWORD *)v8 + 2);
        v12 = DeferNotifyDelegateCapture(
                (struct tagTHREADINPUTPOINTERLIST *)(v9 + 1128),
                *(_WORD *)(v5 - 4),
                *(_DWORD *)v5,
                v8);
        if ( v12 )
        {
          LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v11,
              (unsigned int)&WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids,
              4,
              19,
              20,
              (__int64)&WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids);
          }
          SetWakeBit(v9, 0x1000u);
        }
        else
        {
          v14 = WPP_GLOBAL_Control;
          LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v11,
              (unsigned int)&WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids,
              4,
              19,
              21,
              (__int64)&WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids);
          }
          v15 = *(_WORD *)(v5 - 4);
          v16 = *(_DWORD *)v5;
          v17 = SGDGetUserSessionState(v14);
          CTouchProcessor::SetPointerInfoNodeFlagFromEdition(*(CTouchProcessor **)(v17 + 3424), v16, v15, 0x200000u);
        }
        DelegateDiscardMessages(
          *(struct tagQ **)(v9 + 432),
          v12,
          (struct tagDELEGATEPOINTERMAP *)(a2 + ((unsigned __int64)v2 << 7)),
          v13);
      }
      else
      {
        v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_LHL(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v6,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            18LL,
            v19,
            v20,
            0x12u,
            v21);
      }
      ++v2;
      v5 += 128LL;
    }
    while ( v2 < a1 );
  }
  return 1LL;
}
