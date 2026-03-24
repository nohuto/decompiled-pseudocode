/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x1C011C31C
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C005A2F0 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C000779C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0058670 (WPP_RECORDER_SF_qiqdd.c)
 *     IsHiddenByInputService @ 0x1C0066924 (IsHiddenByInputService.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  BOOL v10; // eax
  int v11; // ecx
  struct tagQMSG *v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF

  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v17, *(_QWORD *)(a1 + 432));
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 432) + 24LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 48LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 32LL);
  if ( v4 )
  {
    do
    {
      if ( !v5 )
        break;
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        if ( *(_DWORD *)(v5 + 48) < *(_DWORD *)(v4 + 48) )
        {
          v10 = IsHiddenByInputService(v4);
          v11 = v2 + 1;
          v12 = (struct tagQMSG *)v4;
          v4 = *(_QWORD *)(v4 + 8);
          if ( v10 )
            v11 = v2;
          v2 = v11;
          RemoveQMsgFromDeferList((struct tagMLIST *)v3, v12);
          *v13 = *(_QWORD *)v5;
          *v14 = v5;
          if ( v5 == *(_QWORD *)(v3 + 8) )
            *(_QWORD *)(v3 + 8) = v13;
          else
            *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v13;
          *(_QWORD *)v5 = v13;
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    while ( v4 );
    while ( v4 )
    {
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        if ( !IsHiddenByInputService(v4) )
        {
          ++v2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v2 + *(_DWORD *)(v3 + 16);
            LODWORD(v15) = *(_DWORD *)(v3 + 20);
            WPP_RECORDER_SF_qiqdd(
              (unsigned int)v16,
              v6,
              v7,
              0x11u,
              (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
              v4,
              *(_QWORD *)(v4 + 136),
              v3,
              v15,
              v16);
          }
        }
        RemoveQMsgFromDeferList((struct tagMLIST *)v3, (struct tagQMSG *)v4);
        *(_QWORD *)v4 = *(_QWORD *)v3;
        if ( *(_QWORD *)v3 )
          *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v4;
        v9 = *(_QWORD *)(v3 + 8) == 0LL;
        *(_QWORD *)v3 = v4;
        if ( v9 )
          *(_QWORD *)(v3 + 8) = v4;
        *(_QWORD *)(v4 + 8) = 0LL;
        v4 = v8;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
  }
  *(_DWORD *)(v3 + 16) += v2;
}
