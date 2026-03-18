/*
 * XREFs of RemoveHmodDependency @ 0x1C0071408
 * Callers:
 *     _RegisterUserApiHook @ 0x1C0048D78 (_RegisterUserApiHook.c)
 *     FreeHook @ 0x1C00704F0 (FreeHook.c)
 *     DestroyEventHook @ 0x1C0070D40 (DestroyEventHook.c)
 *     _UnregisterUserApiHook @ 0x1C0071F20 (_UnregisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1C0071FA0 (_UnregisterDManipHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0138470 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int DLT; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rdi
  int v10; // esi
  tagDomLock *v11; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-58h]
  char v14; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  char v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  char v18; // [rsp+48h] [rbp-30h]

  v4 = (int)a1;
  DLT = DLT_CLIENTLIB::getDLT(a1, a2, a3, a4, DomainLockRef);
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v9 = &v14;
  v15 = gDomainDummyLock;
  v14 = 1;
  v17 = 0LL;
  v10 = 0;
  v16 = 0;
  v18 = 0;
  do
  {
    v11 = (tagDomLock *)*((_QWORD *)v9 - 1);
    if ( v11 )
    {
      if ( *v9 )
        tagDomLock::LockExclusive(v11);
      else
        tagDomLock::LockShared(v11);
    }
    ++v10;
    v9 += 16;
  }
  while ( !v10 );
  v18 = 1;
  if ( (int)v4 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + v4))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + v4) )
    {
      ++gcSysExpunge;
      gdwSysExpungeMask |= 1 << v4;
      if ( !v18 )
        return;
    }
    else
    {
      if ( (unsigned __int64)(2 * v4) >= 0x40 )
        _report_rangecheckfailure(0x1C0000000uLL, v6, v7, v8, DomainLockRef);
      *((_WORD *)&aatomSysLoaded + v4) = 0;
    }
  }
  if ( DomainLockRef )
  {
    if ( v14 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
