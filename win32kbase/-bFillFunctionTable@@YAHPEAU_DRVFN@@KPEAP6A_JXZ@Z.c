__int64 __fastcall bFillFunctionTable(struct _DRVFN *a1, int a2, __int64 (**a3)(void))
{
  __int64 iFunc; // rcx
  __int64 (*pfn)(void); // rax

  memset(a3, 0, 0x340uLL);
  while ( 1 )
  {
    if ( !a2 )
      return 1LL;
    --a2;
    if ( a1->iFunc >= 0x68 )
      break;
    iFunc = a1->iFunc;
    pfn = a1->pfn;
    ++a1;
    a3[iFunc] = pfn;
  }
  return 0LL;
}
