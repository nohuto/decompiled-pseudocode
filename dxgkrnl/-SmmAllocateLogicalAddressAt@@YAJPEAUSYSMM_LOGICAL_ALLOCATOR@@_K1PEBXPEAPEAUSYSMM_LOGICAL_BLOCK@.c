__int64 __fastcall SmmAllocateLogicalAddressAt(
        struct SYSMM_LOGICAL_ALLOCATOR *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        struct SYSMM_LOGICAL_BLOCK **a5)
{
  char *v5; // rbx
  unsigned int v7; // edi
  _QWORD *v10; // rsi
  _QWORD *v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // rcx
  unsigned __int8 LowerOrderFromPageCount; // al
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  bool v17; // cf
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 OrderBlockSizeInBytes; // rax
  _QWORD *v23; // r8
  __int64 v24; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // [rsp+68h] [rbp+10h]

  v5 = (char *)a1 + 1312;
  v27 = a3;
  v7 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = a2;
  SmmAcquirePushLockExclusive<4>((__int64)a1 + 1312);
  if ( a3 )
  {
    v13 = a3;
    while ( 1 )
    {
      LowerOrderFromPageCount = SmmGetLowerOrderFromPageCount(v13 >> 12);
      v16 = LowerOrderFromPageCount;
      v17 = (unsigned __int8)v20 < LowerOrderFromPageCount;
      v18 = (unsigned __int8)v20;
      v19 = v16;
      LOBYTE(v20) = 1;
      if ( v17 )
        v19 = v18;
      v21 = SmmAcquireBlock((__int64)a1, v19, v20, v15);
      if ( !v21 )
        break;
      if ( v11 )
        v11[3] = v21;
      if ( !v10 )
        v10 = (_QWORD *)v21;
      OrderBlockSizeInBytes = SmmGetOrderBlockSizeInBytes((*(_QWORD *)(v21 + 32) >> 53) & 0x3F);
      v12 += OrderBlockSizeInBytes;
      v23[2] = a4;
      v11 = v23;
      v23[3] = 0LL;
      v13 = v27 - OrderBlockSizeInBytes;
      v23[4] = v24 | 0x1010000000000000LL;
      v27 = v13;
      if ( !v13 )
        goto LABEL_11;
    }
    WdLogSingleEntry3(3LL, a1, a2, a3);
    while ( v10 )
    {
      v26 = v10;
      v10 = (_QWORD *)v10[3];
      SmmReleaseBlock((__int64)a1, v26);
    }
    v7 = -1073741801;
  }
  else
  {
LABEL_11:
    v11[2] = a4;
    *a5 = (struct SYSMM_LOGICAL_BLOCK *)v10;
    SmmNotifyBytesAllocate(a1, a3, a3);
  }
  SmmReleasePushLockExclusive<4>((__int64)v5);
  return v7;
}
