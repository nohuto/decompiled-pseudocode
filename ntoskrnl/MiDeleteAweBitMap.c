/*
 * XREFs of MiDeleteAweBitMap @ 0x140A3ED88
 * Callers:
 *     MiDeleteAweInfo @ 0x140A3EDD8 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x140A3F4A0 (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweBitMap(struct _KPROCESS *a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( a1 )
    {
      LOBYTE(v3) = (*(_QWORD *)a2 & 0x3FLL) != 0;
      PsReturnProcessNonPagedPoolQuota(a1, 8 * ((*(_QWORD *)a2 >> 6) + v3));
    }
    ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
  }
}
