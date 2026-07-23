/*
 * XREFs of PopGetPowerRequestListInfo @ 0x1408E3F74
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PoStoreDiagnosticContext @ 0x14038ADEC (PoStoreDiagnosticContext.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetPowerRequestListInfo(unsigned __int64 **a1, _DWORD *a2)
{
  __int64 *v4; // rbx
  SIZE_T v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 *v11; // r15
  __int64 v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  PopAcquirePowerRequestPushLock(0);
  v4 = (__int64 *)PopPowerRequestObjectList;
  v5 = (8 * PopPowerRequestObjectCount + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v4 != &PopPowerRequestObjectList )
  {
    v6 = v4[10];
    v20 = 0LL;
    PoStoreDiagnosticContext(v6, 0LL, &v20);
    v5 = (v20 + 39 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 > 0xFFFFFFFF )
    {
      v9 = -1073741789;
      goto LABEL_19;
    }
    v4 = (__int64 *)*v4;
  }
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v5, 0x206D654Du);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    v10 = PopPowerRequestObjectCount;
    v11 = v8 + 1;
    *v8 = PopPowerRequestObjectCount;
    v12 = PopPowerRequestObjectList;
    v13 = (8 * v10 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v5 - v13;
    while ( 1 )
    {
      if ( (__int64 *)v12 == &PopPowerRequestObjectList )
      {
        *a1 = v8;
        v8 = 0LL;
        v9 = 0;
        *a2 = v13;
        goto LABEL_17;
      }
      if ( v14 < 0x48 )
        break;
      *(_DWORD *)((char *)v8 + v13) = *(_DWORD *)(v12 + 20);
      v15 = (_DWORD *)((char *)v8 + v13 + 4);
      v16 = 6LL;
      do
      {
        *v15 = *(_DWORD *)((char *)v15 + v12 - ((_QWORD)v8 + v13) + 28);
        ++v15;
        --v16;
      }
      while ( v16 );
      v17 = *(_QWORD *)(v12 + 80);
      v20 = v14 - 32;
      v9 = PoStoreDiagnosticContext(v17, (unsigned __int64 *)((char *)v8 + v13 + 32), &v20);
      if ( v9 < 0 )
        goto LABEL_17;
      v18 = (v20 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v14 < v18 )
        break;
      *v11 = v13;
      v14 -= v18;
      v12 = *(_QWORD *)v12;
      v13 += v18;
      ++v11;
    }
    v9 = -1073741789;
LABEL_17:
    if ( v8 )
      ExFreePoolWithTag(v8, 0x206D654Du);
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_19:
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return (unsigned int)v9;
}
