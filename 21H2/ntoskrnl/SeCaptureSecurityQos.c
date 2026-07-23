/*
 * XREFs of SeCaptureSecurityQos @ 0x14071C9E4
 * Callers:
 *     NtCreateTokenEx @ 0x1406CC0B0 (NtCreateTokenEx.c)
 *     NtDuplicateToken @ 0x14071C530 (NtDuplicateToken.c)
 * Callees:
 *     SeValidateSecurityQos @ 0x14071CAC0 (SeValidateSecurityQos.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityQos(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  _DWORD *v4; // rax
  __int64 result; // rax
  _DWORD *v6; // rax

  *a3 = 0;
  if ( (_BYTE)a2 )
  {
    if ( a1 )
    {
      if ( (a1 & 3) == 0 )
      {
        a2 = 0x7FFFFFFF0000LL;
        v6 = *(_DWORD **)(a1 + 40);
        if ( !v6 )
          goto LABEL_6;
        if ( ((unsigned __int8)v6 & 3) == 0 )
        {
          if ( *v6 != 12 )
            return 3221225485LL;
          *a3 = 1;
          *(_QWORD *)a4 = *(_QWORD *)v6;
          *(_DWORD *)(a4 + 8) = v6[2];
          *(_DWORD *)a4 = 12;
          goto LABEL_6;
        }
      }
      ExRaiseDatatypeMisalignment();
    }
  }
  else if ( a1 && *(_QWORD *)(a1 + 40) )
  {
    *a3 = 1;
    v4 = *(_DWORD **)(a1 + 40);
    if ( *v4 != 12 )
      return 3221225485LL;
    *(_QWORD *)a4 = *(_QWORD *)v4;
    *(_DWORD *)(a4 + 8) = v4[2];
  }
LABEL_6:
  if ( !*a3 )
    return 0LL;
  result = SeValidateSecurityQos(a4, a2, a3, a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
