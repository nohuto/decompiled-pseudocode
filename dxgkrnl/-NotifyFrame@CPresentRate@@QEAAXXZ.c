/*
 * XREFs of ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x1C007C728
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C007BE28 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C00851B4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?AddPresent@CInterval@CPresentRate@@QEAA_NK@Z @ 0x1C007C6FC (-AddPresent@CInterval@CPresentRate@@QEAA_NK@Z.c)
 */

void __fastcall CPresentRate::NotifyFrame(CPresentRate *this)
{
  CPresentRate::CInterval *v1; // r9
  unsigned __int64 v2; // r8
  unsigned int i; // r10d
  unsigned int v4; // edx

  v1 = 0LL;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  for ( i = 0; i < 2; ++i )
  {
    v4 = *(_DWORD *)this;
    if ( *(_DWORD *)this && (unsigned int)v2 >= v4 && (unsigned int)v2 - v4 <= 0x3E8 )
    {
      if ( CPresentRate::CInterval::AddPresent(this, v2) )
        return;
    }
    else
    {
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
      if ( !v1 )
        v1 = this;
    }
    this = (CPresentRate *)((char *)this + 8);
  }
  CPresentRate::CInterval::AddPresent(v1, v2);
}
