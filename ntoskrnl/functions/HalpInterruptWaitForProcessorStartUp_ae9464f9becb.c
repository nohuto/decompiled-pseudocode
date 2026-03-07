__int64 __fastcall HalpInterruptWaitForProcessorStartUp(_BYTE *a1, char a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  __int64 result; // rax

  v2 = 0;
  v5 = 2;
  while ( a2 || v2 < 0x2710 )
  {
    if ( *a1 )
    {
      if ( a2 || (v5 = 3, v2 < 0x190) )
        v5 = 4;
      break;
    }
    KeStallExecutionProcessor(0x3E8u);
    ++v2;
  }
  result = v5;
  HalpInterruptLastProcessorStartupInMs = v2;
  return result;
}
