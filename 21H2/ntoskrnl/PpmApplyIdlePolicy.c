/*
 * XREFs of PpmApplyIdlePolicy @ 0x1403C4CE4
 * Callers:
 *     PpmResetIdlePolicy @ 0x1403C4BC8 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmApplyIdlePolicy(__int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  char v4; // dl
  char v5; // al
  ULONGLONG result; // rax

  v1 = PpmCurrentProfile;
  v2 = *a1;
  v3 = 342LL * dword_140C2332C;
  *((_BYTE *)a1 + 60) = BYTE4(PpmCurrentProfile[v3 + 23]);
  v4 = BYTE4(v1[v3 + 24]);
  *((_BYTE *)a1 + 59) = v4;
  v5 = BYTE5(v1[v3 + 24]);
  *((_BYTE *)a1 + 57) = v4;
  *((_BYTE *)a1 + 58) = v5;
  *((_BYTE *)a1 + 56) = v5;
  result = PpmConvertTime(LODWORD(v1[v3 + 24]), 1000000LL, PopQpcFrequency);
  *(_DWORD *)(v2 + 532) = result;
  return result;
}
