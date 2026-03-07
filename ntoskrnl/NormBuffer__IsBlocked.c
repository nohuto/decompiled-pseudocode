bool __fastcall NormBuffer__IsBlocked(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int CurrentOutputChar; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // r10
  unsigned __int16 *v13; // r11
  unsigned __int16 *v14; // rax
  unsigned __int16 *v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[5];
  a1[13] = v2;
  v5 = a1[10];
  if ( v2 == v5 )
    return 0;
  v16 = (unsigned __int16 *)(v2 - 2);
  if ( v2 - 2 == v5 - 2 )
    return 0;
  v6 = a1[14];
  while ( 1 )
  {
    CurrentOutputChar = NormBuffer__GetCurrentOutputChar(v5, &v16);
    LOBYTE(v8) = Normalization__PageLookup(v6, CurrentOutputChar);
    v11 = Normalization__TableLookup(v10, v9, v8) & 0x3F;
    if ( v11 <= a2 )
      break;
    v14 = v16;
    *(_QWORD *)(v12 + 104) = v16;
    v16 = v14 - 1;
    if ( v14 - 1 == v13 )
      return 0;
  }
  return v11 == a2;
}
