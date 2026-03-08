/*
 * XREFs of PspAddProcessToWorkingSetChangeList @ 0x1409AEE48
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsProcessCallback @ 0x1409AFC30 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     MmEnforceWorkingSetLimit @ 0x140294980 (MmEnforceWorkingSetLimit.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char __fastcall PspAddProcessToWorkingSetChangeList(struct _KPROCESS *Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdi
  __int64 *v7; // rcx

  LODWORD(Pool2) = Object[1].DirectoryTableBase;
  if ( (Pool2 & 1) == 0 )
  {
    v6 = Object[1].Affinity.StaticBitmap[16];
    if ( (*(_DWORD *)(v6 + 1040) & 1) != 0 )
    {
      LOBYTE(Pool2) = ObReferenceObjectSafeWithTag((__int64)Object);
      if ( (_BYTE)Pool2 )
      {
        Pool2 = ExAllocatePool2(256LL, 40LL, 1917023056LL);
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 16) = Object;
          *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(v6 + 992);
          *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(v6 + 984);
          v7 = (__int64 *)qword_140D0BFF8;
          if ( *(__int64 **)qword_140D0BFF8 != &PspWorkingSetChangeHead )
            __fastfail(3u);
          *(_QWORD *)Pool2 = &PspWorkingSetChangeHead;
          *(_QWORD *)(Pool2 + 8) = v7;
          *v7 = Pool2;
          qword_140D0BFF8 = Pool2;
        }
        else
        {
          LOBYTE(Pool2) = ObfDereferenceObjectWithTag(Object, 0x624A7350u);
        }
      }
    }
    else
    {
      LOBYTE(Pool2) = MmEnforceWorkingSetLimit(Object, 2LL, a3, a4);
    }
  }
  return Pool2;
}
