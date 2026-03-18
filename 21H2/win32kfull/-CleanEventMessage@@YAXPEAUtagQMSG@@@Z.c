/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00AD9D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00F6000 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00F60B0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C0105CE0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C016B120 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0074860 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C01D9664 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     FreePointerMessageParams @ 0x1C01EA2A8 (FreePointerMessageParams.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02363A8 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  struct tagNOTIFY ***v2; // rbx
  tagDomLock *v3; // [rsp+20h] [rbp-48h] BYREF
  char v4; // [rsp+28h] [rbp-40h]
  char v5; // [rsp+48h] [rbp-20h]

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 3:
    case 4:
      Win32FreePool(*((_QWORD *)a1 + 4));
      break;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
      break;
    case 0xC:
      DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v3);
      v2 = (struct tagNOTIFY ***)*((_QWORD *)a1 + 5);
      if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
        __int2c();
      RemoveNotify(v2);
      if ( v5 && v3 )
      {
        if ( v4 )
          tagDomLock::UnLockExclusive(v3);
        else
          tagDomLock::UnLockShared(v3);
      }
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      break;
    case 0x1B:
      ShellWindowPos::FreePositionEvent(a1, (struct tagQMSG *)(unsigned int)(*((_DWORD *)a1 + 24) - 20));
      break;
  }
}
