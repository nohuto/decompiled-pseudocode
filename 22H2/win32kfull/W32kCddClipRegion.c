/*
 * XREFs of W32kCddClipRegion @ 0x1C0277BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B2D1C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C016A948 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C016A984 (--1EngModeState@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddClipRegion(HRGN a1, HRGN a2, __int64 a3)
{
  struct RGNOBJ *v6; // rbp
  unsigned int v7; // ebx
  _QWORD v9[7]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v10[7]; // [rsp+58h] [rbp-40h] BYREF
  char v11; // [rsp+B0h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v11);
  v6 = (struct RGNOBJ *)((a3 + 56) & -(__int64)(a3 != 0));
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a1, 0, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a2, 1, 0);
  v7 = 0;
  if ( v10[0] && v9[0] )
    v7 = RGNOBJAPI::iCombine((RGNOBJAPI *)v10, (struct RGNOBJ *)v9, v6, 1);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
  EngModeState::~EngModeState((EngModeState *)&v11);
  return v7;
}
