/*
 * XREFs of WmipAddProviderIdToPIList @ 0x140632F98
 * Callers:
 *     WmipPrepareForWnodeAD @ 0x140632E80 (WmipPrepareForWnodeAD.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipAddProviderIdToPIList(
        const void **a1,
        _DWORD *a2,
        unsigned int *a3,
        void *a4,
        volatile signed __int64 *a5)
{
  __int64 v5; // r13
  int v6; // ebx
  __int64 v7; // r14
  void *v8; // rsi
  volatile signed __int64 *v9; // rax
  unsigned int v11; // ebp
  __int64 v12; // r15
  PVOID PoolWithTag; // rdi
  void *v14; // r12
  volatile signed __int64 **v15; // rbx
  _DWORD *v17; // [rsp+78h] [rbp+10h]

  v17 = a2;
  v5 = (unsigned int)*a2;
  v6 = 0;
  v7 = *a3;
  v8 = (void *)*a1;
  v9 = a5;
  if ( (_DWORD)v5 != (_DWORD)v7 )
    goto LABEL_2;
  v11 = 2 * v7;
  v12 = *a3;
  if ( (unsigned __int64)(2 * v7) > 0xFFFFFFFF )
  {
    v11 = -1;
    v6 = -1073741675;
    PoolWithTag = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v11, 0x70696D57u);
  }
  v14 = v8;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v8, 8 * v7);
    v8 = PoolWithTag;
    *a3 = v11;
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v15 = (volatile signed __int64 **)v8;
      do
      {
        WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v15++);
        --v12;
      }
      while ( v12 );
    }
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, a5);
    PoolWithTag = 0LL;
    v6 = -1073741670;
  }
  *a1 = PoolWithTag;
  if ( v14 != a4 )
    ExFreePoolWithTag(v14, 0);
  if ( v6 >= 0 )
  {
    v9 = a5;
    a2 = v17;
LABEL_2:
    *((_QWORD *)v8 + v5) = v9;
    *a2 = v5 + 1;
  }
  return (unsigned int)v6;
}
