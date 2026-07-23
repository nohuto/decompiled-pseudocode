/*
 * XREFs of RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E36E8
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1800E24B0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800762DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtDeleteKey @ 0x18009EF50 (NtDeleteKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E3768 (RtlpIsEmptyImageFileOptionsKey.c)
 */

__int64 __fastcall RtlpDeleteEmptyImageFileOptionsKey(unsigned __int16 *a1)
{
  int v2; // ebx
  __int64 result; // rax
  char IsEmptyImageFileOptionsKey; // si
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  while ( 1 )
  {
    result = RtlpOpenImageFileOptionsKeyEx(a1, 65545LL, 0, &KeyHandle);
    if ( (int)result < 0 )
      break;
    IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
    if ( IsEmptyImageFileOptionsKey )
      NtDeleteKey(KeyHandle);
    NtClose(KeyHandle);
    if ( IsEmptyImageFileOptionsKey )
    {
      if ( (unsigned int)++v2 < 2 )
        continue;
    }
    return 0LL;
  }
  if ( (_DWORD)result != -1073741772 )
    return result;
  return 0LL;
}
