/*
 * XREFs of _CmGetMatchingCommonClassListWorker @ 0x14083E2B8
 * Callers:
 *     _CmGetMatchingCommonClassList @ 0x14083E1A0 (_CmGetMatchingCommonClassList.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  int v10; // edx
  int CachedContextBaseKey; // ebx
  __int64 Pool2; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // eax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[0] = 0LL;
  *a7 = 0;
  if ( a6 )
    *a5 = 0;
  if ( a2 == 2 )
  {
    v10 = 7;
  }
  else
  {
    if ( a2 != 4 )
      return (unsigned int)-1073741811;
    v10 = 8;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, v10, (__int64)v18);
  if ( CachedContextBaseKey >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 48LL, 1380994640LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_QWORD *)(Pool2 + 24) = a4;
      v14 = v18[0];
      *(_DWORD *)Pool2 = a2;
      *(_QWORD *)(Pool2 + 16) = a3;
      *(_QWORD *)(Pool2 + 32) = a5;
      *(_DWORD *)(Pool2 + 40) = a6;
      CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v14, &CmClassSubkeyCallback, Pool2);
      if ( CachedContextBaseKey >= 0 )
      {
        if ( a2 != 4
          || !*(_BYTE *)(a1 + 4)
          || (*(_QWORD *)(v13 + 8) = v14,
              CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)v18),
              CachedContextBaseKey >= 0)
          && (v18[0] == *(_QWORD *)(v13 + 8)
           || (CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v18[0], &CmClassSubkeyCallback, v13),
               CachedContextBaseKey >= 0)) )
        {
          v15 = *(_DWORD *)(v13 + 44);
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
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
