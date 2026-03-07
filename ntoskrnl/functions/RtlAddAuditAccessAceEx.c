__int64 __fastcall RtlAddAuditAccessAceEx(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int8 *Src,
        char a6,
        char a7)
{
  int v7; // eax
  int v8; // r8d

  v7 = a3 | 0x40;
  if ( !a6 )
    v7 = a3;
  v8 = v7 | 0x80;
  if ( !a7 )
    v8 = v7;
  return RtlpAddKnownAce(a1, a2, v8, a4, Src, 2);
}
