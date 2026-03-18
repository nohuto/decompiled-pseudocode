/*
 * XREFs of PfSnGetCompletedTrace @ 0x1407D74BC
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x1407D7274 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(volatile void *a1, unsigned int a2, unsigned int *a3)
{
  char v5; // r12
  char *v6; // rbx
  unsigned int *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v5 = 1;
  ExAcquireFastMutex(&FastMutex);
  dword_140C6A764 = 2;
  v6 = (char *)qword_140C6A718;
  if ( qword_140C6A718 == &qword_140C6A718 )
  {
    v10 = -2147483622;
  }
  else
  {
    v7 = (unsigned int *)((char *)qword_140C6A718 + 24);
    v8 = *((_DWORD *)qword_140C6A718 + 6);
    if ( v8 > a2 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_140C6A718;
      if ( *((PVOID **)qword_140C6A718 + 1) != &qword_140C6A718 || *(PVOID *)(v9 + 8) != qword_140C6A718 )
        __fastfail(3u);
      qword_140C6A718 = *(PVOID *)qword_140C6A718;
      *(_QWORD *)(v9 + 8) = &qword_140C6A718;
      --dword_140C6A760;
      ExReleaseFastMutex(&FastMutex);
      v5 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, a2, 8u);
      memmove((void *)a1, v6 + 16, *v7);
      *a3 = *v7;
      ExFreePoolWithTag(v6, 0);
      v10 = 0;
    }
  }
  if ( v5 )
    ExReleaseFastMutex(&FastMutex);
  return v10;
}
