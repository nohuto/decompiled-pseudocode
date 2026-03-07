__int64 __fastcall MiComputeFaultNode(__int64 a1, __int64 a2, __int64 ***a3)
{
  unsigned int v6; // ebx
  __int64 ***v7; // r8
  __int64 **v8; // r15
  unsigned __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // r12
  unsigned __int64 v12; // rax
  __int64 **Address; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax

  v6 = MiNodeFromFaultPacket(a1);
  if ( v6 )
    goto LABEL_16;
  v8 = *v7;
  v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_QWORD *)(a1 + 16) & 1) == 0 )
    v9 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v12 = Process[1].ActiveProcessors.StaticBitmap[28];
    if ( v8
      || (*(_QWORD *)a1 < 0xFFFFF68000000000uLL || *(_QWORD *)a1 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v9 || *(_QWORD *)(v12 + 408) || *(_QWORD *)(v12 + 416) || *(_BYTE *)(v12 + 340))
      && (MiLockVadTree(1LL),
          Address = MiLocateAddress(*(_QWORD *)a1),
          LOBYTE(v15) = 17,
          v8 = Address,
          MiUnlockVadTree(1LL, v15),
          (*a3 = v8) != 0LL) )
    {
      v16 = *((_DWORD *)v8 + 12);
      v6 = (v16 >> 12) & 0x7F;
      if ( v6 )
        goto LABEL_16;
      if ( (v16 & 0x200000) == 0 )
        a2 = *v8[9];
    }
    if ( !a2 || (v6 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F) == 0 )
    {
      if ( v9 && CurrentThread->ApcStateIndex == 1 )
        v6 = Process->IdealNode[CurrentThread->AffinityPrimaryGroup] + 1;
      if ( !v6 )
        return v6;
    }
LABEL_16:
    *(_DWORD *)(a1 + 80) |= 0x10000u;
  }
  return v6;
}
