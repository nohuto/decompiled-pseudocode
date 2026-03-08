/*
 * XREFs of ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x180038A5C
 * Callers:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180027640 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::FindSlotForData(
        CSparseStorage *this,
        int a2,
        unsigned int a3)
{
  unsigned int *v3; // rdi
  __int64 v5; // rsi
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // r15
  char *v10; // rbx
  unsigned int *v11; // rax
  unsigned __int64 v12; // r9
  int v13; // r8d
  int v14; // ecx
  struct CSparseStorage::DataInfo *result; // rax
  signed __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  LPVOID v18; // rax

  v3 = *(unsigned int **)this;
  v5 = a3;
  v7 = *(_DWORD *)(*(_QWORD *)this + 4LL) & __ROR4__(1, a2);
  if ( *(_UNKNOWN **)this == &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v8 = a3 + 40;
    v3 = (unsigned int *)DefaultHeap::AllocClear(a3 + 40);
    if ( !v3 )
      RaiseFailFastException(0LL, 0LL, 0);
    *v3 = v8;
    *(_QWORD *)this = v3;
  }
  v9 = *v3;
  v10 = (char *)(v3 + 3);
  v11 = v3 + 4;
  v12 = (unsigned __int64)v3 + v9;
  while ( (unsigned __int64)v11 <= v12 )
  {
    v13 = *(_DWORD *)v10;
    v14 = HIBYTE(*(_DWORD *)v10) & 0x7F;
    if ( v14 == a2 )
      return (struct CSparseStorage::DataInfo *)v10;
    if ( !v14 )
    {
      if ( (unsigned __int64)&v10[v5 + 4] <= v12 )
      {
        *(_DWORD *)v10 = v13 ^ (v5 ^ v13) & 0xFFFFFF;
        return (struct CSparseStorage::DataInfo *)v10;
      }
      break;
    }
    if ( !v7 && (v13 & 0xFFFFFF) == (_DWORD)v5 && (__ROR4__(1, v14) & v3[1]) == 0 )
      return (struct CSparseStorage::DataInfo *)v10;
    v10 += (*(_QWORD *)&v13 & 0xFFFFFFLL) + 4;
    v11 = (unsigned int *)(v10 + 4);
  }
  v16 = v10 - (char *)v3;
  v17 = v16 + v5 + 28;
  v18 = DefaultHeap::Realloc(v3, v17);
  *(_QWORD *)this = v18;
  if ( !v18 )
    RaiseFailFastException(0LL, 0LL, 0);
  memset_0((void *)(v9 + *(_QWORD *)this), 0, v17 - v9);
  **(_DWORD **)this = v17;
  result = (struct CSparseStorage::DataInfo *)(v16 + *(_QWORD *)this);
  *(_DWORD *)result &= 0xFF000000;
  *(_DWORD *)result |= v5 & 0xFFFFFF;
  return result;
}
