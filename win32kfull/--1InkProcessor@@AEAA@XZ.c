/*
 * XREFs of ??1InkProcessor@@AEAA@XZ @ 0x1C00F6A98
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00F6CE8 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C0241560 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::~InkProcessor(InkProcessor **this)
{
  InkFeedbackServer *v2; // rcx
  InkProcessor *v3; // rdi
  REGHANDLE v4; // rcx
  struct InkDevice *v5; // rcx
  unsigned __int64 v6; // rax
  InkFeedbackServer *v7; // rcx
  struct InkDevice *v8; // [rsp+30h] [rbp+8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v3 = this[2];
  while ( v3 != (InkProcessor *)(this + 2) )
  {
    v5 = (InkProcessor *)((char *)v3 - 88);
    v3 = *(InkProcessor **)v3;
    v6 = (unsigned __int64)v5 + 32;
    v8 = v5;
    v7 = (InkFeedbackServer *)-(__int64)v5;
    if ( *(_QWORD *)((v6 & -(__int64)(v7 != 0LL)) + 8) )
      InkFeedbackServer::RemoveInkFeedbackProvider(v7, (struct InkFeedbackProviderBase *)(v6 & -(__int64)(v7 != 0LL)));
    InkProcessor::UnlinkAndReleaseInkDevice(v7, &v8);
  }
  if ( this[5] )
    InkFeedbackServer::RemoveInkFeedbackProvider(v2, (struct InkFeedbackProviderBase *)(this + 4));
  v4 = qword_1C0357100;
  qword_1C0357100 = 0LL;
  dword_1C03570E0 = 0;
  EtwUnregister(v4);
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  this[4] = (InkProcessor *)&InkFeedbackProviderBase::`vftable';
}
