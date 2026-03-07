DISPLAYSTATECHECKER *__fastcall DISPLAYSTATECHECKER::DISPLAYSTATECHECKER(DISPLAYSTATECHECKER *this)
{
  DISPLAYSTATECHECKER *result; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 8) = 0;
  `vector constructor iterator'(
    (char *)this + 40,
    3512LL,
    4LL,
    (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA);
  *((_DWORD *)this + 3522) = 0;
  result = this;
  *((_WORD *)this + 7046) = 256;
  *((_BYTE *)this + 14094) = 1;
  return result;
}
