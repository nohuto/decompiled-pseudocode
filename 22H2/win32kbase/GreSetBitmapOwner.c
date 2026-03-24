/*
 * XREFs of GreSetBitmapOwner @ 0x1C002B3C0
 * Callers:
 *     GreSetBrushOwner @ 0x1C001DDE0 (GreSetBrushOwner.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C002F050 (HmgShareLockCheck.c)
 *     HmgSetOwner @ 0x1C00368E0 (HmgSetOwner.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F580 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = 0;
  SURFREF::SURFREF((SURFREF *)v9);
  LOBYTE(v5) = 5;
  v6 = HmgShareLockCheck(a1, v5);
  v10 = v6;
  if ( v6 && (*(_WORD *)(v6 + 100) || !*(_QWORD *)(v6 + 192) || a2) && (a1 & 0x800000) == 0 )
  {
    LOBYTE(v7) = 5;
    v4 = HmgSetOwner(a1, a2, v7);
  }
  SURFREF::~SURFREF((SURFREF *)v9);
  return v4;
}
