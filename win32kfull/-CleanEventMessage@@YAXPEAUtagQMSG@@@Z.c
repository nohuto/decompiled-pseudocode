/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00CDE04 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C00D33C0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1C00D3420 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1C00DE9B0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0143E38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B722C (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C000F7B0 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     FreePointerMessageParams @ 0x1C0146536 (FreePointerMessageParams.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C01B3F78 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021FC98 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall CleanEventMessage(void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagNOTIFY ***v5; // rbx
  tagDomLock *v6; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+28h] [rbp-40h]
  char v8; // [rsp+48h] [rbp-20h]

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 3:
    case 4:
      Win32FreePool(a1[4]);
      break;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20), (unsigned int)(*((_DWORD *)a1 + 24) - 9), a3, a4);
      break;
    case 0xC:
      DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v6);
      v5 = (struct tagNOTIFY ***)a1[5];
      if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
        __int2c();
      RemoveNotify(v5);
      if ( v8 && v6 )
      {
        if ( v7 )
          tagDomLock::UnLockExclusive(v6);
        else
          tagDomLock::UnLockShared(v6);
      }
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      break;
    case 0x1B:
      ShellWindowPos::FreePositionEvent(
        (ShellWindowPos *)a1,
        (struct tagQMSG *)(unsigned int)(*((_DWORD *)a1 + 24) - 20));
      break;
  }
}
