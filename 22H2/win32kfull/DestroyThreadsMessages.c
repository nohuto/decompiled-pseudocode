/*
 * XREFs of DestroyThreadsMessages @ 0x1C00C1350
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C000779C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 *     FreeQEntry @ 0x1C0065CB8 (FreeQEntry.c)
 *     DelQEntry @ 0x1C00667AC (DelQEntry.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C14A0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D500 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall DestroyThreadsMessages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct tagMLIST *v5; // r14
  struct tagQMSG *v6; // rbx
  __int64 v7; // rbx
  struct tagQMSG *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF

  result = CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v11, a1);
  v5 = (struct tagMLIST *)(a1 + 24);
  v6 = *(struct tagQMSG **)(a1 + 24);
  if ( v6 )
  {
    do
    {
      v8 = *(struct tagQMSG **)v6;
      if ( *((_QWORD *)v6 + 13) == a2 )
      {
        v9 = *(_QWORD *)(a1 + 80);
        if ( (struct tagQMSG *)v9 == v6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qq(
              v9,
              5u,
              0x12u,
              0x12u,
              (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
              a1,
              *(_QWORD *)(a1 + 80));
          }
          *(_QWORD *)(a1 + 80) = 0LL;
        }
        CleanEventMessage(v6);
        result = DelQEntry((unsigned int **)(a1 + 24), (unsigned int *)v6, 1);
      }
      v6 = v8;
    }
    while ( v8 );
  }
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    do
    {
      v10 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(v5, (struct tagQMSG *)v7);
        CleanEventMessage((struct tagQMSG *)v7);
        result = FreeQEntry((unsigned int *)v7);
      }
      v7 = v10;
    }
    while ( v10 );
  }
  return result;
}
