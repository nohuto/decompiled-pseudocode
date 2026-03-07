__int64 __fastcall VIDMM_SEGMENT::TrimOfferLists(_QWORD *a1, char a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v8; // esi
  __int64 v9; // r8
  _QWORD *i; // rbx
  int v12; // [rsp+20h] [rbp-28h]

  v8 = VIDMM_SEGMENT::TrimOfferList((VIDMM_SEGMENT *)a1, a1 + 35, a2, a3, a4);
  if ( v8 < 0 )
    v8 = VIDMM_SEGMENT::TrimOfferList((VIDMM_SEGMENT *)a1, a1 + 37, a2, a3, a4);
  if ( (a2 & 8) != 0 )
  {
    for ( i = a1 + 22;
          (_QWORD *)*i != i;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, int, _QWORD))(*a1 + 48LL))(
            a1,
            *i - 408LL,
            v9,
            0LL,
            v12,
            0LL) )
    {
      LOBYTE(v9) = 1;
      LOBYTE(v12) = 0;
    }
  }
  return (unsigned int)v8;
}
