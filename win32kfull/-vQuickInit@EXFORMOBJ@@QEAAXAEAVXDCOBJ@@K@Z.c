void __fastcall EXFORMOBJ::vQuickInit(EXFORMOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v4; // r8d

  *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  *((_DWORD *)this + 3) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x1E000) != 0 || a3 != 516 )
  {
    v4 = a3 & 0x7FFFFFFF;
    if ( a3 >= 0 )
      v4 = a3;
    EXFORMOBJ::vInit(this, a2, v4, a3 & 0x80000000);
  }
  else
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 320LL;
  }
}
