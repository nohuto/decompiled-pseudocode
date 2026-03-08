/*
 * XREFs of ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@XZ @ 0x1C00D287C
 * Callers:
 *     _UnhookWinEvent @ 0x1C00D24FC (_UnhookWinEvent.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00D25FC (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C012D978 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(
        __int64 a1,
        __int64 a2)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_HANDLEMANAGER::getDLT(a1, a2);
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 40) = 0;
  return result;
}
