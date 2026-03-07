__int64 __fastcall HalpFindDmaControllerByRequestLine(unsigned int a1)
{
  __int64 result; // rax

  for ( result = HalpDmaControllers; (__int64 *)result != &HalpDmaControllers; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 36) <= a1 && *(_DWORD *)(result + 40) >= a1 )
      return result;
  }
  return 0LL;
}
