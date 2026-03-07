NTSTATUS __fastcall DifZwCreateSectionWrapper(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  _QWORD v22[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  memset(v22, 0, sizeof(v22));
  APIThunkContextById = DifGetAPIThunkContextById(522);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v16 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v16 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v22[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v16 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v12, v11, v14, v15);
      goto LABEL_9;
    }
  }
  v22[0] = 0LL;
LABEL_10:
  v22[2] = __PAIR64__(SectionPageProtection, AllocationAttributes);
  v22[1] = FileHandle;
  v22[6] = SectionHandle;
  LODWORD(v22[5]) = DesiredAccess;
  v22[4] = ObjectAttributes;
  v22[3] = MaximumSize;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v22);
  }
LABEL_17:
  result = ZwCreateSection(
             SectionHandle,
             DesiredAccess,
             ObjectAttributes,
             MaximumSize,
             SectionPageProtection,
             AllocationAttributes,
             FileHandle);
  LODWORD(v22[7]) = result;
  if ( APIThunkContextById )
  {
    v20 = (_QWORD **)(APIThunkContextById + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v21 - 1))(v22);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return v22[7];
    }
  }
  return result;
}
