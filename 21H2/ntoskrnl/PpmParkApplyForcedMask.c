/*
 * XREFs of PpmParkApplyForcedMask @ 0x1408F9404
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     PpmParkApplyPolicy @ 0x1403C20B4 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C2478 (PpmCheckApplyParkConstraints.c)
 *     PpmParkParkingAvailable @ 0x1407BB1A0 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1, __int64 *a2)
{
  unsigned __int16 v2; // r14
  __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned int v8; // r9d
  char v9; // cl
  unsigned __int16 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_WORD *)a1 + 4);
  v4 = *a1;
  v5 = 0;
  v14 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( v2 > 0x14u || *((_WORD *)a1 + 5) || *((_WORD *)a1 + 6) || *((_WORD *)a1 + 7) )
    goto LABEL_7;
  if ( a2 )
  {
    if ( (~v4 & *a2) != 0 )
      goto LABEL_7;
  }
  else
  {
    a2 = &v14;
  }
  v8 = PpmParkNumNodes;
  v9 = 0;
  v10 = 0;
  if ( PpmParkNumNodes )
  {
    do
    {
      v11 = PpmParkNodes + 272LL * v10;
      if ( *(_WORD *)(v11 + 4) == v2 )
      {
        v12 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v11 + 32) = v4 & v12;
        v13 = *a2 & v12;
        *(_BYTE *)(v11 + 146) |= 1u;
        *(_QWORD *)(v11 + 48) = v13;
        v9 = 1;
      }
      ++v10;
    }
    while ( v10 < v8 );
    if ( v9 )
    {
      PpmParkApplyPolicy();
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v5;
    }
  }
LABEL_7:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)-1073741811;
}
