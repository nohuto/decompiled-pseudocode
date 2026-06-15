/*
 * XREFs of sub_180068D78 @ 0x180068D78
 * Callers:
 *     sub_180055514 @ 0x180055514 (sub_180055514.c)
 * Callees:
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 */

__int64 __fastcall sub_180068D78(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  qword_180145000 = Frequency.QuadPart;
  *(_QWORD *)(a1 + 336) = a2;
  if ( (unsigned __int8)sub_18006C4AC(v4) )
    *(_BYTE *)(a1 + 145) = (unsigned int)IsSpatialAllowedOnPlatform() != 0;
  result = 0LL;
  *(_BYTE *)(a1 + 144) = 1;
  return result;
}
