void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 32));
  }
  else
  {
    MiRemoveFromSystemSpace(v1, 1);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
