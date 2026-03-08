/*
 * XREFs of ExpCovQueryLoadedModule @ 0x140A04090
 * Callers:
 *     ExpCovQueryInfoCallBack @ 0x140A03AE0 (ExpCovQueryInfoCallBack.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExpCovReadFriendlyName @ 0x140A0420C (ExpCovReadFriendlyName.c)
 */

__int64 __fastcall ExpCovQueryLoadedModule(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v6; // rsi
  __int64 v7; // r15
  int v11; // edi
  unsigned int v12; // edx
  size_t Length; // rbp
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rbx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rdx
  void *v19; // rcx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 128);
  v7 = a1 + 72;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11 = ExpCovReadFriendlyName(v6, a1 + 72, &UnicodeString);
  if ( v11 < 0 )
    goto LABEL_16;
  v12 = *(_DWORD *)(a1 + 124);
  if ( !a2 )
    v12 -= *(_DWORD *)(v6 + 28);
  if ( v12 >= 0xFFFFFFE0 || (Length = UnicodeString.Length, v14 = UnicodeString.Length + v12 + 32, v14 < 0x20) )
  {
    *a6 = -1;
    goto LABEL_14;
  }
  *a6 = v14;
  if ( v14 == -1 )
  {
LABEL_14:
    DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating RequiredLengthForCurrentModule for %wZ\n", v7);
    goto LABEL_15;
  }
  v15 = *a5 + v14;
  if ( v15 < *a5 )
  {
    DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", v7);
LABEL_15:
    v11 = -1073741675;
    goto LABEL_16;
  }
  *a5 = v15;
  if ( a3 >= v15 )
  {
    *(_DWORD *)a4 = v14;
    *(_DWORD *)(a4 + 4) = 1;
    *(_DWORD *)(a4 + 24) = v12;
    v16 = v12;
    memmove((void *)(a4 + 28), *(const void **)(a1 + 128), v12);
    MaximumLength = UnicodeString.MaximumLength;
    Buffer = UnicodeString.Buffer;
    v19 = (void *)(v16 + a4 + 32);
    *(_QWORD *)(a4 + 16) = v19;
    *(_WORD *)(a4 + 8) = Length;
    *(_WORD *)(a4 + 10) = MaximumLength;
    memmove(v19, Buffer, Length);
    if ( a2 )
      memset((void *)(v6 + *(unsigned int *)(v6 + 32)), 0, *(unsigned int *)(v6 + 28));
  }
  else
  {
    v11 = -1073741820;
  }
LABEL_16:
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v11;
}
