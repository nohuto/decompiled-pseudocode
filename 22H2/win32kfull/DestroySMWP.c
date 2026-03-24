/*
 * XREFs of DestroySMWP @ 0x1C006F450
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00320C0 (NtUserDeferWindowPosAndBand.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006B9F0 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01CFF30 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DestroySMWP(__int64 a1)
{
  BOOL v2; // edi
  __int64 v3; // rsi
  int v4; // ebp
  _QWORD *v5; // rsi
  __int64 v6; // rdi

  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    if ( !(unsigned int)HMMarkObjectDestroy(a1) )
      return;
    v2 = 1;
  }
  else
  {
    v2 = a1 != gSMWP;
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 28) - 1;
    if ( v4 >= 0 )
    {
      v5 = (_QWORD *)(v3 + 120);
      do
      {
        if ( *v5 )
          GreDeleteObject(*v5);
        v5 += 21;
        --v4;
      }
      while ( v4 >= 0 );
    }
    if ( v2 )
      Win32FreePool(*(void **)(a1 + 40));
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    HMFreeObject(a1);
  }
  else if ( v2 )
  {
    Win32FreePool((void *)a1);
  }
  else
  {
    gdwPUDFlags &= ~0x40000000u;
    if ( *(int *)(a1 + 32) > 8 )
    {
      v6 = Win32AllocPool(672LL, 2004054869LL);
      if ( v6 )
      {
        Win32FreePool(*(void **)(a1 + 40));
        *(_QWORD *)(a1 + 40) = v6;
        *(_DWORD *)(a1 + 32) = 4;
      }
    }
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
}
