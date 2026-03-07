void __fastcall NlsSetKeyStateToggle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  char v5; // di
  unsigned __int64 v6; // rbx
  __int64 v7; // rax

  v4 = gpqForeground;
  v5 = a1;
  v6 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  if ( gpqForeground )
  {
    a1 = *(unsigned __int8 *)(v6 + gpqForeground + 236);
    LODWORD(a1) = a1 | (1 << (2 * (v5 & 3) + 1));
    *(_BYTE *)(v6 + gpqForeground + 236) = a1;
  }
  v7 = SGDGetUserSessionState(a1, v4, a3, a4);
  *(_BYTE *)(v7 + v6 + 13992) |= 1 << (2 * (v5 & 3) + 1);
}
