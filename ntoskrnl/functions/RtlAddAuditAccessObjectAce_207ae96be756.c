__int64 __fastcall RtlAddAuditAccessObjectAce(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PSID Src,
        char a8,
        char a9)
{
  int v9; // eax
  int v10; // r8d

  v9 = a3 | 0x40;
  if ( !a8 )
    v9 = a3;
  v10 = v9 | 0x80;
  if ( !a9 )
    v10 = v9;
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(a1, a2, v10, a4, a5, a6, Src, 7);
  else
    return RtlpAddKnownAce(a1, a2, v10, a4, (unsigned __int8 *)Src, 2);
}
