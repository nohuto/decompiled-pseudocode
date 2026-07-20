/*
 * XREFs of SmpSaveRegistryValue_U @ 0x14000B840
 * Callers:
 *     SmpSaveRegistryValue @ 0x14000B2EC (SmpSaveRegistryValue.c)
 *     SmpConfigureKnownDlls @ 0x14000B370 (SmpConfigureKnownDlls.c)
 *     SmpProcessModuleImports @ 0x14000B440 (SmpProcessModuleImports.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x14000BC20 (SmpDeallocSavedRegistryEntry.c)
 *     memcpy_0 @ 0x140011B67 (memcpy_0.c)
 */

__int64 __fastcall SmpSaveRegistryValue_U(
        __int64 a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        char a4,
        struct _UNICODE_STRING **a5)
{
  int v5; // r15d
  struct _UNICODE_STRING *v10; // rbx
  struct _UNICODE_STRING *Heap; // rax
  WCHAR *v12; // rax
  struct _UNICODE_STRING **v13; // rax
  PWSTR Buffer; // r8
  void *v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rcx
  CHAR *v19; // rax
  USHORT v20; // ax
  struct _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v5 = 1;
  if ( (a4 & 1) != 0 )
  {
    v10 = *(struct _UNICODE_STRING **)a1;
    if ( *(_QWORD *)a1 != a1 )
    {
      while ( RtlCompareUnicodeString(v10 + 1, a2, 1u) )
      {
        v10 = *(struct _UNICODE_STRING **)&v10->Length;
        if ( v10 == (struct _UNICODE_STRING *)a1 )
          goto LABEL_5;
      }
      if ( v10[2].Buffer )
      {
        if ( !a3 )
        {
LABEL_23:
          Buffer = v10[2].Buffer;
          v5 = 0;
          if ( Buffer )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
            v16 = *(void **)&v10[3].Length;
            if ( v16 )
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v16);
          }
          goto LABEL_7;
        }
      }
      else if ( !a3 )
      {
        return 0x40000000LL;
      }
      if ( !RtlCompareUnicodeString(v10 + 2, a3, 1u) )
        return 0x40000000LL;
      goto LABEL_23;
    }
  }
LABEL_5:
  Heap = (struct _UNICODE_STRING *)RtlAllocateHeap(
                                     *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                     SmBaseTag,
                                     a2->MaximumLength + 56LL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap->Buffer = &Heap->Length;
  Heap[1].Buffer = (PWSTR)&Heap[3].Buffer;
  *(_QWORD *)&Heap->Length = Heap;
  Heap[1].Length = a2->Length;
  Heap[1].MaximumLength = a2->MaximumLength;
  *(_QWORD *)&Heap[3].Length = 0LL;
  memcpy_0(&Heap[3].Buffer, a2->Buffer, a2->MaximumLength);
  v10[2].Buffer = 0LL;
LABEL_7:
  if ( a3 )
  {
    v12 = (WCHAR *)RtlAllocateHeap(
                     *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                     SmBaseTag,
                     a3->MaximumLength);
    v10[2].Buffer = v12;
    if ( !v12 )
    {
      v17 = *(_QWORD *)&v10->Length;
      if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v10->Length + 8LL) != v10 )
        goto LABEL_28;
      v18 = v10->Buffer;
      if ( (struct _UNICODE_STRING *)*v18 != v10 )
        goto LABEL_28;
      goto LABEL_32;
    }
    v10[2].Length = a3->Length;
    v10[2].MaximumLength = a3->MaximumLength;
    memcpy_0(v12, a3->Buffer, a3->MaximumLength);
    if ( (a4 & 2) == 0 )
      goto LABEL_10;
    v19 = (CHAR *)RtlAllocateHeap(
                    *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                    SmBaseTag,
                    ((unsigned __int64)a3->Length >> 1) + 1);
    *(_QWORD *)&v10[3].Length = v19;
    if ( !v19 )
    {
      v17 = *(_QWORD *)&v10->Length;
      if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v10->Length + 8LL) != v10 )
        goto LABEL_28;
      v18 = v10->Buffer;
      if ( (struct _UNICODE_STRING *)*v18 != v10 )
        goto LABEL_28;
LABEL_32:
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      SmpDeallocSavedRegistryEntry(v10);
      return 3221225495LL;
    }
    DestinationString.Buffer = v19;
    v20 = (a3->Length >> 1) + 1;
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v20;
    RtlUnicodeStringToAnsiString(&DestinationString, a3, 0);
  }
  else
  {
    RtlInitUnicodeString(v10 + 2, 0LL);
  }
LABEL_10:
  if ( v5 )
  {
    v13 = *(struct _UNICODE_STRING ***)(a1 + 8);
    if ( *v13 == (struct _UNICODE_STRING *)a1 )
    {
      *(_QWORD *)&v10->Length = a1;
      v10->Buffer = (PWSTR)v13;
      *v13 = v10;
      *(_QWORD *)(a1 + 8) = v10;
      goto LABEL_13;
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_13:
  if ( a5 )
    *a5 = v10;
  return 0LL;
}
