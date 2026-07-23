/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x1409556B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D1B10 (_wcsnicmp.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x140690804 (PsIsProcessAppContainer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14094F4F0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140950450 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140951F1C (ExpSetFirmwareEnvironmentVariable.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  unsigned __int16 v8; // cx
  size_t v9; // rbx
  unsigned __int64 v10; // rcx
  char *v11; // rcx
  size_t *PoolWithTag; // rax
  size_t *v13; // rdi
  __int64 v14; // rax
  NTSTATUS v15; // ebx
  char v16; // [rsp+30h] [rbp-78h]
  unsigned int v17; // [rsp+38h] [rbp-70h]
  void *Src[2]; // [rsp+50h] [rbp-58h]
  GUID v19; // [rsp+68h] [rbp-40h] BYREF

  v19 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (int)VendorGuid,
             (__int64)Value,
             ValueLength,
             Attributes);
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    goto LABEL_31;
  *(UNICODE_STRING *)Src = *VariableName;
  v8 = _mm_cvtsi128_si32(*(__m128i *)VariableName);
  if ( !v8 )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8;
  v10 = (unsigned __int64)Src[1] + v8;
  if ( v10 > 0x7FFFFFFF0000LL || (void *)v10 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
LABEL_31:
    ExRaiseDatatypeMisalignment();
  v17 = Value != 0LL ? ValueLength : 0;
  if ( v17 )
  {
    v11 = (char *)Value + (Value != 0LL ? ValueLength : 0);
    if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Value )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v16 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v16 )
    goto LABEL_23;
  if ( PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    v16 = ExpFirmwareAccessAppContainerCheck(2);
  if ( !v16 )
    return -1073741727;
LABEL_23:
  v19 = *VendorGuid;
  PoolWithTag = (size_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v9);
  *((_WORD *)v13 + (v9 >> 1)) = 0;
  v14 = *(_QWORD *)&v19.Data1 - ExpSecureBootVendorGuid;
  if ( *(_QWORD *)&v19.Data1 == ExpSecureBootVendorGuid )
    v14 = *(_QWORD *)v19.Data4 - 0x4B788FE7F42860BDLL;
  if ( v14 || wcsnicmp((const wchar_t *)v13, L"Kernel_", 7uLL) )
  {
    v15 = ExpSetFirmwareEnvironmentVariable(v13, (__int64)&v19, (unsigned __int64)Value, v17, Attributes, 1);
    ExFreePoolWithTag(v13, 0);
    return v15;
  }
  else
  {
    ExFreePoolWithTag(v13, 0);
    return -1073741790;
  }
}
