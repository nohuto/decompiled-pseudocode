/*
 * XREFs of _CmGetMatchingDevicePanelListWorker @ 0x14083DC20
 * Callers:
 *     _CmGetMatchingDevicePanelList @ 0x14083D944 (_CmGetMatchingDevicePanelList.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetMatchingDevicePanelListWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int *a6,
        int a7)
{
  int CachedContextBaseKey; // ebx
  __int64 Pool2; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v17; // eax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[0] = 0LL;
  *a6 = 0;
  if ( a5 )
    *a4 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, (__int64)v18);
  if ( CachedContextBaseKey >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 160LL, 1380994640LL);
    v13 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      v14 = v18[0];
      *(_QWORD *)(Pool2 + 128) = a3;
      *(_DWORD *)Pool2 = 1;
      *(_DWORD *)(Pool2 + 148) = 0;
      *(_QWORD *)(Pool2 + 120) = a2;
      *(_QWORD *)(Pool2 + 136) = a4;
      *(_DWORD *)(Pool2 + 144) = a5;
      *(_DWORD *)(Pool2 + 152) = a7;
      CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v14, &CmDevicePanelEnumSubkeyCallback, Pool2);
      if ( CachedContextBaseKey >= 0 )
      {
        v15 = v13[37];
        *a6 = v15;
        if ( v15 )
        {
          v17 = v15 + 1;
          *a6 = v17;
          if ( a4 && a5 >= v17 )
            a4[v17 - 1] = 0;
          else
            CachedContextBaseKey = -1073741789;
        }
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
