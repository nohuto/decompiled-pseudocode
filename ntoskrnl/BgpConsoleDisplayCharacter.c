/*
 * XREFs of BgpConsoleDisplayCharacter @ 0x140AEE4C0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterEx @ 0x14066F654 (BgpDisplayCharacterEx.c)
 *     AnFwFadeCompletion @ 0x140AE9FB8 (AnFwFadeCompletion.c)
 */

__int64 __fastcall BgpConsoleDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v16[3]; // [rsp+54h] [rbp-24h] BYREF

  v6 = a3;
  v7 = a2;
  BgpFwAcquireLock();
  v9 = qword_140CF7760;
  if ( qword_140CF7760 )
  {
    if ( (*(_DWORD *)(qword_140CF7760 + 8) & 0x10000) != 0 )
    {
      AnFwFadeCompletion();
      v9 = qword_140CF7760;
      *(_DWORD *)(qword_140CF7760 + 8) &= ~0x10000u;
    }
    v11 = v6 + 25 * v7;
    v12 = 3 * v11;
    if ( *(_WORD *)(v9 + 12 * v11 + 88) == a1
      && *(_DWORD *)(v9 + 12 * v11 + 80) == a4
      && *(_DWORD *)(v9 + 12 * v11 + 84) == a5 )
    {
      v10 = 0;
    }
    else
    {
      v10 = BgpDisplayCharacterEx(
              a1,
              *(__int64 **)(v9 + 40),
              *(_DWORD *)(v9 + 60) + *(_DWORD *)(v9 + 48) * (int)v7,
              *(_DWORD *)(v9 + 64) + *(_DWORD *)(v9 + 52) * (int)v6,
              a5,
              a4,
              v16,
              &v15,
              v14);
      if ( v10 >= 0 )
      {
        *(_WORD *)(v9 + 4 * v12 + 88) = a1;
        *(_DWORD *)(v9 + 4 * v12 + 80) = a4;
        *(_DWORD *)(v9 + 4 * v12 + 84) = a5;
      }
    }
  }
  else
  {
    v10 = -1073741823;
  }
  BgpFwReleaseLock();
  return (unsigned int)v10;
}
