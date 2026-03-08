/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C00D23D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00399AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _UnhookWinEvent @ 0x1C00D24FC (_UnhookWinEvent.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v12; // [rsp+28h] [rbp-38h]
  char v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]

  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity((__int64)v11, 6u, 0);
  v2 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v13 = 1;
  v5 = &v13;
  v12 = DomainLockRef;
  v14 = gDomainDummyLock;
  v16 = 0LL;
  v6 = 0;
  v17 = 0;
  v15 = 0;
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
  v17 = 1;
  v8 = (void *)HMValidateHandle(a1, 0xFu);
  if ( v8 )
    v2 = UnhookWinEvent(v8);
  if ( v17 && v12 )
  {
    if ( v13 )
      tagDomLock::UnLockExclusive(v12);
    else
      tagDomLock::UnLockShared(v12);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  UserSessionSwitchLeaveCrit(v9);
  return v2;
}
