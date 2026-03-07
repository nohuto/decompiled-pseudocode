__int64 __fastcall HalpWdatInitializeWdrt(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 *v5; // rdi
  unsigned int v6; // esi

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned __int16 *)(v1 + 68);
  *(_DWORD *)(a1 + 16) = v3;
  if ( v3 >= 0x1FF )
    *(_DWORD *)(a1 + 16) = v3;
  else
    *(_DWORD *)(a1 + 16) = 512;
  *(_DWORD *)(a1 + 20) = 1;
  if ( *(_BYTE *)(v1 + 70) )
  {
    if ( *(_BYTE *)(v1 + 70) == 1 )
    {
      *(_DWORD *)(a1 + 24) = 100;
    }
    else
    {
      if ( *(_BYTE *)(v1 + 70) != 2 )
        return 3221225485LL;
      *(_DWORD *)(a1 + 24) = 10;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1000;
  }
  *(_DWORD *)(a1 + 44) = 15;
  v5 = qword_14003E8C8;
  v6 = 0;
  while ( 1 )
  {
    result = WdInstrInitializeInstruction(
               (v6 << 6) + a1 + 48,
               *((_BYTE *)v5 - 8),
               *((_BYTE *)v5 - 7),
               (unsigned int)v1 + (*((_BYTE *)v5 - 6) != 0 ? 48 : 36),
               *((_DWORD *)v5 - 1),
               *(_DWORD *)v5,
               1);
    if ( (int)result < 0 )
      break;
    ++v6;
    v5 = (__int64 *)((char *)v5 + 12);
    if ( v6 >= 0xF )
      return 0LL;
  }
  return result;
}
