/*
 * XREFs of ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C021FD38
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ThreadLockExchange @ 0x1C008C7A8 (ThreadLockExchange.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00F403C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_3578843448__private_IsEnabledDeviceUsage @ 0x1C0138CE8 (Feature_3578843448__private_IsEnabledDeviceUsage.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  const struct tagWND *v5; // rax
  struct tagWND *v6; // rdi
  const struct tagWND *v7; // rax
  struct tagWND *v8; // rdi
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_3578843448__private_IsEnabledDeviceUsage() )
  {
    v9[2] = 0LL;
    v4 = gptiCurrent;
    v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v9;
    v9[1] = 0LL;
    while ( a1 )
    {
      v7 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), 1);
      v8 = v7;
      if ( v7 && (*((_DWORD *)a1 + 7) || *((_DWORD *)a1 + 6) || IsChildWindowDpiBoundary(v7)) )
      {
        ThreadLockExchange((__int64)v8, (__int64)v9);
        xxxSetWindowPos(v8, 0LL, *((unsigned int *)a1 + 4), *((unsigned int *)a1 + 5), 0, 0, 21);
      }
      a1 = *(struct tagWLDBI **)a1;
    }
    ThreadUnlock1(v4, v2, v3);
  }
  else
  {
    while ( a1 )
    {
      v5 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), 1);
      v6 = v5;
      if ( v5 && (*((_DWORD *)a1 + 7) || *((_DWORD *)a1 + 6) || IsChildWindowDpiBoundary(v5)) )
        xxxSetWindowPos(v6, 0LL, *((unsigned int *)a1 + 4), *((unsigned int *)a1 + 5), 0, 0, 21);
      a1 = *(struct tagWLDBI **)a1;
    }
  }
}
