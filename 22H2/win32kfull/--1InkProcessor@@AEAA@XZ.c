/*
 * XREFs of ??1InkProcessor@@AEAA@XZ @ 0x1C012DA5C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C012DC5C (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C024F600 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::~InkProcessor(InkProcessor **this)
{
  InkFeedbackServer *v2; // rcx
  InkProcessor *v3; // rdi
  REGHANDLE v4; // rcx
  struct InkDevice *v5; // rdx
  struct InkFeedbackProviderBase *v6; // rdx
  struct InkDevice *v7; // [rsp+30h] [rbp+8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v3 = this[2];
  while ( v3 != (InkProcessor *)(this + 2) )
  {
    v5 = (InkProcessor *)((char *)v3 - 88);
    v3 = *(InkProcessor **)v3;
    v7 = v5;
    v6 = (struct InkFeedbackProviderBase *)(((unsigned __int64)v5 + 32) & -(__int64)(v5 != 0LL));
    if ( *((_QWORD *)v6 + 1) )
      InkFeedbackServer::RemoveInkFeedbackProvider(v2, v6);
    InkProcessor::UnlinkAndReleaseInkDevice(v2, &v7);
  }
  if ( this[5] )
    InkFeedbackServer::RemoveInkFeedbackProvider(v2, (struct InkFeedbackProviderBase *)(this + 4));
  v4 = qword_1C032A2A8;
  qword_1C032A2A8 = 0LL;
  dword_1C032A288 = 0;
  EtwUnregister(v4);
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  this[4] = (InkProcessor *)&InkFeedbackProviderBase::`vftable';
}
