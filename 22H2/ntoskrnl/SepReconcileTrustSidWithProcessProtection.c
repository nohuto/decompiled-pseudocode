/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x140346E70
 * Callers:
 *     SeCreateClientSecurity @ 0x1406D6B30 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1406D6D20 (SeCreateClientSecurityEx.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140346EF0 (SepSidFromProcessProtection.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x140347780 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r10

  *a3 = 0;
  *a4 = 0LL;
  result = SepSidFromProcessProtection(a2);
  if ( result )
  {
    result = RtlIsValidProcessTrustLabelSid(result, v6, v7, v8);
    if ( !(_BYTE)result )
      goto LABEL_12;
  }
  if ( v9 )
  {
    result = RtlIsValidProcessTrustLabelSid(v9, v6, v7, v8);
    if ( (_BYTE)result )
    {
      if ( v10 )
      {
        result = *(unsigned int *)(v11 + 8);
        if ( *(_DWORD *)(v10 + 8) >= (unsigned int)result )
        {
          result = *(unsigned int *)(v11 + 12);
          if ( *(_DWORD *)(v10 + 12) >= (unsigned int)result )
            return result;
        }
      }
      else if ( !*(_DWORD *)(v11 + 8) )
      {
        return result;
      }
    }
LABEL_12:
    *a3 = 1;
    *v8 = v10;
  }
  return result;
}
