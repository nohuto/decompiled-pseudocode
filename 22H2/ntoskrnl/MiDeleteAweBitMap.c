/*
 * XREFs of MiDeleteAweBitMap @ 0x140A41A68
 * Callers:
 *     MiDeleteAweInfo @ 0x140A41AB8 (MiDeleteAweInfo.c)
 *     MiResizeAweBitMap @ 0x140A42180 (MiResizeAweBitMap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B210 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
