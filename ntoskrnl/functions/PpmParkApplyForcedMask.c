__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1, __int64 *a2)
{
  unsigned __int16 v2; // r14
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 v7; // rcx
  unsigned int v9; // r9d
  unsigned __int16 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_WORD *)a1 + 4);
  v4 = *a1;
  v5 = 0;
  v13 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( v2 > 0x20u || *((_WORD *)a1 + 5) || *((_WORD *)a1 + 6) || *((_WORD *)a1 + 7) )
    goto LABEL_7;
  if ( a2 )
  {
    if ( (~v4 & *a2) != 0 )
      goto LABEL_7;
  }
  else
  {
    a2 = &v13;
  }
  v9 = PpmParkNumNodes;
  LOBYTE(v7) = 0;
  v10 = 0;
  if ( PpmParkNumNodes )
  {
    do
    {
      v11 = PpmParkNodes + 192LL * v10;
      if ( *(_WORD *)(v11 + 4) == v2 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        *(_QWORD *)(v11 + 24) = v4 & v12;
        v7 = *a2 & v12;
        *(_BYTE *)(v11 + 120) |= 1u;
        *(_QWORD *)(v11 + 40) = v7;
        LOBYTE(v7) = 1;
      }
      ++v10;
    }
    while ( v10 < v9 );
    if ( (_BYTE)v7 )
    {
      PpmParkApplyPolicy(v7);
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v5;
    }
  }
LABEL_7:
  v5 = -1073741811;
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v5;
}
