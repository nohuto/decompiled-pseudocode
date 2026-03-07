__int64 __fastcall MiDecrementCloneBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, _DWORD *a5)
{
  __int64 v9; // r13
  int v10; // r15d
  unsigned int v11; // r14d
  __int64 result; // rax
  int v13; // edx
  unsigned int v14; // esi
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  int v21; // [rsp+68h] [rbp+20h]
  int v22; // [rsp+70h] [rbp+28h]

  *a5 = 0;
  if ( a2 )
    v9 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a2 + 174));
  else
    v9 = a1;
  v10 = 0;
  v21 = 0;
  v11 = 0;
  MiLockCloneBlockAtDpc(a3);
  result = 2LL;
  if ( (a4 & 2) != 0 && *(_QWORD *)(a3 + 24) != 1LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  if ( v9 != a1 )
  {
    v20 = (*(_QWORD *)(a3 + 8))-- == 1LL;
    if ( v20 )
    {
      v11 = 2;
      *(_QWORD *)(a3 + 16) &= ~0x1000000000000000uLL;
    }
  }
  v13 = a4 & 1;
  v22 = v13;
  if ( (a4 & 1) != 0 )
  {
    v19 = *(_QWORD *)(a3 + 16) ^ (*(_QWORD *)(a3 + 16) ^ (*(_QWORD *)(a3 + 16) - 1LL)) & 0x7FFFFFFFFFFFFFLL;
    *(_QWORD *)(a3 + 16) = v19;
    if ( (v19 & 0x7FFFFFFFFFFFFFLL) == 0 )
      v11 |= 1u;
  }
  v20 = (*(_QWORD *)(a3 + 24))-- == 1LL;
  if ( !v20 )
  {
    if ( (a4 & 1) == 0
      && (*(_QWORD *)(a3 + 16) & 0x7FFFFFFFFFFFFFLL) == 0
      && v9 == a1
      && *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 24) )
    {
      v14 = 3;
      *(_QWORD *)(a3 + 16) |= 0x4000000000000000uLL;
    }
    else
    {
      v14 = 4;
    }
    goto LABEL_12;
  }
  if ( _bittest64((const signed __int64 *)(a3 + 16), 0x3Eu) )
  {
    v11 |= 1u;
    v21 = 1;
    *(_QWORD *)(a3 + 16) &= ~0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  *a5 = 1;
  if ( (a4 & 4) != 0 )
  {
    v15 = ZeroPte;
    v14 = 4;
    if ( !(unsigned int)MiPteInShadowRange(a3) )
      goto LABEL_20;
    if ( (unsigned int)MiPteHasShadow(v17, v16, v18) )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v20 = (ZeroPte & 1) == 0;
        goto LABEL_36;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v20 = (ZeroPte & 1) == 0;
LABEL_36:
      if ( !v20 )
        v15 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_20:
    *(_QWORD *)a3 = v15;
    if ( v10 )
      MiWritePteShadow(a3, v15);
    goto LABEL_22;
  }
  v14 = MiDeleteMergedPte(a1, a3);
LABEL_22:
  MiLockCloneBlockAtDpc(a3);
  v13 = v22;
  v10 = v21;
LABEL_12:
  if ( (v11 & 1) != 0 )
  {
    if ( *(_QWORD *)(a3 + 8) || (*(_QWORD *)(a3 + 16) & 0x7FFFFFFFFFFFFFLL) != 0 || v14 == 3 )
    {
      v11 &= ~1u;
    }
    else
    {
      if ( !v10 )
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 17848));
      *(_QWORD *)(a3 + 16) &= ~0x2000000000000000uLL;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
  {
    v14 = 5;
  }
  else if ( v14 == 3 && v9 != a1 )
  {
    v14 = 4;
  }
  MiReturnCrossPartitionCloneCharges(a1, v11, 4LL, 0x7FFFFFFFFFFFFFLL);
  return v14;
}
