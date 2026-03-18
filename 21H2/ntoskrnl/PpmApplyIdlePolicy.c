/*
 * XREFs of PpmApplyIdlePolicy @ 0x1403D1F00
 * Callers:
 *     PpmResetIdlePolicy @ 0x1403D1DE4 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmApplyIdlePolicy(__int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  char v4; // dl
  char v5; // al
  unsigned __int64 result; // rax

  v1 = PpmCurrentProfile;
  v2 = *a1;
  v3 = 534LL * dword_140C232CC;
  *((_BYTE *)a1 + 68) = BYTE4(PpmCurrentProfile[v3 + 23]);
  v4 = BYTE4(v1[v3 + 24]);
  *((_BYTE *)a1 + 67) = v4;
  v5 = BYTE5(v1[v3 + 24]);
  *((_BYTE *)a1 + 65) = v4;
  *((_BYTE *)a1 + 66) = v5;
  *((_BYTE *)a1 + 64) = v5;
  result = PpmConvertTime(LODWORD(v1[v3 + 24]), 0xF4240uLL, PopQpcFrequency);
  *(_DWORD *)(v2 + 724) = result;
  return result;
}
