/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x1406F3748
 * Callers:
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406F382C (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepAddLuidToIndexEntry @ 0x1406F3858 (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+38h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h]
  _BYTE *v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  v10 = 0LL;
  v6 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = SepAddLuidToIndexEntry(&v6, v5, &v13);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = 1;
    SepRefDerefLuidToIndexEntryIfNecessary(a1, v3);
    *(_QWORD *)(a1 + 1136) = v13;
    RtlInitUnicodeString(&DestinationString, L"TSA://ProcUnique");
    v4 = *(_QWORD *)(a1 + 776);
    DWORD2(v10) = 2;
    *(_QWORD *)&v10 = 0x4100000002LL;
    v11 = v5;
    p_DestinationString = &DestinationString;
    v12 = 4;
    v7[0] = 1;
    v7[1] = 1;
    return AuthzBasepSetSecurityAttributesToken(v4, &v12, (__int64)v7);
  }
  return result;
}
