/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140A2E748
 * Callers:
 *     MmRotatePhysicalView @ 0x140A2EF10 (MmRotatePhysicalView.c)
 * Callees:
 *     MiIsPfn @ 0x14025F1D0 (MiIsPfn.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     MmSizeOfMdl @ 0x1402CFFB0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiMarkMdlComplete @ 0x140630368 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x140630B44 (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiGetVadCacheAttribute @ 0x14065E5C4 (MiGetVadCacheAttribute.c)
 *     MiLogVirtualRotateEvent @ 0x140A2E6F4 (MiLogVirtualRotateEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(
        __int64 a1,
        __int64 a2,
        SIZE_T a3,
        int (__fastcall *a4)(struct _MDL *, struct _MDL *, __int64),
        __int64 a5,
        SIZE_T *a6)
{
  SIZE_T v9; // rax
  struct _MDL *Pool; // r14
  SIZE_T v11; // rax
  struct _MDL *v12; // r15
  CSHORT v13; // di
  unsigned int VadCacheAttribute; // eax
  int v15; // eax
  __int64 ByteCount; // rcx
  int v17; // ebx
  unsigned __int64 *v18; // rdi
  unsigned __int64 i; // rbx
  __int64 v20; // rsi
  int v22; // [rsp+20h] [rbp-1F8h]
  _BYTE v24[192]; // [rsp+40h] [rbp-1D8h] BYREF
  _BYTE v25[192]; // [rsp+100h] [rbp-118h] BYREF

  memset(v24, 0, 0xB8uLL);
  memset(v25, 0, 0xB8uLL);
  if ( a3 <= 0x10000 )
    goto LABEL_7;
  if ( a3 > 0xFFFFFFFF
    || (v9 = MmSizeOfMdl((PVOID)a2, a3), (Pool = (struct _MDL *)MiAllocatePool(64, v9, 0x6F666E49u)) == 0LL) )
  {
    a3 = 0x10000LL;
LABEL_7:
    Pool = (struct _MDL *)v24;
    goto LABEL_8;
  }
  v11 = MmSizeOfMdl((PVOID)a2, a3);
  v12 = (struct _MDL *)MiAllocatePool(64, v11, 0x6F666E49u);
  if ( v12 )
    goto LABEL_9;
  a3 = 0x10000LL;
LABEL_8:
  v12 = (struct _MDL *)v25;
LABEL_9:
  Pool->Next = 0LL;
  Pool->MdlFlags = 0;
  Pool->ByteCount = a3;
  Pool->ByteOffset = a2 & 0xFFF;
  Pool->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v13 = 8 * (((a3 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  Pool->Size = v13;
  MmBuildMdlForNonPagedPool(Pool);
  Pool->MdlFlags |= 0x2000u;
  v12->Next = 0LL;
  v12->Size = v13;
  v12->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v12->ByteOffset = a2 & 0xFFF;
  v12->ByteCount = a3;
  v12->MdlFlags = 0x2000;
  VadCacheAttribute = MiGetVadCacheAttribute(a1);
  v15 = MiSwitchToTransition((ULONG_PTR)v12, a1, VadCacheAttribute);
  ByteCount = v12->ByteCount;
  v17 = v15;
  v22 = v15;
  if ( ByteCount != a3 )
  {
    a3 = (unsigned int)ByteCount;
    Pool->ByteCount = ByteCount;
  }
  if ( v12->ByteCount )
  {
    if ( a4(v12, Pool, a5) < 0 )
      MiSlowRotateCopy((__int64)v12, (__int64)Pool, a1);
    MiMarkMdlComplete((__int64)v12, a1);
    v18 = (unsigned __int64 *)&Pool[1];
    for ( i = (unsigned __int64)Pool->ByteCount >> 12; i; --i )
    {
      v20 = *v18;
      if ( !(unsigned int)MiIsPfn(*v18) )
        MiDereferenceIoPages(1, v20, 1uLL);
      ++v18;
    }
    v17 = v22;
  }
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && a3 )
    MiLogVirtualRotateEvent(a2, a3, 2);
  if ( Pool != (struct _MDL *)v24 )
    ExFreePoolWithTag(Pool, 0);
  if ( v12->ByteCount )
    MmUnlockPages(v12);
  if ( v12 != (struct _MDL *)v25 )
    ExFreePoolWithTag(v12, 0);
  *a6 = a3;
  return v17 != 0 ? 0x40000019 : 0;
}
