/*
 * XREFs of RtlComputeImportTableHash @ 0x1800E0580
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     RtlAddressInSectionTable @ 0x180077F70 (RtlAddressInSectionTable.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D9E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DE20 (NtCreateSection.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800E020C (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800E02D0 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     ImportTablepFreeModuleSorted @ 0x1800E0394 (ImportTablepFreeModuleSorted.c)
 *     ImportTablepHashCanonicalLists @ 0x1800E0418 (ImportTablepHashCanonicalLists.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800E0500 (ImportTablepInsertFunctionSorted.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F7B00 (RtlFlushSecureMemoryCache.c)
 */

NTSTATUS __cdecl RtlComputeImportTableHash(HANDLE FileHandle, PCHAR Hash, ULONG ImportTableHashRevision)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  ULONG *v8; // rdi
  PIMAGE_NT_HEADERS i; // rsi
  ULONG v10; // r8d
  PVOID v11; // r14
  _QWORD *Heap; // rax
  __int64 v13; // rbx
  int inserted; // eax
  HANDLE SectionHandle; // [rsp+50h] [rbp-30h] BYREF
  PVOID v17; // [rsp+58h] [rbp-28h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+48h] BYREF

  v17 = 0LL;
  BaseAddress = 0LL;
  v19 = 0LL;
  SectionHandle = (HANDLE)-1LL;
  if ( ImportTableHashRevision == 1 )
  {
    v5 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
    if ( SectionHandle == (HANDLE)-1LL || v5 < 0 )
    {
      v4 = -1073741816;
      goto LABEL_27;
    }
    SectionOffset.QuadPart = 0LL;
    ViewSize[0] = 0LL;
    v6 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           &SectionOffset,
           ViewSize,
           ViewShare,
           0,
           2u);
    NtClose(SectionHandle);
    if ( !BaseAddress || v6 < 0 )
    {
      v4 = -1073741799;
      goto LABEL_27;
    }
    v7 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 0, 1u, &v21, (char **)&v19);
    if ( v7 >= 0 )
    {
      v8 = (ULONG *)v19;
    }
    else
    {
      if ( v7 != -1073741822 )
      {
        v4 = -1073741687;
        goto LABEL_27;
      }
      v8 = 0LL;
    }
    for ( i = RtlImageNtHeader(BaseAddress); v8; v8 += 5 )
    {
      v10 = v8[3];
      if ( !v10 || !v8[4] )
        break;
      v11 = RtlAddressInSectionTable(i, BaseAddress, v10);
      if ( !v11 )
      {
        v4 = -1073741685;
        goto LABEL_27;
      }
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
      v13 = (__int64)Heap;
      if ( !Heap )
      {
        v4 = -1073741801;
        goto LABEL_27;
      }
      Heap[2] = 0LL;
      *Heap = 0LL;
      Heap[1] = v11;
      ImportTablepInsertFunctionSorted((__int64)Heap, (__int64 ***)&v17);
      if ( i->OptionalHeader.Magic == 267 )
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(v13, BaseAddress, i, v8);
      else
        inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
                     v13,
                     BaseAddress,
                     i,
                     v8);
      v4 = inserted;
      if ( inserted < 0 )
        goto LABEL_27;
    }
    v4 = ImportTablepHashCanonicalLists(v17, Hash);
  }
  else
  {
    v4 = -1073741736;
  }
LABEL_27:
  ImportTablepFreeModuleSorted((_QWORD **)v17);
  if ( BaseAddress
    && NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress) == -1073741755
    && RtlFlushSecureMemoryCache(BaseAddress, 0LL) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  return v4;
}
