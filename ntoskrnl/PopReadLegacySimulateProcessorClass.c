/*
 * XREFs of PopReadLegacySimulateProcessorClass @ 0x140B93394
 * Callers:
 *     PopReadSimulateProcessorClasses @ 0x140B6D8DC (PopReadSimulateProcessorClasses.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall PopReadLegacySimulateProcessorClass(unsigned __int16 a1, void *a2, unsigned int a3, __int64 a4)
{
  char v8; // si
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  int v12; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v17[68]; // [rsp+60h] [rbp-A0h] BYREF

  ResultLength = 0;
  ValueName.Buffer = L"SmallProcessorMask";
  *(_QWORD *)&ValueName.Length = 2490404LL;
  v17[0] = 2097153;
  v8 = 0;
  KeyValueInformation = 0LL;
  memset(&v17[1], 0, 0x104uLL);
  if ( ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformationAlign64, &KeyValueInformation, 0x10u, &ResultLength) < 0
    || (_DWORD)KeyValueInformation != 4 && (_DWORD)KeyValueInformation != 11 )
  {
    return v8;
  }
  if ( DWORD1(KeyValueInformation) == 4 )
  {
    v9 = DWORD2(KeyValueInformation);
  }
  else
  {
    if ( DWORD1(KeyValueInformation) != 8 )
      return v8;
    v9 = *((_QWORD *)&KeyValueInformation + 1);
  }
  v8 = 1;
  if ( LOWORD(v17[0]) <= a1 )
  {
    if ( HIWORD(v17[0]) <= a1 )
      goto LABEL_12;
    LOWORD(v17[0]) = a1 + 1;
  }
  *(_QWORD *)&v17[2 * a1 + 2] |= v9;
LABEL_12:
  v10 = 0;
  if ( a3 )
  {
    v11 = 0LL;
    do
    {
      v12 = KeCheckProcessorAffinityEx((unsigned __int16 *)v17, v10++);
      *(_BYTE *)(a4 + v11++) = v12 == 0;
    }
    while ( v10 < a3 );
  }
  return v8;
}
