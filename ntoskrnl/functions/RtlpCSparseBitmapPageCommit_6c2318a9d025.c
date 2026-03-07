__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rsi
  int v9; // edi
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-60h]
  __int64 v13; // [rsp+28h] [rbp-58h]
  _QWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+C8h] [rbp+48h] BYREF

  v18 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v17 = 4096LL;
    v14[0] = *(_QWORD *)a1 + (v5 << 12);
    v9 = RtlpHpEnvAllocVA((unsigned int)v14, (unsigned int)&v17, 0, 1073745920, 4);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v18;
  }
  *a4 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v16, a1);
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v18, v11, a1, v12, v13);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    v17 = 4096LL;
    v14[0] = *(_QWORD *)(a1 + 8) + (v7 << 12);
    v9 = RtlpHpEnvAllocVA((unsigned int)v14, (unsigned int)&v17, 0, 1073745920, 4);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      v15 = *a4;
      RtlCSparseBitmapLeaveLockingRegion(&v15);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
