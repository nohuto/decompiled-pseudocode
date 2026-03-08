/*
 * XREFs of ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C01C0EB4
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01C0FC8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C01C1198 (xxxProcessTSFEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     fnHkINLPNOTIFYSTRUCT @ 0x1C0213A24 (fnHkINLPNOTIFYSTRUCT.c)
 */

void __fastcall xxxCallTSFNotifyHook(struct tagNOTIFY *a1)
{
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v4; // edx
  int v5; // r9d
  int v6; // edi
  char *v7; // rbx
  tagDomLock *v8; // rcx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  tagDomLock *v10; // [rsp+38h] [rbp-40h]
  char v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  char v15; // [rsp+60h] [rbp-18h]

  v9 = 0;
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v12 = gDomainDummyLock;
  v10 = DomainLockRef;
  v11 = 1;
  v13 = 0;
  v14 = 0LL;
  if ( DomainLockRef )
    tagDomLock::UnLockExclusive(DomainLockRef);
  v15 = 1;
  fnHkINLPNOTIFYSTRUCT(*((_DWORD *)a1 + 7), v4, (_DWORD)a1, v5, *(_QWORD *)(gpsi + 856LL), (__int64)&v9);
  if ( v15 )
  {
    v6 = 0;
    v7 = &v11;
    do
    {
      v8 = (tagDomLock *)*((_QWORD *)v7 - 1);
      if ( v8 )
      {
        if ( *v7 )
          tagDomLock::LockExclusive(v8);
        else
          tagDomLock::LockShared(v8);
      }
      ++v6;
      v7 += 16;
    }
    while ( !v6 );
  }
}
