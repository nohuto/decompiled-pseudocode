char __fastcall ObAuditInheritedHandleProcedure(__int64 a1, volatile signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbx
  volatile __int64 *v7; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = ((__int64)*(unsigned int *)a2 >> 17) & 4;
  _InterlockedExchangeAdd64(a2, 1uLL);
  v7 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v9, 0);
  if ( *v7 )
    ExfUnblockPushLock(v7, 0LL);
  if ( (_DWORD)v6 )
    SeAuditHandleDuplication(a3, a3, a4[1], *a4);
  return 0;
}
