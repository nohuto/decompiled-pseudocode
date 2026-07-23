/*
 * XREFs of _CmGetMatchingCommonClassListWorker @ 0x1407B09F4
 * Callers:
 *     _CmGetMatchingCommonClassList @ 0x1407B08DC (_CmGetMatchingCommonClassList.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B1628 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetMatchingCommonClassListWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  _DWORD *v10; // rbx
  int v11; // edx
  int CachedContextBaseKey; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // eax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[0] = 0LL;
  *a7 = 0;
  v10 = 0LL;
  if ( a6 )
    *a5 = 0;
  if ( a2 == 2 )
  {
    v11 = 7;
  }
  else
  {
    if ( a2 != 4 )
    {
      CachedContextBaseKey = -1073741811;
      goto LABEL_14;
    }
    v11 = 8;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, v11, (__int64)v18);
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x52504E50u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  PoolWithTag[1] = 0;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = a4;
  v14 = v18[0];
  *PoolWithTag = a2;
  PoolWithTag[11] = 0;
  *((_QWORD *)PoolWithTag + 2) = a3;
  *((_QWORD *)PoolWithTag + 4) = a5;
  PoolWithTag[10] = a6;
  CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v14, &CmClassSubkeyCallback, PoolWithTag);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( a2 != 4
      || !*(_BYTE *)(a1 + 4)
      || (*((_QWORD *)v10 + 1) = v14,
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)v18),
          CachedContextBaseKey >= 0)
      && (v18[0] == *((_QWORD *)v10 + 1)
       || (CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v18[0], &CmClassSubkeyCallback, v10),
           CachedContextBaseKey >= 0)) )
    {
      v15 = v10[11];
      *a7 = v15;
      if ( v15 )
      {
        v16 = v15 + 1;
        *a7 = v16;
        if ( a5 && a6 >= v16 )
          a5[v16 - 1] = 0;
        else
          CachedContextBaseKey = -1073741789;
      }
    }
  }
LABEL_14:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)CachedContextBaseKey;
}
