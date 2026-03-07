void __fastcall xxxDoSysExpunge(__int64 a1)
{
  int v2; // r14d
  int v3; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v16; // esi
  char *v17; // rdi
  tagDomLock *v18; // rcx
  tagDomLock *v19; // [rsp+20h] [rbp-68h]
  char v20; // [rsp+28h] [rbp-60h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h]
  char v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  char v24; // [rsp+48h] [rbp-40h]

  LockRefactorStagingAssertOwned(gDomainClientLibLock);
  v2 = 0;
  v3 = catomSysTableEntries;
  *(_DWORD *)(*(_QWORD *)(a1 + 424) + 392LL) = gcSysExpunge;
  if ( v3 > 0 )
  {
    v4 = 0LL;
    v5 = 400LL;
    v6 = 0LL;
    do
    {
      if ( !*(_DWORD *)((char *)&acatomSysDepends + v6) )
      {
        if ( *(_WORD *)((char *)&aatomSysLoaded + v4) )
        {
          LockRefactorStagingAssertOwned(gDomainClientLibLock);
          v7 = *(_QWORD *)(a1 + 424);
          if ( ((1 << v2) & *(_DWORD *)(v7 + 396)) != 0 )
          {
            v8 = *(_QWORD *)(v5 + v7);
            LockRefactorStagingAssertOwned(gDomainClientLibLock);
            v12 = ~(1 << v2);
            *(_QWORD *)(v5 + *(_QWORD *)(a1 + 424)) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) &= v12;
            if ( (*(_DWORD *)((char *)&acatomSysUse + v6))-- == 1 )
            {
              UserDeleteAtomFromAtomTable(
                UserLibmgmtAtomTableHandle,
                *(unsigned __int16 *)((char *)&aatomSysLoaded + v4),
                v10,
                v11,
                (_DWORD)v19);
              if ( v4 >= 0x40 )
                _report_rangecheckfailure();
              LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) &= v12;
              *(_WORD *)((char *)&aatomSysLoaded + v4) = 0;
            }
            DLT = DLT_CLIENTLIB::getDLT(v9);
            DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
            v21 = gDomainDummyLock;
            v19 = DomainLockRef;
            v20 = 1;
            v22 = 0;
            v23 = 0LL;
            v24 = 0;
            if ( DomainLockRef )
              tagDomLock::UnLockExclusive(DomainLockRef);
            v24 = 1;
            ClientFreeLibrary(v8);
            if ( v24 )
            {
              v16 = 0;
              v17 = &v20;
              do
              {
                v18 = (tagDomLock *)*((_QWORD *)v17 - 1);
                if ( v18 )
                {
                  if ( *v17 )
                    tagDomLock::LockExclusive(v18);
                  else
                    tagDomLock::LockShared(v18);
                }
                ++v16;
                v17 += 16;
              }
              while ( !v16 );
            }
          }
        }
      }
      ++v2;
      v5 += 8LL;
      v6 += 4LL;
      v4 += 2LL;
    }
    while ( v2 < catomSysTableEntries );
  }
}
