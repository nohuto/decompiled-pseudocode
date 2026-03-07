unsigned __int64 __fastcall HalpMcaStuckErrorCheck(int a1, __int64 a2, __int64 a3)
{
  __int64 McaPcrContext; // r9
  unsigned __int64 result; // rax

  McaPcrContext = HalpGetMcaPcrContext(a3);
  result = __rdtsc();
  if ( result - *(_QWORD *)(McaPcrContext + 152) <= 0xBEBC200
    && *(_DWORD *)(McaPcrContext + 132) == a1
    && *(_QWORD *)(McaPcrContext + 136) == a2 )
  {
    if ( ++*(_DWORD *)(McaPcrContext + 144) > 3u )
      __wbinvd();
  }
  else
  {
    *(_DWORD *)(McaPcrContext + 132) = a1;
    *(_QWORD *)(McaPcrContext + 136) = a2;
    *(_DWORD *)(McaPcrContext + 144) = 1;
  }
  *(_QWORD *)(McaPcrContext + 152) = result;
  return result;
}
