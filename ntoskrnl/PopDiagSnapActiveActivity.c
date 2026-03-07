char __fastcall PopDiagSnapActiveActivity(__int64 a1, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  unsigned int v4; // r11d
  char v5; // bl
  __int64 v6; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int128 v13; // rax
  char result; // al

  LOBYTE(v4) = *(_BYTE *)(a1 + 1);
  v5 = 0;
  v6 = 0LL;
  if ( (_BYTE)v4 )
  {
    do
    {
      v9 = *(_QWORD *)(a1 + 8 * v6 + 440);
      v10 = *(_QWORD *)(a1 + 8 * v6 + 360);
      *(_QWORD *)(a1 + 8 * v6 + 360) = v9;
      v11 = (v10 - v9) / 0x989680uLL;
      *(_DWORD *)(a4 + 4 * v6) = v11;
      v4 = *(unsigned __int8 *)(a1 + 1);
      if ( (_DWORD)v11 )
        v5 = 1;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  v12 = *(_QWORD *)(a1 + 528);
  v13 = (unsigned __int64)(*(_QWORD *)(a1 + 520) - v12) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  result = v5;
  *(_QWORD *)(a1 + 520) = v12;
  *a2 = *((_QWORD *)&v13 + 1) >> 23;
  *a3 = v4;
  return result;
}
