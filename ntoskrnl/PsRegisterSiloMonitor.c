/*
 * XREFs of PsRegisterSiloMonitor @ 0x14080C7C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     PspStorageAllocSlot @ 0x14080C8BC (PspStorageAllocSlot.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsRegisterSiloMonitor(__int64 a1, _QWORD *a2)
{
  _WORD *v4; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v6; // rbp
  __int64 Pool2; // rax
  char *v8; // rdi
  int v9; // ebx

  if ( !*(_BYTE *)a1 )
    return 3221225485LL;
  v4 = *(_WORD **)(a1 + 8);
  if ( !v4 || !*v4 || !*(_QWORD *)(a1 + 16) && !*(_QWORD *)(a1 + 24) )
    return 3221225485LL;
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
    return 3221225569LL;
  v6 = **(unsigned __int16 **)(a1 + 8);
  Pool2 = ExAllocatePool2(256LL, v6 + 56, 1298950483LL);
  v8 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(Pool2 + 17) = *(_BYTE *)(a1 + 2);
  *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(Pool2 + 48) = Pool2 + 56;
  *(_WORD *)(Pool2 + 42) = v6;
  RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 40), *(PCUNICODE_STRING *)(a1 + 8));
  v9 = PspStorageAllocSlot(v8 + 20);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0x4D6C6953u);
    return (unsigned int)v9;
  }
  else
  {
    *a2 = v8;
    return 0LL;
  }
}
