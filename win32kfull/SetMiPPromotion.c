unsigned __int64 __fastcall SetMiPPromotion(struct tagTHREADINFO *a1, int a2)
{
  unsigned __int64 result; // rax
  unsigned int *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  result = *((_QWORD *)a1 + 169);
  if ( result )
  {
    if ( (*(_DWORD *)result & 4) == 0 )
      SetMiPWakeBit(a1);
    if ( ((a2 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (unsigned int)(a2 - 577);
      if ( (unsigned int)result <= 3 || (result = (unsigned int)(a2 - 581), (unsigned int)result <= 0x12) )
      {
        v5 = (unsigned int *)*((_QWORD *)a1 + 169);
        v6 = *v5;
        if ( (v5[9] & 0x1F0) != 0 )
          v7 = v6 & 0xFFFFFFFD;
        else
          v7 = v6 | 2;
        *v5 = v7;
      }
    }
    else
    {
      **((_DWORD **)a1 + 169) |= 4u;
      **((_DWORD **)a1 + 169) &= ~0x10u;
      result = *((_QWORD *)a1 + 169);
      *(_DWORD *)result &= ~2u;
    }
  }
  return result;
}
