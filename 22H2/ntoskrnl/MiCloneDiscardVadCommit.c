/*
 * XREFs of MiCloneDiscardVadCommit @ 0x140A3C3B0
 * Callers:
 *     MiCloneCaptureVadCommit @ 0x1406435E0 (MiCloneCaptureVadCommit.c)
 *     MiAllocateChildVads @ 0x140A483EC (MiAllocateChildVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiCloneDiscardVadCommit(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
