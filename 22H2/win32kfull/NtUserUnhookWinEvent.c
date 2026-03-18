/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C006F080
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C0070A7C (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     _UnhookWinEvent @ 0x1C0071B04 (_UnhookWinEvent.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  int v2; // esi
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  char *v5; // rbx
  int v6; // edi
  tagDomLock *v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v16[8]; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v17; // [rsp+28h] [rbp-38h]
  char v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h]
  char v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+48h] [rbp-18h]
  char v22; // [rsp+50h] [rbp-10h]

  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(v16, 6LL, 0LL);
  v2 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v18 = 1;
  v5 = &v18;
  v17 = DomainLockRef;
  v19 = gDomainDummyLock;
  v21 = 0LL;
  v6 = 0;
  v22 = 0;
  v20 = 0;
  do
  {
    v7 = (tagDomLock *)*((_QWORD *)v5 - 1);
    if ( v7 )
    {
      if ( *v5 )
        tagDomLock::LockExclusive(v7);
      else
        tagDomLock::LockShared(v7);
    }
    ++v6;
    v5 += 16;
  }
  while ( !v6 );
  v22 = 1;
  v8 = (void *)HMValidateHandle(a1, 0xFu);
  if ( v8 )
    v2 = UnhookWinEvent(v8);
  if ( v22 && v17 )
  {
    if ( v18 )
      tagDomLock::UnLockExclusive(v17);
    else
      tagDomLock::UnLockShared(v17);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16, v9, v10);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v2;
}
