/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1406CBA00
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     CmpBuildAdminInformation @ 0x1405EA960 (CmpBuildAdminInformation.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x1406CB4E8 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG v8; // r15d
  ULONG *p_Attributes; // rdi
  signed __int64 v12; // r14
  ULONG v13; // ebp
  unsigned __int8 *v14; // rdx
  unsigned int v15; // eax

  v8 = 0;
  if ( Count )
  {
    p_Attributes = &Dest->Attributes;
    v12 = (char *)Src - (char *)Dest;
    while ( 1 )
    {
      v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)p_Attributes + v12 - 8) + 1LL) + 8;
      if ( v13 > SidAreaSize )
        return -1073741789;
      *((_QWORD *)p_Attributes - 1) = SidArea;
      SidAreaSize -= v13;
      *p_Attributes = *(ULONG *)((char *)p_Attributes + v12);
      v14 = *(unsigned __int8 **)((char *)p_Attributes + v12 - 8);
      v15 = 4 * v14[1] + 8;
      if ( v15 <= v13 )
        memmove(SidArea, v14, v15);
      ++v8;
      SidArea = (char *)SidArea + v13;
      p_Attributes += 4;
      if ( v8 >= Count )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    *RemainingSidArea = SidArea;
    *RemainingSidAreaSize = SidAreaSize;
    return 0;
  }
}
