/*
 * XREFs of ReplaceDeviceId @ 0x1C0058790
 * Callers:
 *     ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0058440 (ATADeviceIdShimStorageDeviceIdCompletionHook.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0058720 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     memmove @ 0x1C0020280 (memmove.c)
 *     memset @ 0x1C0020540 (memset.c)
 */

__int64 __fastcall ReplaceDeviceId(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // r12
  int v5; // esi
  size_t v6; // rdi
  unsigned int v7; // r15d
  int *PoolWithTag; // rax
  int *v9; // rbx
  int *v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  char v13; // r15
  _BYTE *v14; // rdx
  unsigned __int16 v15; // cx
  __int16 v16; // ax
  void *v17; // rcx

  v4 = *(_QWORD *)(a1 + 136);
  v5 = 0;
  v6 = a3;
  v7 = 0;
  PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x48536152u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v6);
  *v9 = 16;
  v10 = v9 + 3;
  v9[1] = 12;
  v11 = 0;
  v12 = *(unsigned __int8 *)(v4 + 3) | (*(unsigned __int8 *)(v4 + 2) << 8);
  if ( !v12 )
    goto LABEL_12;
  v13 = 0;
  do
  {
    v14 = (_BYTE *)(v11 + v4 + 4);
    v11 += (unsigned __int8)v14[3] + 4;
    if ( (v14[1] & 0x30) == 0 )
    {
      if ( v13 == 1 )
        continue;
      v14 = a4;
      v13 = 1;
    }
    ++v5;
    v15 = ((unsigned __int8)v14[3] + 20) & 0xFFFC;
    v9[1] += v15;
    if ( v9[1] <= (unsigned int)v6 )
    {
      *v10 = *v14 & 0xF;
      v10[1] = v14[1] & 0xF;
      v10[3] = ((unsigned __int8)v14[1] >> 4) & 3;
      v16 = (unsigned __int8)v14[3];
      *((_WORD *)v10 + 5) = v15;
      *((_WORD *)v10 + 4) = v16;
      memmove(v10 + 4, v14 + 4, (unsigned __int8)v14[3]);
      v10 = (int *)((char *)v10 + *((unsigned __int16 *)v10 + 5));
    }
  }
  while ( v11 < v12 );
  v7 = 0;
LABEL_12:
  if ( (unsigned int)v6 >= 0xC )
    v9[2] = v5;
  if ( v9[1] < (unsigned int)v6 )
    LODWORD(v6) = v9[1];
  v17 = *(void **)(a2 + 24);
  *(_QWORD *)(a2 + 56) = (unsigned int)v6;
  memmove(v17, v9, (unsigned int)v6);
  ExFreePoolWithTag(v9, 0x48536152u);
  return v7;
}
