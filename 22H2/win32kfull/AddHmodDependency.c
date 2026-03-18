/*
 * XREFs of AddHmodDependency @ 0x1C007154C
 * Callers:
 *     _RegisterUserApiHook @ 0x1C0048D78 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00497B0 (_RegisterDManipHook.c)
 *     zzzSetWindowsHookEx @ 0x1C006F810 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0070AC4 (_SetWinEventHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall AddHmodDependency(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int DLT; // eax
  char *v6; // rbx
  int v7; // edi
  tagDomLock *v8; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  char v14; // [rsp+48h] [rbp-20h]

  v4 = (int)a1;
  DLT = DLT_CLIENTLIB::getDLT(a1, a2, a3, a4, DomainLockRef);
  v10 = 1;
  v6 = &v10;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v11 = gDomainDummyLock;
  v13 = 0LL;
  v7 = 0;
  v14 = 0;
  v12 = 0;
  do
  {
    v8 = (tagDomLock *)*((_QWORD *)v6 - 1);
    if ( v8 )
    {
      if ( *v6 )
        tagDomLock::LockExclusive(v8);
      else
        tagDomLock::LockShared(v8);
    }
    ++v7;
    v6 += 16;
  }
  while ( !v7 );
  v14 = 1;
  if ( (int)v4 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v4);
  if ( DomainLockRef )
  {
    if ( v10 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
