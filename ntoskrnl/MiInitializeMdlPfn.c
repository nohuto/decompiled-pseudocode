char __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  char v6; // al
  char result; // al
  char v8; // cl

  if ( (a2 & 0x100) != 0 )
  {
    v8 = *(_BYTE *)(a1 + 34);
    if ( (v8 & 7) != 5 )
      *(_BYTE *)(a1 + 34) = v8 & 0xF8 | 5;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a2 < 0 )
      v4 &= ~0x4000000000000000uLL;
    *(_QWORD *)(a1 + 24) = v4 & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    if ( (a2 & 0x80000200) != 0 )
      v5 = 0LL;
    else
      v5 = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 8) = v5;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1);
      MiSetPfnIdentity(a1, 3);
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_140C65828);
      *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), 1LL);
    }
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    if ( a2 < 0 )
      MiSetPfnIdentity(a1, 1);
  }
  v6 = *(_BYTE *)(a1 + 36);
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_DWORD *)(a1 + 36) = 0;
  result = v6 & 3;
  *(_BYTE *)(a1 + 36) = result;
  return result;
}
