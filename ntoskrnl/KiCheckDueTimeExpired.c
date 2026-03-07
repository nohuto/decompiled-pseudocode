__int64 __fastcall KiCheckDueTimeExpired(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rax

  if ( a2 == 2 )
  {
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 248) - MEMORY[0xFFFFF780000003B0];
    v4 = *(unsigned int *)(a1 + 952);
    if ( *(_BYTE *)(a1 + 391) && !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
    {
      if ( (_DWORD)v4 )
        a3 += v4;
    }
    return v3 > a3;
  }
  if ( !a2 )
    return 0LL;
  if ( a3 )
  {
    v3 = MEMORY[0xFFFFF78000000014];
    return v3 > a3;
  }
  return 1LL;
}
