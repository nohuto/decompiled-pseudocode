__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int64 v4; // rax
  NTSTATUS v9; // ebx
  unsigned int *v10; // rdi
  _WORD *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rbx
  wchar_t *StringRoutine; // rax
  const WCHAR *v15; // rsi
  NTSTATUS RegistryValue; // ebx
  unsigned int v17; // edx
  _WORD *v18; // rcx
  unsigned int v19; // edx
  unsigned __int16 Length; // r15
  int v21; // esi
  __int64 v22; // rsi
  UNICODE_STRING v23; // xmm0
  HANDLE KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-41h] BYREF
  __int128 v27; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  v4 = *a2;
  KeyHandle = 0LL;
  P = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v10 = 0LL;
  RemainingString = 0LL;
  v27 = 0LL;
  UnicodeString = 0LL;
  if ( (unsigned int)v4 <= 4 || (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 != 37) || v11[(v4 >> 1) - 1] != 37 )
  {
    if ( PnpDuplicateUnicodeString(a3, (__int64)a2) )
    {
      if ( a4 )
        *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_19;
    }
    goto LABEL_24;
  }
  *(_DWORD *)&RemainingString.Length = 1048590;
  RemainingString.Buffer = L"Strings";
  ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &RemainingString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v12 = *a2 - 4;
    v13 = v12;
    UnicodeString.Length = v12;
    UnicodeString.MaximumLength = v12 + 2;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v12 + 2));
    UnicodeString.Buffer = StringRoutine;
    v15 = StringRoutine;
    if ( !StringRoutine )
      goto LABEL_24;
    memmove(StringRoutine, (const void *)(*((_QWORD *)a2 + 1) + 2LL), (unsigned int)v13);
    v15[v13 >> 1] = 0;
    RegistryValue = IopGetRegistryValue(KeyHandle, v15, 0, &P);
    RtlFreeUnicodeString(&UnicodeString);
    if ( RegistryValue >= 0 )
    {
      v10 = (unsigned int *)P;
      if ( PnpValidateRegistryString(P) )
      {
        v17 = v10[3];
        v18 = (_WORD *)((char *)v10 + v10[2]);
        LODWORD(P) = 0;
        PnpRegSzToString(v18, v17, (int *)&P);
        LOWORD(v27) = (_WORD)P;
        WORD1(v27) = *((_WORD *)v10 + 6);
        *((_QWORD *)&v27 + 1) = (char *)v10 + v10[2];
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
        v10 = 0LL;
      }
    }
  }
  v19 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
  if ( *((_QWORD *)&v27 + 1) )
    v19 += (unsigned __int16)v27 + 2;
  if ( (unsigned __int64)v19 + 2 > 0xFFFE )
  {
    v9 = -1073741562;
    goto LABEL_19;
  }
  DestinationString.Length = v19;
  DestinationString.MaximumLength = v19 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v19 + 2));
  if ( !DestinationString.Buffer )
  {
LABEL_24:
    v9 = -1073741670;
    goto LABEL_19;
  }
  v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
  if ( v9 < 0 )
    goto LABEL_19;
  Length = DestinationString.Length;
  v21 = DestinationString.Length >> 1;
  if ( *((_QWORD *)&v27 + 1) )
  {
    v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v27);
    if ( v9 < 0 )
      goto LABEL_19;
    DestinationString.Length = RemainingString.Length + Length;
    v22 = (unsigned int)(v21 + 1);
  }
  else
  {
    v22 = v21 - (*a2 >> 1);
  }
  v23 = DestinationString;
  DestinationString = 0LL;
  *(UNICODE_STRING *)a3 = v23;
  if ( a4 )
    RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v22));
LABEL_19:
  RtlFreeUnicodeString(&DestinationString);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
