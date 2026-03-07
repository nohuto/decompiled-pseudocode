bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11

  if ( a2 == a3 )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a2 + 2170);
  LOBYTE(a3) = *(_BYTE *)(a3 + 2170);
  if ( !(unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    return 0;
  if ( qword_140C37678 )
    return (unsigned __int8)qword_140C37678(v4, v3) == 0;
  return 1;
}
