unsigned __int64 __fastcall KeCopyLastBranchInformation(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx

  if ( (*(_BYTE *)(a2 + 368) & 1) != 0 )
  {
    result = *(unsigned int *)(a2 + 256);
    if ( (result & 0x100) == 0 )
    {
LABEL_3:
      *(_OWORD *)(a1 + 1200) = 0LL;
      *(_OWORD *)(a1 + 1216) = 0LL;
      return result;
    }
  }
  else
  {
    result = (unsigned __int64)KeGetCurrentPrcb();
    if ( (*(_DWORD *)(result + 328) & 0x100LL) == 0 )
      goto LABEL_3;
  }
  v4 = (_QWORD *)(a1 + 1200);
  *(_OWORD *)(a1 + 1200) = *(_OWORD *)(a2 + 272);
  *(_OWORD *)(a1 + 1216) = *(_OWORD *)(a2 + 288);
  if ( (*(_BYTE *)(a2 + 368) & 1) != 0 )
  {
    v5 = 4LL;
    do
    {
      result = *v4 & 0x7FFFFFFFFFFFFFFFLL;
      if ( result > 0x7FFFFFFEFFFFLL )
        *v4 = 0LL;
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
