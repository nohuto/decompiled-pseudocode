/*
 * XREFs of SeQueryMandatoryLabel @ 0x140743AE8
 * Callers:
 *     MiAllowImageMap @ 0x1407D35A0 (MiAllowImageMap.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402BE730 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x1403100D0 (RtlFindAceByType.c)
 */

__int64 __fastcall SeQueryMandatoryLabel(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  PSID v5; // rsi
  unsigned __int8 *AceByType; // rax
  int v7; // ecx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( (v1 & 0x10) == 0 )
    goto LABEL_11;
  if ( v1 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    goto LABEL_5;
  }
  v3 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v3 )
    v4 = a1 + v3;
  else
LABEL_11:
    v4 = 0LL;
LABEL_5:
  v5 = SepDefaultMandatorySid;
  v9 = 0;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(v4, 17, &v9);
    if ( AceByType )
    {
      if ( (AceByType[1] & 8) == 0 )
        break;
    }
    ++v9;
    if ( !AceByType )
      goto LABEL_8;
  }
  v5 = AceByType + 8;
LABEL_8:
  v7 = *RtlSubAuthorityCountSid(v5);
  if ( (_BYTE)v7 )
    return *RtlSubAuthoritySid(v5, v7 - 1);
  return v2;
}
