void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1)
{
  bool v2; // zf
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v5; // al
  __int16 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  char v11; // al

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2758uLL, 0LL, 0LL);
  v2 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v2 )
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1);
  }
  else
  {
    v3 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
    }
    v5 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v5 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v5 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
    }
    if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 4) != 0
      && ((IopIrpStackProfilerFlags & 3) == 0
       || (v6 = *(_WORD *)(BugCheckParameter1 + 2), v6 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v6 == 72 * (char)IopMediumIrpStackLocations + 208
       || v6 == 280) )
    {
      v7 = *(unsigned __int16 *)(BugCheckParameter1 + 2);
      if ( (unsigned __int16)v7 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      {
        if ( (unsigned __int16)v7 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
        {
          v8 = 2048LL;
          v9 = 2056LL;
        }
        else
        {
          v8 = 2064LL;
          v9 = 2072LL;
        }
      }
      else
      {
        v8 = 2080LL;
        v9 = 2088LL;
      }
      *(_QWORD *)(BugCheckParameter1 + 56) = v7;
      v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v8);
      ++*(_DWORD *)(v10 + 28);
      if ( *(_WORD *)v10 < *(_WORD *)(v10 + 16)
        || (++*(_DWORD *)(v10 + 32),
            v10 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v9),
            ++*(_DWORD *)(v10 + 28),
            *(_WORD *)v10 < *(_WORD *)(v10 + 16)) )
      {
        v11 = *(_BYTE *)(BugCheckParameter1 + 71);
        if ( (v11 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter1 + 71) = v11 ^ 1;
          ExReturnPoolQuota(BugCheckParameter1);
        }
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v10, (PSLIST_ENTRY)BugCheckParameter1);
      }
      else
      {
        ++*(_DWORD *)(v10 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
    }
  }
}
