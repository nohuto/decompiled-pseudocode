__int64 __fastcall MiIsProcessXfgEnabled(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) )
    return (*(_DWORD *)(a1 + 2516) >> 25) & 1;
  else
    return 0LL;
}
