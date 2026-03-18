/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C015D164
 * Callers:
 *     GetHmodTableIndex @ 0x1C0025248 (GetHmodTableIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax
  __int64 v7; // rdi
  int v8; // esi
  tagDomLock *v9; // rcx
  __int64 result; // rax

  DLT = DLT_CLIENTLIB::getDLT(a1, a2, a3, a4);
  DomainLockRef = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  v7 = a1;
  *(_QWORD *)a1 = DomainLockRef;
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  v8 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v9 = *(tagDomLock **)v7;
    if ( *(_QWORD *)v7 )
    {
      if ( *(_BYTE *)(v7 + 8) )
        tagDomLock::LockExclusive(v9);
      else
        tagDomLock::LockShared(v9);
    }
    ++v8;
    v7 += 16LL;
  }
  while ( !v8 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
