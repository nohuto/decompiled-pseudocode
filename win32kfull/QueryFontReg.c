/*
 * XREFs of QueryFontReg @ 0x1C00B9620
 * Callers:
 *     InitFNTCache @ 0x1C00B9300 (InitFNTCache.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00B96F0 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall QueryFontReg(PCWSTR SourceString, _QWORD *a2, _DWORD *a3)
{
  NTSTATUS GreRegKey; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  _OWORD KeyInformation[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+60h] [rbp-20h]

  *a3 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v10 = 0LL;
  GreRegKey = GetGreRegKey(&KeyHandle, 0x20019u, SourceString);
  if ( GreRegKey >= 0 )
  {
    GreRegKey = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( GreRegKey >= 0 )
    {
      *a3 = v10;
      *a2 = *(_QWORD *)&KeyInformation[0];
    }
    ZwClose(KeyHandle);
  }
  return GreRegKey >= 0;
}
