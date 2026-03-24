/*
 * XREFs of IopFreeIrp @ 0x1402D3D20
 * Callers:
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C51E0 (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x1402E5F78 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x14030631C (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x1405007A4 (IopFreeReserveIrp.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v8; // al
  __int64 v9; // rdx
  __int16 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdi
  char v15; // al

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2636uLL, 0LL, 0LL);
  *(_WORD *)BugCheckParameter1 = 0;
  v5 = *(_BYTE *)(BugCheckParameter1 + 71);
  if ( (v5 & 0x40) != 0 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, a3, a4);
    v5 = *(_BYTE *)(BugCheckParameter1 + 71);
  }
  if ( (v5 & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1, a2);
  }
  else
  {
    v6 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v6];
    }
    v8 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v8 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v8 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
      v8 = *(_BYTE *)(BugCheckParameter1 + 71);
    }
    if ( (v8 & 4) != 0
      && ((v9 = (unsigned int)(char)IopLargeIrpStackLocations, (IopIrpStackProfilerFlags & 3) == 0)
       || (v10 = *(_WORD *)(BugCheckParameter1 + 2), v10 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v10 == 72 * (char)IopMediumIrpStackLocations + 208
       || v10 == 280) )
    {
      v11 = *(unsigned __int16 *)(BugCheckParameter1 + 2);
      if ( (unsigned __int16)v11 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        if ( (unsigned __int16)v11 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
        {
          v12 = 2064LL;
          v13 = 2072LL;
        }
        else
        {
          v12 = 2048LL;
          v13 = 2056LL;
        }
      }
      else
      {
        v12 = 2080LL;
        v13 = 2088LL;
      }
      *(_QWORD *)(BugCheckParameter1 + 56) = v11;
      v14 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v12);
      ++*(_DWORD *)(v14 + 28);
      if ( *(_WORD *)v14 < *(_WORD *)(v14 + 16)
        || (++*(_DWORD *)(v14 + 32),
            v14 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v13),
            ++*(_DWORD *)(v14 + 28),
            *(_WORD *)v14 < *(_WORD *)(v14 + 16)) )
      {
        v15 = *(_BYTE *)(BugCheckParameter1 + 71);
        if ( (v15 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter1 + 71) = v15 ^ 1;
          ExReturnPoolQuota(BugCheckParameter1, v9, v11);
        }
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v14, (PSLIST_ENTRY)BugCheckParameter1);
      }
      else
      {
        ++*(_DWORD *)(v14 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
    }
  }
}
