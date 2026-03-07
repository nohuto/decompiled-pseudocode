__int64 __fastcall EditionResetIMELayout(int a1, int a2, struct tagIMEINFOEX **a3)
{
  struct tagIMEINFOEX *Layout; // rax
  unsigned int v6; // ecx

  if ( (HIWORD(a1) & 0xF000) != 0xE000 && (*gpsi & 4) == 0 )
  {
    *a3 = 0LL;
    return 1LL;
  }
  Layout = xxxImmLoadLayout((HKL)a1);
  v6 = 0;
  *a3 = Layout;
  if ( Layout )
    return 1LL;
  LOBYTE(v6) = (a2 & 0xC0000000) != 0;
  return v6;
}
