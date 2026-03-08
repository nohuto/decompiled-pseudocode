/*
 * XREFs of HvpViewMapMakeViewRangeCOWByCaller @ 0x1407326F8
 * Callers:
 *     HvpViewMapCOWAndUnsealRange @ 0x140732640 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapMigrateCOWData @ 0x1408807B4 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x1402B3864 (CmSiUnlockViewOfSection.c)
 *     CmSiProtectViewOfSection @ 0x14030D290 (CmSiProtectViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140732810 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeCOWByCaller(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // r8
  __int64 *v17; // rbx
  __int64 v18; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  v4 = a3;
  v9 = CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), a2[7] + a3 - a2[3], a4 - a3, 8u, (__int64)&v19);
  if ( v9 >= 0 )
  {
    v11 = v4;
    if ( v4 >= a4 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v12 = a2[3];
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v11 - v12) >> 12) + 72) & 2) == 0 )
        {
          LOBYTE(v10) = 1;
          v9 = HvpViewMapTouchPages(v11 + a2[7] - v12, 4096LL, v10);
          if ( v9 < 0 )
            break;
        }
        v11 += 4096LL;
        if ( v11 >= a4 )
        {
          while ( v4 < a4 )
          {
            v13 = a2[3];
            v14 = (unsigned __int64)(v4 - v13) >> 12;
            v15 = v4 + a2[7] - v13;
            LOBYTE(v13) = *((_BYTE *)a2 + v14 + 72) | 0xA;
            *((_BYTE *)a2 + v14 + 72) = v13;
            if ( (v13 & 0x10) != 0 )
            {
              v17 = *(__int64 **)(a1 + 24);
              CmSiUnlockViewOfSection(v8, v17, v15, 4096LL);
              CmSiReleaseProcessLockedPagesCharge(v17, 4096LL);
              *((_BYTE *)a2 + v14 + 72) &= ~0x10u;
              --a2[8];
              *((_BYTE *)a2 + v14 + 72) |= 4u;
            }
            v4 += 4096LL;
          }
          return 0;
        }
      }
      do
      {
        v18 = a2[3];
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v4 - v18) >> 12) + 72) & 6) == 0 )
          CmSiProtectViewOfSection(v18, *(__int64 **)(a1 + 24), v4 + a2[7] - v18, 4096LL, 0x80000002, (__int64)&v19);
        v4 += 4096LL;
      }
      while ( v4 < a4 );
    }
  }
  return (unsigned int)v9;
}
