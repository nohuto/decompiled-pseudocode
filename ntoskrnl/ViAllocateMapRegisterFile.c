/*
 * XREFs of ViAllocateMapRegisterFile @ 0x140AC4C84
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC1B90 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x140AC2650 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140AC3800 (VfGetScatterGatherList.c)
 *     VfHalAllocateMapRegisters @ 0x140AC3D60 (VfHalAllocateMapRegisters.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     ExInterlockedInsertHeadList @ 0x1402E5000 (ExInterlockedInsertHeadList.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ViAllocateFromContiguousMemory @ 0x140AC4B8C (ViAllocateFromContiguousMemory.c)
 *     ViFreeToContiguousMemory @ 0x140AC5D34 (ViFreeToContiguousMemory.c)
 *     ViInitializePadding @ 0x140AC66E4 (ViInitializePadding.c)
 */

char *__fastcall ViAllocateMapRegisterFile(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 Pool2; // rax
  char *v5; // rbx
  PMDL Mdl; // rsi
  __int64 v7; // rax
  struct _MDL *v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PVOID v14; // rax
  int v16; // edi
  PVOID *v17; // r14
  void *v18; // rcx

  v3 = a2;
  if ( a2 + *(_DWORD *)(a1 + 192) <= 0x20 )
  {
    if ( a2 )
    {
      Pool2 = ExAllocatePool2(64LL, 32 * (a2 - 1) + 120, 0x566C6148u);
      v5 = (char *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 28) = v3;
        Mdl = IoAllocateMdl(0LL, v3 << 12, 0, 0, 0LL);
        if ( Mdl )
        {
          v7 = ExAllocatePool2(64LL, (unsigned __int64)v3 << 12, 0x566C6148u);
          *((_QWORD *)v5 + 9) = v7;
          if ( v7 )
          {
            v8 = Mdl + 1;
            v9 = (__int64 *)(v5 + 104);
            do
            {
              v10 = ViAllocateFromContiguousMemory(a1, *((_DWORD *)v5 + 7) - v3);
              *v9 = v10;
              if ( v10 )
              {
                v11 = 344LL;
              }
              else
              {
                v12 = ExAllocatePool2(72LL, 0x3000uLL, 0x566C6148u);
                *v9 = v12;
                if ( !v12 )
                  goto LABEL_14;
                v11 = 348LL;
              }
              _InterlockedIncrement((volatile signed __int32 *)(v11 + a1));
              ViInitializePadding(*v9, 12288LL, 0LL, 0LL);
              PhysicalAddress = MmGetPhysicalAddress((PVOID)(*v9 + 4096));
              v9 += 4;
              v8->Next = (struct _MDL *)((unsigned __int64)PhysicalAddress.QuadPart >> 12);
              v8 = (struct _MDL *)((char *)v8 + 8);
              --v3;
            }
            while ( v3 );
            Mdl->MdlFlags |= 2u;
            v14 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
            *((_QWORD *)v5 + 8) = v14;
            if ( v14 )
            {
              *((_QWORD *)v5 + 10) = 0LL;
              *((_QWORD *)v5 + 7) = Mdl;
              *(_DWORD *)v5 = -1393569779;
              ExInterlockedInsertHeadList((PLIST_ENTRY)(a1 + 136), (PLIST_ENTRY)(v5 + 8), (PKSPIN_LOCK)(a1 + 152));
              return v5;
            }
          }
        }
LABEL_14:
        v16 = *((_DWORD *)v5 + 7);
        if ( v16 )
        {
          v17 = (PVOID *)(v5 + 104);
          do
          {
            if ( !*v17 )
              break;
            if ( !(unsigned int)ViFreeToContiguousMemory(a1, *v17, (unsigned int)(*((_DWORD *)v5 + 7) - v16)) )
              ExFreePoolWithTag(*v17, 0);
            v17 += 4;
            --v16;
          }
          while ( v16 );
        }
        if ( Mdl )
          IoFreeMdl(Mdl);
        v18 = (void *)*((_QWORD *)v5 + 9);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        ExFreePoolWithTag(v5, 0);
      }
    }
  }
  return 0LL;
}
