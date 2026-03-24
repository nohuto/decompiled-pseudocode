/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D500
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012504 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00C1350 (DestroyThreadsMessages.c)
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     FreeMessageList @ 0x1C010D4A0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C0117410 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E12A0 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0163B78 (--0-$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     FreePointerMessageParams @ 0x1C01EF458 (FreePointerMessageParams.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  void *v8; // rcx
  int v9; // edx
  int v10; // edx
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  void **v13; // rax
  tagDomLock *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)a1 + 24);
  if ( v1 <= 20 )
  {
    if ( v1 == 20 )
    {
      FreePointerMessageParams(a1);
      return;
    }
    v3 = v1 - 3;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 5;
        if ( v5 )
        {
          v6 = v5 - 3;
          if ( v6 )
          {
            if ( v6 == 5 && *((_QWORD *)a1 + 4) == 1LL )
              goto LABEL_28;
          }
          else
          {
            CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>(&v14);
            v11 = (_QWORD *)*((_QWORD *)a1 + 5);
            v12 = (_QWORD *)*v11;
            if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (void **)v11[1], *v13 != v11) )
              __fastfail(3u);
            *v13 = v12;
            v12[1] = v13;
            v11[1] = v11;
            *v11 = v11;
            if ( !*((_DWORD *)v11 + 6) )
              HMAssignmentUnlock(v11 + 2);
            if ( v11 == (_QWORD *)&unk_1C033C050 )
              dword_1C0339AB8 = 0;
            else
              Win32FreePool(v11);
            if ( !v15 )
              tagDomLock::UnLockExclusive(v14);
          }
        }
        else if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        {
          UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
        }
        return;
      }
    }
    goto LABEL_16;
  }
  v7 = v1 - 22;
  if ( !v7 )
  {
    Win32FreePool(**((void ***)a1 + 4));
    v8 = (void *)*((_QWORD *)a1 + 4);
LABEL_17:
    Win32FreePool(v8);
    return;
  }
  v9 = v7 - 4;
  if ( !v9 )
  {
    v8 = (void *)*((_QWORD *)a1 + 5);
    if ( v8 )
      goto LABEL_17;
    return;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_28:
    v8 = (void *)*((_QWORD *)a1 + 5);
    goto LABEL_17;
  }
  if ( v10 == 1 )
  {
LABEL_16:
    v8 = (void *)*((_QWORD *)a1 + 4);
    goto LABEL_17;
  }
}
