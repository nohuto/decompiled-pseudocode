/*
 * XREFs of RemoveHmodDependency @ 0x1C009D71C
 * Callers:
 *     DestroyEventHook @ 0x1C0035F80 (DestroyEventHook.c)
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 *     _RegisterUserApiHook @ 0x1C00DD234 (_RegisterUserApiHook.c)
 *     _UnregisterUserApiHook @ 0x1C00F56F0 (_UnregisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1C00F59F0 (_UnregisterDManipHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C012BEC0 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int DLT; // eax
  char *v3; // rdi
  int v4; // esi
  tagDomLock *v5; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-58h]
  char v8; // [rsp+28h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-48h]
  char v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  char v12; // [rsp+48h] [rbp-30h]

  v1 = (int)a1;
  DLT = DLT_CLIENTLIB::getDLT(a1);
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v3 = &v8;
  v9 = gDomainDummyLock;
  v8 = 1;
  v11 = 0LL;
  v4 = 0;
  v10 = 0;
  v12 = 0;
  do
  {
    v5 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v5 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v5);
      else
        tagDomLock::LockShared(v5);
    }
    ++v4;
    v3 += 16;
  }
  while ( !v4 );
  v12 = 1;
  if ( (int)v1 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + v1))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + v1) )
    {
      ++gcSysExpunge;
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) |= 1 << v1;
      if ( !v12 )
        return;
    }
    else
    {
      if ( (unsigned __int64)(2 * v1) >= 0x40 )
        _report_rangecheckfailure();
      *((_WORD *)&aatomSysLoaded + v1) = 0;
    }
  }
  if ( DomainLockRef )
  {
    if ( v8 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
