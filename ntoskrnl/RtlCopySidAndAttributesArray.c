/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1406D47D0
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x14077104C (SepCopyTokenAccessInformation.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     CmpBuildAdminInformation @ 0x140A15CBC (CmpBuildAdminInformation.c)
 * Callees:
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 */

__int64 __fastcall RtlCopySidAndAttributesArray(
        unsigned int a1,
        __int64 a2,
        ULONG a3,
        __int64 a4,
        char *DestinationSid,
        _QWORD *a6,
        ULONG *a7)
{
  unsigned int v8; // r15d
  _DWORD *v11; // rbx
  __int64 v12; // rdi
  ULONG v13; // r14d

  v8 = 0;
  if ( a1 )
  {
    v11 = (_DWORD *)(a4 + 8);
    v12 = a2 - a4;
    while ( 1 )
    {
      v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v11 + v12 - 8) + 1LL) + 8;
      if ( v13 > a3 )
        return 3221225507LL;
      *((_QWORD *)v11 - 1) = DestinationSid;
      *v11 = *(_DWORD *)((char *)v11 + v12);
      a3 -= v13;
      RtlCopySid(v13, DestinationSid, *(PSID *)((char *)v11 + v12 - 8));
      ++v8;
      DestinationSid += v13;
      v11 += 4;
      if ( v8 >= a1 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *a6 = DestinationSid;
    *a7 = a3;
    return 0LL;
  }
}
