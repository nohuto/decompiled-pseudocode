/*
 * XREFs of MarkThreadsObjects @ 0x1C00332B0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00A5924 (HMChangeOwnerThreadWorker.c)
 */

void *__fastcall MarkThreadsObjects(__int64 a1)
{
  void *result; // rax
  struct _HANDLEENTRY *v3; // rbx
  _QWORD *v4; // rdi
  struct _HANDLEENTRY *v5; // rsi
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rdx

  GetDomainLockRef(20);
  result = GetDomainLockRef(14);
  v3 = qword_1C024FD58;
  v4 = gpKernelHandleTable;
  v5 = (struct _HANDLEENTRY *)((char *)qword_1C024FD58 + 32 * (unsigned int)giheLast);
  if ( qword_1C024FD58 <= v5 )
  {
    do
    {
      v6 = *((unsigned __int8 *)v3 + 24);
      if ( (_BYTE)v6 && (*((_BYTE *)&unk_1C020A46C + 24 * v6) & 2) == 0 && v4[1] == a1 )
      {
        if ( (_BYTE)v6 == 23 )
          v7 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
        else
          v7 = gptiRit;
        result = (void *)HMChangeOwnerThreadWorker(*v4, v7);
      }
      v3 = (struct _HANDLEENTRY *)((char *)v3 + 32);
      v4 += 3;
    }
    while ( v3 <= v5 );
  }
  return result;
}
