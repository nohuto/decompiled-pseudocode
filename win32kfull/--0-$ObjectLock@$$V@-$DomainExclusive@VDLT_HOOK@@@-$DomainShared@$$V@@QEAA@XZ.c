/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C012DA70
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C009C8B4 (zzzSetWindowsHookEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax
  __int64 v4; // rdi
  int v5; // esi
  tagDomLock *v6; // rcx
  __int64 result; // rax

  DLT = DLT_HOOK::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  v4 = a1;
  *(_QWORD *)a1 = DomainLockRef;
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  v5 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v6 = *(tagDomLock **)v4;
    if ( *(_QWORD *)v4 )
    {
      if ( *(_BYTE *)(v4 + 8) )
        tagDomLock::LockExclusive(v6);
      else
        tagDomLock::LockShared(v6);
    }
    ++v5;
    v4 += 16LL;
  }
  while ( !v5 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
