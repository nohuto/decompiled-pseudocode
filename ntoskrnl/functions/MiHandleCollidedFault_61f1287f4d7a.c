__int64 __fastcall MiHandleCollidedFault(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebp
  __int64 v9; // rax
  _DWORD *v10; // rbx
  __int64 result; // rax
  int v12; // r9d
  unsigned int v13; // ebx
  char v14; // al
  unsigned __int64 v15; // rax
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v13 = -1073741663;
LABEL_22:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    *a6 = 0;
    return v13;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 1) != 0 )
  {
    v15 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v15 == 5 && (*(_DWORD *)(v15 + 56) & 4) != 0 )
    {
      v13 = -1073741801;
      goto LABEL_22;
    }
  }
  if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
  {
    v13 = -1073740748;
    goto LABEL_22;
  }
  v10 = a6;
  result = MiIssueFlowThroughFault(a1, a2, a3, (unsigned int)*(_QWORD *)a4 - 32, a4, a5, (__int64)a6);
  if ( *v10 == 1 )
    return result;
  if ( *(__int64 *)(a4 + 40) < 0 )
    MiObtainProtoReference(a3, 1LL);
  v16 = 0;
  LOBYTE(v12) = 2;
  v13 = MiWaitForCollidedFaultComplete(v8, a4, a3, v12, (__int64)&v16);
  if ( !v16 )
  {
    if ( a3 )
    {
      MiLockNestedPageAtDpcInline(a3);
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v13 )
    {
      MiAddLockedPageCharge(a4, 3LL);
      v14 = *(_BYTE *)(a4 + 34);
      *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(a4 + 34) = v14 & 0xF8 | 6;
      MiRemoveLockedPageChargeAndDecRef(a4);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
  }
  return v13;
}
