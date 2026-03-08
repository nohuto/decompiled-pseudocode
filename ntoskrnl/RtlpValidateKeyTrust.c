/*
 * XREFs of RtlpValidateKeyTrust @ 0x14069ED54
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x14069B8C4 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 */

__int64 __fastcall RtlpValidateKeyTrust(void *a1, __int16 a2)
{
  unsigned int v2; // ebx
  NTSTATUS v4; // eax
  int KeyInformation; // [rsp+48h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  KeyInformation = 0;
  ResultLength = 0;
  if ( (a2 & 0x100) == 0 )
  {
    v4 = ZwQueryKey(a1, KeyTrustInformation, &KeyInformation, 4u, &ResultLength);
    if ( v4 < 0 )
    {
      v2 = v4;
      if ( v4 == -1073741431 )
        return v2;
    }
    else if ( (KeyInformation & 1) != 0 )
    {
      return v2;
    }
    __fastfail(9u);
  }
  return v2;
}
