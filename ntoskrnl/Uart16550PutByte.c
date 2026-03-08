/*
 * XREFs of Uart16550PutByte @ 0x14067A8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Uart16550PutByte(__int64 a1, __int64 a2, char a3)
{
  char v4; // di
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  char v10; // al
  __int64 v11; // rdx
  __int16 v12; // r8
  char v13; // al

  v4 = a2;
  if ( !a1 || !*(_QWORD *)a1 )
    return 3LL;
  if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
  {
    LOBYTE(a2) = 6;
    for ( LOBYTE(a2) = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2);
          (a2 & 0xB0) != 0xB0;
          LOBYTE(a2) = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2) )
    {
      if ( (a2 & 0x80u) == 0LL )
      {
        LOBYTE(a2) = 5;
        (*(void (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2);
        if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 16))(a1, 0LL);
      }
      LOBYTE(a2) = 6;
    }
  }
  LOBYTE(a2) = 5;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2);
  if ( v6 == -1 )
    return 3LL;
  while ( (v6 & 0x20) == 0 )
  {
    LOBYTE(v7) = 6;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v7);
    v12 = *(_WORD *)(a1 + 12);
    v13 = v10 & 0x40;
    if ( v13 == 0 && (v12 & 2) != 0 || v13 != 0 && (v12 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v12 | 4;
    if ( !a3 )
      return 3LL;
    LOBYTE(v11) = 5;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v11);
  }
  LOBYTE(v8) = v4;
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(a1, 0LL, v8);
  return 0LL;
}
