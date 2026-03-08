/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x1406CEB28
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406D0C78 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140957214 (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140245260 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x140245840 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406CCCF8 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiDmInitializeComparisonObject @ 0x1406D04C0 (PiDmInitializeComparisonObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(__int64 a1, unsigned int a2, __int64 a3, char **a4)
{
  PVOID v8; // rsi
  int v9; // ebx
  char **v10; // rax
  __int64 v11; // r9
  char *v12; // rdi
  int Object; // eax
  void *Pool2; // rax
  _DWORD *v16; // rdi
  PVOID v17; // rax
  PVOID inserted; // rax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v20; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *Buffer; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[112]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v24, 0, sizeof(v24));
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v8 = 0LL;
  Buffer = v24;
  *a4 = 0LL;
  v20 = 0LL;
  v9 = PiDmInitializeComparisonObject(a1, a2, v25);
  if ( v9 >= 0 )
  {
    v24[1] = v25;
    v10 = (char **)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
    {
      v12 = *v10;
      if ( *v10 )
      {
LABEL_4:
        *a4 = v12;
        return (unsigned int)v9;
      }
    }
    else
    {
      v12 = 0LL;
    }
    Object = PiDmGetObject(a2, a1, &v20, v11);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v8 = v20;
      v9 = 0;
      goto LABEL_18;
    }
    if ( Object < 0 )
    {
      v8 = v20;
LABEL_15:
      if ( v12 )
        PiPnpRtlObjectEventRelease(v12);
      goto LABEL_17;
    }
    Pool2 = (void *)ExAllocatePool2(256LL, 240LL, 1097887312LL);
    P = Pool2;
    v16 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x50uLL);
      v17 = v20;
      *v16 = 1;
      v16[18] = 5;
      *((_QWORD *)v16 + 1) = v17;
      inserted = RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &P, 8u, 0LL, NodeOrParent, SearchResult);
      v12 = (char *)P;
      if ( inserted )
        goto LABEL_4;
      v9 = -1073741670;
      goto LABEL_15;
    }
    v8 = v20;
    v9 = -1073741670;
  }
LABEL_17:
  *a4 = 0LL;
LABEL_18:
  if ( v8 )
    PiDmObjectRelease(v8);
  return (unsigned int)v9;
}
