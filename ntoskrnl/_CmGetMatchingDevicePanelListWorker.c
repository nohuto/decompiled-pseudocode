/*
 * XREFs of _CmGetMatchingDevicePanelListWorker @ 0x140823EA0
 * Callers:
 *     _CmGetMatchingDevicePanelList @ 0x140823988 (_CmGetMatchingDevicePanelList.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140824EA0 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetMatchingDevicePanelListWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6,
        int a7)
{
  int CachedContextBaseKey; // ebx
  __int64 Pool2; // rax
  unsigned int *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v17[0] = 0LL;
  *a6 = 0;
  if ( a5 )
    *a4 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, (__int64)v17);
  if ( CachedContextBaseKey >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 160LL, 1380994640LL);
    v13 = (unsigned int *)Pool2;
    if ( Pool2 )
    {
      v14 = v17[0];
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
        if ( (_DWORD)v15 )
        {
          *a6 = v15 + 1;
          if ( a4 && a5 >= (int)v15 + 1 )
            a4[v15] = 0;
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
