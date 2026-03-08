/*
 * XREFs of ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1801035DC
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 CThreadContext::InitializeObjectCaches(void)
{
  int Current; // eax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  struct CThreadContext *v3; // rcx
  struct CThreadContext *v5; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v5);
  v2 = Current;
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v1, 0LL, 0, Current, 0x131u, 0LL);
  }
  else
  {
    v3 = v5;
    *((_DWORD *)v5 + 8) = 32;
    *((_DWORD *)v3 + 12) = 32;
    *((_DWORD *)v3 + 40) = 16;
    *((_DWORD *)v3 + 16) = 32;
    *((_DWORD *)v3 + 24) = 2;
    *((_DWORD *)v3 + 28) = 2;
    *((_DWORD *)v3 + 32) = 32;
    *((_DWORD *)v3 + 36) = 32;
    *((_DWORD *)v3 + 44) = 32;
    *((_DWORD *)v3 + 48) = 32;
    *((_DWORD *)v3 + 52) = 32;
    *((_DWORD *)v3 + 56) = 32;
    *((_DWORD *)v3 + 60) = 32;
    *((_DWORD *)v3 + 64) = 32;
    *((_DWORD *)v3 + 68) = 8;
    *((_DWORD *)v3 + 72) = 8;
    *((_DWORD *)v3 + 76) = 8;
    *((_DWORD *)v3 + 80) = 8;
    *((_DWORD *)v3 + 84) = 8;
    *((_DWORD *)v3 + 88) = 8;
    *((_DWORD *)v3 + 92) = 1;
    *((_DWORD *)v3 + 96) = 2;
  }
  return v2;
}
