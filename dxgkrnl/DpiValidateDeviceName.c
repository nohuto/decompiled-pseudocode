/*
 * XREFs of DpiValidateDeviceName @ 0x1C01D0F28
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x1C01A6740 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiValidateDeviceName(PCUNICODE_STRING String1)
{
  int v2; // ebp
  __int64 v3; // rsi
  __int64 *v4; // rdi

  v2 = -1073741811;
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C013B4D8, (__int64)KeGetCurrentThread());
  v3 = qword_1C013B4C8;
  if ( *(_QWORD *)v3 != v3 )
  {
    do
    {
      if ( v2 >= 0 )
        break;
      KeWaitForSingleObject((PVOID)(v3 + 72), Executive, 0, 0, 0LL);
      v4 = *(__int64 **)(v3 + 56);
      if ( (__int64 *)*v4 != v4 )
      {
        do
        {
          if ( v2 >= 0 )
            break;
          if ( *((_DWORD *)v4 + 4) == 1953656900
            && *((_DWORD *)v4 + 5) == 2
            && (!RtlCompareUnicodeString(String1, (PCUNICODE_STRING)(v4 + 343), 1u)
             || !RtlCompareUnicodeString(String1, (PCUNICODE_STRING)(v4 + 347), 1u)
             || !RtlCompareUnicodeString(String1, (PCUNICODE_STRING)(v4 + 349), 1u)
             || !RtlCompareUnicodeString(String1, (PCUNICODE_STRING)(v4 + 345), 1u)) )
          {
            v2 = 0;
          }
          v4 = (__int64 *)*v4;
        }
        while ( *v4 != *(_QWORD *)(v3 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v3 + 72), 0);
      v3 = *(_QWORD *)v3;
    }
    while ( *(_QWORD *)v3 != qword_1C013B4C8 );
  }
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v2;
}
