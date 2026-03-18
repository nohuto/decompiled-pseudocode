/*
 * XREFs of W32kCddClipRegion @ 0x1C0270240
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011BD38 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C026E468 (--0EngModeState@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddClipRegion(HRGN a1, HRGN a2, __int64 a3)
{
  struct RGNOBJ *v6; // rbx
  unsigned int v7; // ebx
  _QWORD v9[7]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v10[7]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+B8h] [rbp+77h] BYREF

  EngModeState::EngModeState((EngModeState *)&v11);
  v6 = (struct RGNOBJ *)((a3 + 56) & -(__int64)(a3 != 0));
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a1, 0, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a2, 1, 0);
  if ( v10[0] && v9[0] )
  {
    v7 = RGNOBJAPI::iCombine((RGNOBJAPI *)v10, (struct RGNOBJ *)v9, v6, 1);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
    if ( v11 )
      *(_DWORD *)(v11 + 328) &= ~0x10u;
    return v7;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
    if ( v11 )
      *(_DWORD *)(v11 + 328) &= ~0x10u;
    return 0LL;
  }
}
