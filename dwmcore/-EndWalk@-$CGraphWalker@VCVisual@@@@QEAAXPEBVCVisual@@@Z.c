void __fastcall CGraphWalker<CVisual>::EndWalk(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // ecx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 == 10 )
  {
    v5 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v5 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v5) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v5) <= *(_DWORD *)(a1 + 36) )
    {
      v8 = 0LL;
      v6 = HrMalloc(0x10uLL, (unsigned int)v5, &v8);
      if ( v6 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v8;
        *(_DWORD *)(a1 + 36) = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x116u, 0LL);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v2 = v4 + 1;
  }
  *(_DWORD *)(a1 + 40) = v2;
}
