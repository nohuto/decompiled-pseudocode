/*
 * XREFs of AdtpBuildContextFromSecurityDescriptor @ 0x14066E690
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14066D780 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlFindAceByType @ 0x1403100D0 (RtlFindAceByType.c)
 *     SeRmReferenceFindCapName @ 0x1405B7318 (SeRmReferenceFindCapName.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14071C1D0 (RtlGetSaclSecurityDescriptor.c)
 */

int __fastcall AdtpBuildContextFromSecurityDescriptor(void *a1, __int64 a2)
{
  int result; // eax
  void *v4; // rbp
  unsigned __int8 *AceByType; // rax
  _QWORD *v6; // rsi
  _DWORD *v7; // rdi
  BOOLEAN v8; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  *(_QWORD *)a2 = a1;
  v8 = 0;
  result = RtlGetSaclSecurityDescriptor(a1, &v8, (PACL *)&v11, &v9);
  if ( result < 0 )
  {
    v7 = (_DWORD *)(a2 + 8);
    v6 = (_QWORD *)(a2 + 16);
LABEL_11:
    *v7 = 0;
    *v6 = 0LL;
    return result;
  }
  v4 = 0LL;
  if ( v8 )
  {
    while ( 1 )
    {
      AceByType = RtlFindAceByType(v11, 19, &v10);
      if ( AceByType )
      {
        if ( (AceByType[1] & 8) == 0 )
          break;
      }
      ++v10;
      if ( !AceByType )
        goto LABEL_8;
    }
    v4 = AceByType + 8;
  }
LABEL_8:
  v6 = (_QWORD *)(a2 + 16);
  v7 = (_DWORD *)(a2 + 8);
  result = SeRmReferenceFindCapName(v4, (_DWORD *)(a2 + 8), (__int64 *)(a2 + 16));
  if ( result < 0 )
    goto LABEL_11;
  return result;
}
