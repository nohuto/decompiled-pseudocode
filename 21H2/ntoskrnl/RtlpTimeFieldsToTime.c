/*
 * XREFs of RtlpTimeFieldsToTime @ 0x140233B64
 * Callers:
 *     GetBootSystemTime @ 0x140A7282C (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140233BE4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__int64 a1, __int64 *a2)
{
  char *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = (char *)ExLeapSecondData;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
    return RtlpTimeFieldsToTimeNoLeapSeconds(a1, a2);
  v4 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v11, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v12) )
    return 0;
  v5 = v12;
  v6 = 0;
  if ( !v4 )
    goto LABEL_5;
  v8 = (__int64 *)(v3 + 8);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 >= 0 )
    {
      if ( v5 < v9 + 10000000 )
      {
        if ( v5 < v9 )
          goto LABEL_5;
        v5 = 2 * v5 - v9;
      }
      else
      {
        v5 += 10000000LL;
      }
      goto LABEL_16;
    }
    v10 = v9 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v5 < v10 + 10000000 )
      break;
    v5 -= 10000000LL;
LABEL_16:
    ++v6;
    ++v8;
    if ( v6 >= v4 )
      goto LABEL_5;
  }
  if ( v5 < v10 )
  {
LABEL_5:
    *a2 = v5;
    return 1;
  }
  return 0;
}
