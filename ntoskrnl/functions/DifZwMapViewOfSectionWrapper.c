NTSTATUS __fastcall DifZwMapViewOfSectionWrapper(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[12]; // [rsp+58h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(552);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v19 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v19 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v25[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v19 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v15, v14, v17, v18);
      goto LABEL_9;
    }
  }
  v25[0] = 0LL;
LABEL_10:
  v25[5] = CommitSize;
  v25[4] = SectionOffset;
  v25[3] = ViewSize;
  LODWORD(v25[2]) = InheritDisposition;
  v25[1] = __PAIR64__(AllocationType, Win32Protect);
  v25[9] = SectionHandle;
  v25[8] = ProcessHandle;
  v25[7] = BaseAddress;
  v25[6] = ZeroBits;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v25);
  }
LABEL_17:
  result = ZwMapViewOfSection(
             SectionHandle,
             ProcessHandle,
             BaseAddress,
             ZeroBits,
             CommitSize,
             SectionOffset,
             ViewSize,
             InheritDisposition,
             AllocationType,
             Win32Protect);
  LODWORD(v25[10]) = result;
  if ( APIThunkContextById )
  {
    v23 = (_QWORD **)(APIThunkContextById + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v24 - 1))(v25);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return v25[10];
    }
  }
  return result;
}
