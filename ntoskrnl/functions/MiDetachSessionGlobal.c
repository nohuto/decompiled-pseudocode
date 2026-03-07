char __fastcall MiDetachSessionGlobal(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v3; // zf
  $C71981A45BEB2B45F82C232A7085991E *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) |= 0x80u;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  LOBYTE(v4) = MiDetachProcessFromSession(a1);
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) &= ~0x80u;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 )
  {
    v4 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v4->ApcState.ApcListHead[0].Flink != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
