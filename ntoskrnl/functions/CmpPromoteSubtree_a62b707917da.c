__int64 __fastcall CmpPromoteSubtree(__int64 a1, __int16 *a2)
{
  __int16 v4; // r14
  int v5; // eax
  int v6; // ebx
  __int16 *v7; // rdi
  __int16 *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r15
  int v11; // eax
  __int16 *v13; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v15[14]; // [rsp+30h] [rbp-49h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  memset((char *)v15 + 2, 0, 0x66uLL);
  LOWORD(v15[0]) = -2;
  CmpInitializeKeyNodeStack((char *)&v15[2]);
  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    v5 = CmpSubtreeEnumeratorStartForKcbStack((__int64)v15, a1);
  }
  else
  {
    v4 = *a2;
    v5 = CmpSubtreeEnumeratorStartForKeyNodeStack((__int64)v15, a2);
  }
  v6 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v6 = CmpSubtreeEnumeratorAdvance((__int64)v15);
      if ( v6 == -2147483622 )
        break;
      if ( v6 < 0 )
        goto LABEL_18;
      CmpSubtreeEnumeratorGetCurrentKeyStacks((__int16 *)v15, &v14, &v13);
      v7 = v13;
      v8 = *(__int16 **)(408LL * SLOWORD(v15[0]) + v15[12] - 392);
      v10 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v13, v4) + 16);
      if ( v14 )
      {
        v11 = CmpPromoteSingleKeyFromKcbStacks(v9, v14, 1);
      }
      else if ( v9 )
      {
        v11 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(v9, v7, 1);
      }
      else
      {
        v6 = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v8, (__int64)v7);
        if ( v6 < 0 )
          goto LABEL_18;
        v11 = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v8, v7);
      }
      v6 = v11;
      if ( v11 < 0 )
        goto LABEL_18;
      if ( !v10 )
        CmpKeyEnumStackNotifyPromotion((__int16 *)(v15[12] + 56LL + 408LL * (SLOWORD(v15[0]) - 1)));
    }
    v6 = 0;
  }
LABEL_18:
  CmpSubtreeEnumeratorCleanup((__int64)v15);
  return (unsigned int)v6;
}
