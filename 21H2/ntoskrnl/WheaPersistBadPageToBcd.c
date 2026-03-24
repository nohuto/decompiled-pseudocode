/*
 * XREFs of WheaPersistBadPageToBcd @ 0x1405BC750
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403BAB88 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     EmpRemoveBadS3PageWorker @ 0x14088A590 (EmpRemoveBadS3PageWorker.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14095D69C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     BcdCloseStore @ 0x140782414 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140782E48 (BcdOpenStore.c)
 *     BcdOpenObject @ 0x140783A40 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783BCC (BcdCloseObject.c)
 *     WheapCountBadPageExtents @ 0x14095DA60 (WheapCountBadPageExtents.c)
 *     WheapIsPageInList @ 0x14095DAAC (WheapIsPageInList.c)
 *     WheapSortBadPages @ 0x14095DAD4 (WheapSortBadPages.c)
 *     BcdCreateObject @ 0x14096EC18 (BcdCreateObject.c)
 *     BcdGetElementData @ 0x14096F428 (BcdGetElementData.c)
 *     BcdSetElementData @ 0x14096F448 (BcdSetElementData.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaPersistBadPageToBcd(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // rsi
  int ElementData; // eax
  unsigned int v9; // r14d
  int v10; // ebx
  PVOID PoolWithTag; // rax
  __int64 v12; // rbx
  _DWORD v14[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+48h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v16 = 0LL;
  v1 = 0LL;
  v17 = 0LL;
  v4 = BcdOpenStore(a1, 0LL, &v16);
  if ( v4 < 0 )
    goto LABEL_20;
  if ( (int)BcdOpenObject(v16, &GUID_BAD_MEMORY_GROUP, &v17) < 0 )
  {
    v14[0] = 1;
    v14[1] = 537919488;
    v4 = ((__int64 (__fastcall *)(__int64, GUID *, _DWORD *, __int64 *))BcdCreateObject)(
           v16,
           &GUID_BAD_MEMORY_GROUP,
           v14,
           &v17);
    if ( v4 < 0 )
    {
      v7 = v17;
      goto LABEL_18;
    }
  }
  v7 = v17;
  v15 = 0;
  ElementData = BcdGetElementData(v17, 385875978LL, 0LL, &v15);
  v9 = v15;
  if ( ElementData != -1073741789 )
    v9 = 0;
  v10 = ElementData;
  v15 = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9 + 8LL, 0x61656857u);
  v1 = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_18;
  }
  if ( v10 != -1073741789 )
  {
LABEL_12:
    v12 = v9 >> 3;
    if ( (unsigned __int8)WheapIsPageInList(v1, v12, a1) )
    {
      v4 = 0;
    }
    else
    {
      *(_QWORD *)(v1 + 8 * v12) = a1;
      WheapSortBadPages(v1, (unsigned int)(v12 + 1));
      if ( (unsigned int)WheapCountBadPageExtents(v1, (unsigned int)(v12 + 1)) <= 0x40 )
      {
        v4 = BcdSetElementData(v7, 385875978LL, v1, v9 + 8);
        if ( v4 >= 0 )
          v4 = 0;
      }
      else
      {
        v4 = -1073741823;
      }
    }
    goto LABEL_18;
  }
  v4 = BcdGetElementData(v7, 385875978LL, PoolWithTag, &v15);
  if ( v4 >= 0 )
  {
    v9 = v15;
    goto LABEL_12;
  }
LABEL_18:
  if ( v7 )
    BcdCloseObject(v7);
LABEL_20:
  if ( v16 )
    BcdCloseStore(v16);
  if ( v1 )
    ExFreeHeapPool(v1, v3, v5, v6);
  return (unsigned int)v4;
}
