/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x140A3FEC0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiFreePhysicalPageChain @ 0x140647BC4 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x1406482F8 (MiGetAweNode.c)
 *     MiGetAwePageSize @ 0x14064836C (MiGetAwePageSize.c)
 *     MiLockAwePagesShared @ 0x140648A68 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x140648AC4 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x14064989C (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiCaptureUlongPtrArray @ 0x140A3E714 (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A3F148 (MiReferenceIncomingPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtMapUserPhysicalPagesScatter(unsigned int *a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned __int64 *Pool; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  SIZE_T v11; // rdx
  unsigned __int64 *v12; // r13
  int v13; // edi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *AweNode; // rax
  __int64 v17; // r15
  int v18; // ebx
  __int64 AwePageSize; // rax
  __int64 v20; // r8
  int v21; // r11d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // r13
  ULONG_PTR v27; // rbx
  __int128 *v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // [rsp+40h] [rbp-2078h]
  unsigned __int64 v31; // [rsp+48h] [rbp-2070h]
  __int64 v32; // [rsp+50h] [rbp-2068h]
  ULONG_PTR v33; // [rsp+58h] [rbp-2060h]
  __int128 v34; // [rsp+60h] [rbp-2058h] BYREF
  _BYTE P[4096]; // [rsp+70h] [rbp-2048h] BYREF
  char v36; // [rsp+1070h] [rbp-1048h] BYREF

  memset(P, 0, sizeof(P));
  v34 = 0LL;
  if ( a2 > 0xFFFFFFFFFFFFFLL )
    return 3221225712LL;
  v30 = 0LL;
  Pool = (unsigned __int64 *)P;
  CurrentThread = KeGetCurrentThread();
  v9 = a2;
  v10 = 0LL;
  if ( a2 > 0x200 )
  {
    v11 = 16 * a2;
    if ( !a3 )
      v11 = 8 * a2;
    Pool = (unsigned __int64 *)MiAllocatePool(64, v11, 0x77526D4Du);
    if ( !Pool )
      return 3221225626LL;
  }
  v12 = Pool;
  v13 = MiCaptureUlongPtrArray(Pool, a1, a2);
  if ( v13 < 0 )
    goto LABEL_44;
  if ( !a2 )
    return 0LL;
  if ( !a3 )
    goto LABEL_15;
  v10 = (unsigned __int64 *)&v36;
  if ( a2 > 0x200 )
    v10 = &Pool[v9];
  v13 = MiCaptureUlongPtrArray(v10, a3, a2);
  if ( v13 < 0 )
  {
LABEL_44:
    v26 = 0LL;
  }
  else
  {
LABEL_15:
    v14 = &Pool[v9];
    v15 = *Pool;
    v13 = 0;
    v31 = (unsigned __int64)v14;
    v33 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v15);
    if ( !AweNode || (AweNode[5] & 3) != 0 )
    {
      v13 = -1073741585;
LABEL_41:
      v26 = v30;
    }
    else
    {
      v17 = AweNode[4];
      v30 = (__int64)AweNode;
      v18 = *(_DWORD *)(AweNode[3] + 48LL) & 0x2200000;
      AwePageSize = MiGetAwePageSize(v17);
      v32 = AwePageSize;
      v21 = -1073741585;
      while ( 1 )
      {
        v22 = *v12;
        if ( AwePageSize == 1 )
        {
          v23 = *v12;
        }
        else
        {
          if ( (((AwePageSize << 12) - 1) & v22) != 0 )
            goto LABEL_40;
          v23 = (AwePageSize << 12) + v22 - 1;
        }
        if ( v22 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12
          || v23 > (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF) )
        {
          v24 = MiGetAweNode(*v12);
          if ( !v24 || (v24[5] & 3) != 0 || v24[4] != v17 )
          {
LABEL_40:
            v13 = v21;
            goto LABEL_41;
          }
          v20 = v24[3];
          v25 = *(_DWORD *)(v20 + 48) & 0x2200000;
          if ( v18 == 35651584 )
          {
            if ( v25 != 35651584 )
              v13 = v21;
          }
          else if ( v25 == 35651584 )
          {
            v13 = v21;
          }
        }
        if ( (unsigned __int64)++v12 >= v31 )
          break;
        AwePageSize = v32;
      }
      v26 = v30;
      v27 = MiLockAwePagesShared(v17, (__int64)CurrentThread);
      if ( !v10
        || (v13 = MiReferenceIncomingPhysicalPages(v17, (__int64)v10, a2, (__int64)Pool, (__int64 *)&v34, v30, 0LL),
            v13 >= 0) )
      {
        *((_QWORD *)&v34 + 1) = MiWriteAwePtes(v30, (__int64)v10, a2, (__int64)Pool, 0LL, 1);
      }
      if ( v27 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v27);
    }
    if ( v33 )
      MiUnlockAweVadsShared((__int64)CurrentThread, v33);
  }
  v28 = &v34;
  v29 = 2LL;
  do
  {
    if ( *(_QWORD *)v28 )
      MiFreePhysicalPageChain(*(_QWORD *)(v26 + 32), *(_QWORD **)v28);
    v28 = (__int128 *)((char *)v28 + 8);
    --v29;
  }
  while ( v29 );
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v13;
}
