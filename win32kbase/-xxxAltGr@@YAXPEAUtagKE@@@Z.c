void __fastcall xxxAltGr(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int8 v6; // si
  unsigned __int8 v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (_BYTE)v5 == 0xA5 )
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 8) + 3) <= 1u )
    {
      v6 = 1;
      v7 = 1;
    }
    else
    {
      v6 = 0;
      v7 = 0;
    }
    if ( (v5 & 0x8000u) != 0LL )
    {
      *(_DWORD *)(SGDGetUserSessionState(v5, a2, a3, a4) + 13920) = 0;
      if ( (*(_BYTE *)(SGDGetUserSessionState(v13, v12, v14, v15) + 14096) & 0x10) == 0 )
        xxxKeyEventEx(
          32930LL,
          541LL,
          *((unsigned int *)a1 + 1),
          0LL,
          *((void **)a1 + 1),
          (unsigned __int16 *)a1 + 8,
          v6,
          0,
          0LL,
          0LL);
    }
    else if ( (*(_BYTE *)(SGDGetUserSessionState(v5, a2, a3, a4) + 14060) & 4) == 0 )
    {
      *(_DWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 13920) = 1;
      xxxKeyEventEx(
        162LL,
        541LL,
        *((unsigned int *)a1 + 1),
        0LL,
        *((void **)a1 + 1),
        (unsigned __int16 *)a1 + 8,
        v7,
        0,
        0LL,
        0LL);
    }
  }
}
