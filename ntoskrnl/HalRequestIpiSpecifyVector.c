__int64 __fastcall HalRequestIpiSpecifyVector(int a1, __int64 a2, unsigned int a3)
{
  int v7; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v9 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) < 2 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
    return 3221225485LL;
LABEL_4:
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        LODWORD(v8) = 3;
    }
    else
    {
      LODWORD(v8) = 4;
    }
  }
  else
  {
    LODWORD(v8) = 2;
    *((_QWORD *)&v8 + 1) = a2;
  }
  return HalpInterruptSendIpi(&v8, a3);
}
