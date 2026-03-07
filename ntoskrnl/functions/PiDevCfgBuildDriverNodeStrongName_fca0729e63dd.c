__int64 __fastcall PiDevCfgBuildDriverNodeStrongName(
        __int64 a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4)
{
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r12
  int v11; // edx
  unsigned int v12; // edx
  ULONG v13; // ebx
  ULONG v14; // r8d
  NTSTATUS v15; // ebx
  ULONG v17; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  HashValue = 0;
  v8 = a1 + 88;
  v9 = *(unsigned __int16 *)(a1 + 88);
  v10 = a1 + 72;
  v11 = *(unsigned __int16 *)(a1 + 72);
  v17 = 0;
  v12 = v9 + *(unsigned __int16 *)(a1 + 40) + v11 + 90;
  if ( (unsigned __int64)v12 + 2 > 0xFFFE )
  {
    v15 = -1073741562;
  }
  else
  {
    DestinationString.Length = v12;
    DestinationString.MaximumLength = v12 + 2;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v12 + 2));
    if ( DestinationString.Buffer )
    {
      if ( a2->Buffer && RtlHashUnicodeString(a2, 1u, 0, &HashValue) >= 0 )
        v13 = HashValue;
      else
        v13 = 0;
      if ( a3->Buffer && RtlHashUnicodeString(a3, 1u, 0, &v17) >= 0 )
        v14 = v17;
      else
        v14 = 0;
      v15 = RtlUnicodeStringPrintf(
              &DestinationString,
              L"%wZ:%08x%08x:%wZ:%u.%u.%u.%u:%wZ",
              a1 + 40,
              v13,
              v14,
              v8,
              (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124)),
              *(unsigned __int16 *)(a1 + 124),
              *(unsigned __int16 *)(a1 + 122),
              *(unsigned __int16 *)(a1 + 120),
              v10);
      if ( v15 >= 0 )
      {
        *a4 = DestinationString;
        DestinationString = 0LL;
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v15;
}
