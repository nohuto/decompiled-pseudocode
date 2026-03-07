struct PFF *__fastcall PUBLIC_PFTOBJ::pPFFGet(
        PUBLIC_PFTOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct tagDESIGNVECTOR *Buf1,
        unsigned int a6,
        struct PFF ***a7,
        int a8)
{
  __int64 v9; // rsi
  __int64 v11; // rbx
  __int64 v12; // r11
  struct PFF **v13; // rbx
  struct PFF *i; // rbx
  unsigned int v16; // eax

  v9 = a3;
  v11 = (unsigned int)iHash(a2, *(_DWORD *)(*(_QWORD *)this + 24LL));
  v13 = (struct PFF **)(v12 + 8 * (v11 + 5));
  if ( a7 )
    *a7 = v13;
  for ( i = *v13; i; i = (struct PFF *)*((_QWORD *)i + 1) )
  {
    if ( a8 == ((*((_DWORD *)i + 13) >> 3) & 1)
      && (_DWORD)v9 == *((_DWORD *)i + 8)
      && a4 == *((_DWORD *)i + 9)
      && !memcmp(*((const void **)i + 3), a2, 2 * v9) )
    {
      v16 = *((_DWORD *)i + 12);
      if ( a6 == v16 && (!a6 || !memcmp(Buf1, *((const void **)i + 5), v16)) )
        break;
    }
  }
  return i;
}
