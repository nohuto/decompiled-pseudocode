/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x1C00DBC20
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C000B0E4 (IsHiddenByInputService.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0011C00 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C0072420 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // r10
  __int64 v5; // rbx
  char v6; // dl
  __int64 v7; // r9
  bool v8; // zf
  BOOL v9; // eax
  int v10; // ecx
  struct tagQMSG *v11; // rdx
  _QWORD *v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]

  v2 = *(_QWORD *)(a1 + 432) + 24LL;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 48LL);
  while ( v5 )
  {
    if ( !v4 )
    {
      do
      {
        if ( *(_QWORD *)(v5 + 104) == a1 )
        {
          if ( !IsHiddenByInputService(v5) )
          {
            ++v3;
            v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_qiqdd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v6,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                v3 + *(_DWORD *)(v2 + 16),
                v14,
                v15,
                0x12u,
                (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids);
          }
          RemoveQMsgFromDeferList((struct tagMLIST *)v2, (struct tagQMSG *)v5);
          *(_QWORD *)v5 = *(_QWORD *)v2;
          if ( *(_QWORD *)v2 )
            *(_QWORD *)(*(_QWORD *)v2 + 8LL) = v5;
          v8 = *(_QWORD *)(v2 + 8) == 0LL;
          *(_QWORD *)v2 = v5;
          if ( v8 )
            *(_QWORD *)(v2 + 8) = v5;
          *(_QWORD *)(v5 + 8) = 0LL;
          v5 = v7;
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
      while ( v5 );
      break;
    }
    if ( *(_QWORD *)(v5 + 104) == a1 )
    {
      if ( *(_DWORD *)(v4 + 48) < *(_DWORD *)(v5 + 48) )
      {
        v9 = IsHiddenByInputService(v5);
        v10 = v3 + 1;
        v11 = (struct tagQMSG *)v5;
        v5 = *(_QWORD *)(v5 + 8);
        if ( v9 )
          v10 = v3;
        v3 = v10;
        RemoveQMsgFromDeferList((struct tagMLIST *)v2, v11);
        *v12 = *(_QWORD *)v4;
        *v13 = v4;
        if ( v4 == *(_QWORD *)(v2 + 8) )
          *(_QWORD *)(v2 + 8) = v12;
        else
          *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v12;
        *(_QWORD *)v4 = v12;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 8);
    }
  }
  *(_DWORD *)(v2 + 16) += v3;
}
