__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, ULONG_PTR *a2, __int64 **a3)
{
  __int64 v5; // rbx
  ULONG_PTR v6; // rbx
  __int64 v7; // rdi
  volatile LONG *v8; // rbp
  int v9; // ecx
  __int64 *v10; // rax

  *a3 = 0LL;
  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( qword_140C657C0 && (v5 & 0x10) == 0 )
    v5 &= ~qword_140C657C0;
  v6 = v5 >> 16;
  if ( (*(_BYTE *)(v6 + 34) & 2) == 0 )
  {
    v7 = *(_QWORD *)v6;
    v8 = (volatile LONG *)(*(_QWORD *)v6 + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
    v9 = *(_DWORD *)(v7 + 56);
    if ( !(v9 & 1 | ((v9 & 2) != 0)) )
    {
      if ( (v9 & 0x20) != 0 )
      {
LABEL_11:
        v10 = MiBuildWakeList(v7, 4);
        ++*(_DWORD *)(v7 + 76);
        *a3 = v10;
        MiRemoveUnusedSegment(v7);
LABEL_12:
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        return v7;
      }
      if ( (*(_BYTE *)(v6 + 34) & 1) == 0 && *(_QWORD *)(v6 + 8) && !*(_DWORD *)(v6 + 108) )
      {
        MiReferenceSubsection(v6);
        *a2 = v6;
        goto LABEL_11;
      }
    }
    v7 = 0LL;
    goto LABEL_12;
  }
  return 0LL;
}
