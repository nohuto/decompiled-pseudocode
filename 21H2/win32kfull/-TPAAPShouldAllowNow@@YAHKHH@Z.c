/*
 * XREFs of ?TPAAPShouldAllowNow@@YAHKHH@Z @ 0x1C0213600
 * Callers:
 *     EditionLegacyTouchPadMouseAllowTap @ 0x1C0213B50 (EditionLegacyTouchPadMouseAllowTap.c)
 * Callees:
 *     ?TPAAPSqmBlockedCount@@YAXH@Z @ 0x1C021373C (-TPAAPSqmBlockedCount@@YAXH@Z.c)
 */

__int64 __fastcall TPAAPShouldAllowNow()
{
  unsigned int v0; // ebx
  int v1; // ebp
  int v2; // edi
  LARGE_INTEGER v3; // rax
  __int64 v4; // r9
  signed __int64 v5; // r10
  LARGE_INTEGER v6; // r11
  __int64 v7; // rcx
  unsigned int v8; // esi
  signed __int64 v9; // rax
  union _LARGE_INTEGER v10; // rcx
  __int64 v11; // r8
  union _LARGE_INTEGER v13; // [rsp+68h] [rbp+20h] BYREF

  v0 = 0;
  v13.QuadPart = 0LL;
  v1 = 0;
  v2 = 4;
  v3 = KeQueryPerformanceCounter(&v13);
  v4 = 0LL;
  v5 = 0LL;
  v6 = v3;
  v7 = gTouchPadParameters[2];
  if ( (_DWORD)v7 )
  {
    v1 = 1;
    v8 = *((_DWORD *)&gAapState + v7);
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&gAapState + 12, 0LL, 0LL);
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&gAapState + 13, 0LL, 0LL);
    v10 = v13;
    v5 = v9;
    if ( v4 > 0 )
    {
      if ( v9 <= v4 )
      {
        v11 = 1000 * (v6.QuadPart - v4) / v13.QuadPart;
        v8 = *((_DWORD *)&gAapState + 10);
      }
      else
      {
        v11 = 1000 * (v6.QuadPart - v9) / v13.QuadPart;
      }
      if ( v11 < v8 )
        v0 = 1;
    }
  }
  else
  {
    v10 = v13;
    v2 = 0;
  }
  EtwTraceTouchPadAAP(
    1000 * v4 / v10.QuadPart,
    (unsigned int)(1000 * v5 / v10.QuadPart),
    1000 * v6.QuadPart / v10.QuadPart,
    v0,
    v2);
  if ( v1 )
    TPAAPSqmBlockedCount(v0);
  return v0 ^ 1;
}
