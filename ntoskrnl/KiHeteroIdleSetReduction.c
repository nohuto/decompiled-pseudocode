/*
 * XREFs of KiHeteroIdleSetReduction @ 0x14045974C
 * Callers:
 *     KiHeteroSelectIdleProcessor @ 0x140459852 (KiHeteroSelectIdleProcessor.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x1402ED844 (KiIsQosGroupingActive.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x140574EC0 (KiHeteroReduceToMaximallyPreferredByClass.c)
 */

__int64 __fastcall KiHeteroIdleSetReduction(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rax
  char v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax

  v5 = a4;
  v7 = a1;
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    if ( KiIsQosGroupingActive() && (v10 = a3 & v8) != 0 && ((*(_DWORD *)(a4 + 4) - 1) & 0xFFFFFFFA) == 0 )
    {
      a3 = v10 & ~v9;
      if ( !a3 )
        a3 = v10;
    }
    else
    {
      v11 = a3 & v9;
      if ( v11 )
        a3 = v11;
    }
  }
  v12 = a3 & *(_QWORD *)(v7 + 32);
  if ( !v12 )
    v12 = a3;
  v13 = 0;
  v14 = *a5 & v12;
  if ( !v14 )
  {
    v14 = v12;
    if ( (v12 & a5[1]) != 0 )
    {
      v13 = 1;
      v14 = v12 & a5[1];
    }
  }
  if ( KeHeteroSystemQos )
  {
    v15 = *(int *)(a4 + 4);
    if ( (*(_QWORD *)(v7 + 8 * v15 + 200) & v14) != 0 )
      v14 &= *(_QWORD *)(v7 + 8 * v15 + 200);
  }
  if ( v13 )
  {
    LOBYTE(a4) = *(_BYTE *)(a4 + 16);
    v14 = KiHeteroReduceToMaximallyPreferredByClass(
            *(unsigned __int16 *)(v7 + 136),
            v14,
            *(unsigned int *)(v5 + 12),
            a4);
  }
  result = a2[25] & v14;
  if ( !result )
  {
    result = a2[4364] & v14;
    if ( !result )
    {
      result = a2[4367] & v14;
      if ( !result )
      {
        result = v14;
        if ( (a2[4366] & v14) != 0 )
          return a2[4366] & v14;
      }
    }
  }
  return result;
}
