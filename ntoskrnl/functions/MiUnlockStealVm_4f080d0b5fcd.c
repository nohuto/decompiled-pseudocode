void __fastcall MiUnlockStealVm(__int64 a1, __int64 a2)
{
  void *v3; // rdi

  MiUnlockSystemVa(a1, a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess((_OWORD *)(a1 + 72), 0);
    MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), ($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 72));
      ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
    }
  }
}
