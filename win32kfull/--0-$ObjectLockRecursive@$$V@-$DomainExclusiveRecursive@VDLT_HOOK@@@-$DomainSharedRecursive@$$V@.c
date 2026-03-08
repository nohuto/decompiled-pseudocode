/*
 * XREFs of ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0039408
 * Callers:
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 *     zzzUnhookWindowsHookEx @ 0x1C009C50C (zzzUnhookWindowsHookEx.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C00E77B4 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax
  __int64 v4; // rbx
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
    if ( !*(_QWORD *)v4 )
      goto LABEL_6;
    if ( *(_BYTE *)(v4 + 8) )
    {
      if ( tagDomLock::IsLockedExclusive(v6) )
        goto LABEL_5;
      tagDomLock::LockExclusive(*(tagDomLock **)v4);
    }
    else
    {
      if ( tagDomLock::IsLockedExclusive(v6) || tagDomLock::IsLockedShared(*(tagDomLock **)v4) )
      {
LABEL_5:
        *(_QWORD *)v4 = 0LL;
        goto LABEL_6;
      }
      tagDomLock::LockShared(*(tagDomLock **)v4);
    }
LABEL_6:
    ++v5;
    v4 += 16LL;
  }
  while ( !v5 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
