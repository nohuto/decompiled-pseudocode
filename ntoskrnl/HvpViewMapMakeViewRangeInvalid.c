/*
 * XREFs of HvpViewMapMakeViewRangeInvalid @ 0x140880D20
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140A1A654 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x1402B3864 (CmSiUnlockViewOfSection.c)
 *     CmSiProtectViewOfSection @ 0x14030D290 (CmSiProtectViewOfSection.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeInvalid(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 i; // r14
  __int64 j; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // r15
  __int64 *v13; // rbx
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0;
  v7 = a1;
  for ( i = a3; i < a4; i += 4096LL )
  {
    if ( !a2[8] )
      break;
    a1 = a2[3];
    v12 = (unsigned __int64)(i - a1) >> 12;
    if ( (*((_BYTE *)a2 + v12 + 72) & 0x10) != 0 )
    {
      v13 = *(__int64 **)(v7 + 24);
      CmSiUnlockViewOfSection(a1, v13, i + a2[7] - a1, 4096LL);
      CmSiReleaseProcessLockedPagesCharge(v13, 4096LL);
      *((_BYTE *)a2 + v12 + 72) &= ~0x10u;
      --a2[8];
    }
  }
  CmSiProtectViewOfSection(a1, *(__int64 **)(v7 + 24), a3 + a2[7] - a2[3], a4 - a3, 0x80000001, (__int64)&v14);
  for ( j = a3; j < a4; *((_BYTE *)a2 + ((unsigned __int64)(v10 - a2[3]) >> 12) + 72) = 0 )
  {
    v10 = j;
    j += 4096LL;
  }
  result = a2[6];
  if ( a2[5] == a3 )
  {
    if ( result == a4 )
    {
      a2[5] = 0LL;
      a2[6] = 0LL;
    }
    else
    {
      a2[5] = a4;
    }
  }
  else if ( result == a4 )
  {
    a2[6] = a3;
  }
  return result;
}
