/*
 * XREFs of zzzCloakShadow @ 0x1C023E210
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00BC1E8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  int v2; // edx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[2] = 0LL;
  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v4 = *((_QWORD *)result + 1);
    v5 = v2 != 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v8;
    v8[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    zzzSetWindowCompositionCloak(*((_QWORD *)v3 + 1), 0LL, v5);
    return (struct tagSHADOW *)ThreadUnlock1(v7);
  }
  return result;
}
