/*
 * XREFs of ?TPAAPShouldAllowNow@@YAHKH@Z @ 0x1C01F7794
 * Callers:
 *     EditionLegacyTouchPadMouseAllowTap @ 0x1C01F7BA0 (EditionLegacyTouchPadMouseAllowTap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TPAAPShouldAllowNow()
{
  unsigned int v0; // ebx
  int v1; // edi
  __int64 v2; // rsi
  signed __int64 v3; // rbp
  LARGE_INTEGER v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // r10d
  signed __int64 v11; // rax
  LONGLONG v12; // rax
  union _LARGE_INTEGER v13; // rcx
  union _LARGE_INTEGER v15; // [rsp+60h] [rbp+18h] BYREF

  v0 = 0;
  v15.QuadPart = 0LL;
  v1 = 4;
  v2 = 0LL;
  v3 = 0LL;
  v4 = KeQueryPerformanceCounter(&v15);
  v7 = *(int *)(SGDGetUserSessionState(v5) + 16808);
  if ( !(_DWORD)v7 )
  {
    v1 = 0;
    goto LABEL_9;
  }
  v8 = SGDGetUserSessionState(v6);
  v9 = v8 + 16376;
  v10 = *(_DWORD *)(v8 + 16376 + 4 * v7);
  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16472), 0LL, 0LL);
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16480), 0LL, 0LL);
  v3 = v11;
  if ( v2 <= 0 )
  {
LABEL_9:
    v13 = v15;
    goto LABEL_10;
  }
  if ( v11 <= v2 )
  {
    v10 = *(_DWORD *)(v9 + 40);
    v12 = 1000 * (v4.QuadPart - v2);
  }
  else
  {
    v12 = 1000 * (v4.QuadPart - v11);
  }
  v13 = v15;
  if ( v12 / v15.QuadPart < v10 )
    v0 = 1;
LABEL_10:
  EtwTraceTouchPadAAP(
    1000 * v2 / v13.QuadPart,
    (unsigned int)(1000 * v3 / v13.QuadPart),
    1000 * v4.QuadPart / v13.QuadPart,
    v0,
    v1);
  return v0 ^ 1;
}
