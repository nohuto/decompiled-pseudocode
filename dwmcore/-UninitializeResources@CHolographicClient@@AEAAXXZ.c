/*
 * XREFs of ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1802AAF3C
 * Callers:
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA608 (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA568 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA758 (-ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA7E0 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA898 (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall CHolographicClient::UninitializeResources(CHolographicClient *this)
{
  int v2; // eax
  __int64 i; // rdi
  int v4; // eax
  __int64 j; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax

  v2 = *((_DWORD *)this + 16) - 1;
  for ( i = v2;
        i >= 0;
        CHolographicClient::ProcessRemoveTexture(this, *(struct IUnknown **)(*((_QWORD *)this + 5) + 8 * i--)) )
  {
    ;
  }
  v4 = *((_DWORD *)this + 24) - 1;
  for ( j = v4; j >= 0; --j )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * j);
    if ( !*(_BYTE *)(v6 + 83) )
    {
      CHolographicClient::ProcessReleaseExclusiveSwapChain(this, (struct IUnknown *)v6);
      CHolographicClient::ProcessRemoveExclusiveView(this, *(struct IUnknown **)(*((_QWORD *)this + 9) + 8 * j));
    }
  }
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 14);
    if ( *((_QWORD *)this + 13) == v7 )
      break;
    CHolographicClient::ProcessRemoveExclusiveModeProxy(this, *(struct IUnknown **)(v7 - 8));
  }
}
