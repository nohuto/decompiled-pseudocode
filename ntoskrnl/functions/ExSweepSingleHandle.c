__int64 __fastcall ExSweepSingleHandle(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  volatile __int64 *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a2 >> 1);
  *a2 = 0LL;
  v3 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v5, 0);
  if ( *v3 )
    ExpUnblockPushLock(v3, 0LL, 0);
  return v2;
}
