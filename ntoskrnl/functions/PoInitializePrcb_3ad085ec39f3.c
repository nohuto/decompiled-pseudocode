char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rbx
  __int64 v3; // r8
  unsigned int v4; // ecx
  _WORD *v5; // rdx
  unsigned int v6; // eax
  char result; // al

  v1 = DeferredContext + 33600;
  memset(DeferredContext + 33600, 0, 0x238uLL);
  *((_DWORD *)DeferredContext + 8302) = 0x10000;
  *((_QWORD *)v1 + 29) = PpmWmiDispatch;
  v1[248] = 1;
  v1[216] = 2;
  *((_WORD *)v1 + 215) = 100;
  KeInitializeDpc((PRKDPC)(v1 + 280), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  PpmHeteroHgsProcessorInit((__int64)DeferredContext, 1, v3);
  PpmHeteroAmdProcessorInit((__int64)DeferredContext);
  v4 = 100;
  v5 = v1 + 554;
  do
  {
    v6 = v4;
    v4 += 100;
    *v5++ = (v6 >> 2) - 1;
  }
  while ( v4 < 0x1F4 );
  if ( !*((_QWORD *)v1 + 42) )
    *((_WORD *)v1 + 141) = *((_DWORD *)DeferredContext + 9) + 2048;
  v1[281] = 3;
  result = PpmHvUseNativeAlgorithms();
  if ( result )
  {
    *((_DWORD *)v1 + 56) = 0;
  }
  else
  {
    result = HvlpFlags;
    if ( (HvlpFlags & 2) != 0 )
      *((_DWORD *)v1 + 56) = 2;
    else
      *((_DWORD *)v1 + 56) = 1;
  }
  v1[436] = 1;
  return result;
}
