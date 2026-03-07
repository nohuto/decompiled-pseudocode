void __fastcall xxxUpdateModifierState(int a1, signed int a2)
{
  _DWORD *v2; // rbx
  int v3; // esi
  unsigned int v5; // edi
  int v7; // ecx
  __int16 v8; // ax
  _OWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF

  v2 = &unk_1C02A4C04;
  v3 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits;
  v5 = 0;
  memset(v9, 0, sizeof(v9));
  do
  {
    v7 = v3 & *(v2 - 1);
    if ( v7 != (a1 & *(v2 - 1)) )
    {
      LOBYTE(v9[0]) = *(_BYTE *)v2;
      v8 = *((_WORD *)v2 + 1);
      WORD1(v9[0]) = v8;
      if ( v7 )
        WORD1(v9[0]) = v8 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v9, 0, a2) )
        xxxProcessKeyEvent((unsigned __int8 *)v9, 0LL, 0, 0, 0LL, 0LL);
    }
    ++v5;
    v2 += 2;
  }
  while ( v5 < 8 );
}
