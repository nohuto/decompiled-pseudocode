void __fastcall MiReleaseVadEventBlocks(__int64 a1, int a2)
{
  int v4; // r12d
  _KPROCESS *Process; // rdi
  _DWORD *VadWakeList; // rbx
  int v7; // ecx
  _DWORD *v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  __int64 ProcessPartition; // rax
  unsigned __int64 v12; // r8

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  VadWakeList = (_DWORD *)MiGetVadWakeList(a1, -546);
  if ( VadWakeList )
  {
    do
    {
      v8 = *(_DWORD **)VadWakeList;
      if ( (VadWakeList[16] & 0x10) != 0 )
      {
        v4 = 1;
        MiFreeLargePageView(Process, a1, VadWakeList, a2 != 0);
      }
      if ( (VadWakeList[16] & 8) != 0 )
        MiFreeRotateVadEvent(VadWakeList);
      if ( (VadWakeList[16] & 4) != 0 )
        MiFreeVadEventBitmapCharges(Process, VadWakeList);
      if ( (VadWakeList[16] & 0x40) != 0 )
        MiFreeVadEventBitmapCharges(Process, VadWakeList);
      if ( (VadWakeList[16] & 0x100) != 0 )
      {
        v9 = (_QWORD *)*((_QWORD *)VadWakeList + 4);
        v10 = *((_QWORD *)VadWakeList + 5);
        if ( (*v9 != -2LL || v9[1] != -2LL || v9[2] != -2LL) && MiComputeAweCharges(v9, VadWakeList + 2) )
        {
          ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
          MiReturnResident(ProcessPartition, v12);
        }
        if ( (*(_DWORD *)(v10 + 8) & 1) == 0 )
          MiDereferenceControlArea(*(_QWORD *)(v10 + 40));
      }
      if ( (VadWakeList[16] & 0x80u) != 0 )
        MiFreePlaceholderVadEvent(VadWakeList);
      ExFreePoolWithTag(VadWakeList, 0);
      VadWakeList = v8;
    }
    while ( v8 );
  }
  v7 = *(_DWORD *)(a1 + 48);
  if ( (v7 & 0x200000) != 0 && ((v7 & 0x180000u) >= 0x100000 || (v7 & 0x800000) != 0) && (v7 & 0x70) == 0 && !v4 )
    MiFreeLargePageView(Process, a1, 0LL, a2 != 0);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
      --*(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 296);
  }
}
