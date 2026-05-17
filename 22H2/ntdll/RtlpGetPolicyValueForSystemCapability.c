/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x18007A3F8
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18007A370 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlStringLengthWorkerW @ 0x1800473F4 (RtlStringLengthWorkerW.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 *     ZwQueryLicenseValue @ 0x18009FF50 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(const void **a1, UNICODE_STRING *a2)
{
  const void *Heap; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  unsigned int v10; // esi
  unsigned int v11; // r15d
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  unsigned __int16 v14; // ax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+80h] [rbp+40h] BYREF
  int v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  Heap = 0LL;
  LODWORD(Size) = 0;
  v17 = 0;
  UnicodeString = 0LL;
  if ( !a1 || !a2 )
  {
    appended = -1073741811;
LABEL_7:
    if ( appended >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v5 = *(_WORD *)a1 + 56;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_13;
  memset(StringRoutine, 0, v5);
  UnicodeString.MaximumLength = v5;
  UnicodeString.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&UnicodeString.Length, (const void **)L"68");
  if ( appended < 0 )
    goto LABEL_8;
  appended = RtlAppendUnicodeStringToString(&UnicodeString.Length, a1);
  if ( appended < 0 )
    goto LABEL_8;
  appended = ZwQueryLicenseValue(&UnicodeString, &v17, 0LL, 0LL, &Size);
  if ( appended != -1073741789 )
    goto LABEL_7;
  v10 = Size;
  v11 = Size;
  Heap = (const void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, (unsigned int)Size);
  appended = ZwQueryLicenseValue(&UnicodeString, &v17, Heap, v10, &Size);
  if ( appended < 0 )
  {
LABEL_8:
    if ( a2 )
      RtlFreeAnsiString(a2);
    goto LABEL_10;
  }
  if ( v17 != 1 || !v10 || (v10 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_8;
  }
  v12 = (wchar_t *)NtdllpAllocateStringRoutine(v10);
  v13 = v12;
  if ( !v12 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_8;
  }
  memmove(v12, Heap, v11);
  *a2 = 0LL;
  appended = RtlStringLengthWorkerW(v13, 0x7FFFLL, &v18);
  if ( appended < 0 )
    goto LABEL_8;
  v14 = 2 * v18;
  a2->Buffer = v13;
  a2->Length = v14;
  a2->MaximumLength = v14 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
LABEL_12:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)appended;
}
