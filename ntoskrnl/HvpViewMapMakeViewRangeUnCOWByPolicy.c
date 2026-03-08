/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140823068
 * Callers:
 *     HvpViewMapAdjustFlag @ 0x140822FBC (HvpViewMapAdjustFlag.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x1402B3864 (CmSiUnlockViewOfSection.c)
 *     CmSiProtectViewOfSection @ 0x14030D290 (CmSiProtectViewOfSection.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByPolicy(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  __int64 *v11; // rbx
  char v12; // al
  char v13; // al
  int v14; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    v14 = 0;
    v5 = a3;
    do
    {
      v8 = a2[3];
      v9 = (unsigned __int64)(v5 - v8) >> 12;
      v10 = a2[7] + v5 - v8;
      if ( (*((_BYTE *)a2 + v9 + 72) & 0x10) != 0 )
      {
        v11 = *(__int64 **)(a1 + 24);
        CmSiUnlockViewOfSection(a1, v11, a2[7] + v5 - v8, 4096LL);
        CmSiReleaseProcessLockedPagesCharge(v11, 4096LL);
        *((_BYTE *)a2 + v9 + 72) &= ~0x10u;
        --a2[8];
      }
      v12 = *((_BYTE *)a2 + v9 + 72);
      if ( (v12 & 4) != 0 )
      {
        v13 = v12 & 0xFB;
        *((_BYTE *)a2 + v9 + 72) = v13;
        if ( (v13 & 2) == 0 )
          CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), v10, 4096LL, 0x80000002, (__int64)&v14);
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
