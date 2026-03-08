/*
 * XREFs of MiFreeCloneDescriptor @ 0x140A46394
 * Callers:
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiUnlockPagedAddress @ 0x1402EE5C4 (MiUnlockPagedAddress.c)
 *     MiDecrementCloneHeaderCount @ 0x14066182C (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCloneDescriptor(struct _KPROCESS *a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  void *v7; // r14

  v2 = (_QWORD *)a2[7];
  v3 = 0LL;
  v4 = a2[8];
  v7 = (void *)v2[2];
  if ( v4 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)v7 + v3);
      v3 += 4096LL;
    }
    while ( v3 < v4 );
  }
  PsReturnProcessNonPagedPoolQuota(a1, v4);
  MiDecrementCloneHeaderCount(v2[3]);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(a2, 0);
}
