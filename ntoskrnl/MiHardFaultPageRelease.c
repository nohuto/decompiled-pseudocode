__int64 __fastcall MiHardFaultPageRelease(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rcx

  v3 = *a1;
  v5 = a2;
  v6 = *(_QWORD *)(*a1 + 248);
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    return MiRemoveLockedPageChargeAndDecRef(v5);
  v7 = *(_BYTE *)(a2 + 35);
  LOBYTE(a2) = 16;
  if ( (v7 & 0x10) != 0 )
  {
    if ( v5 == v6 && *(int *)(v3 + 80) >= 0 )
      *(_DWORD *)(v3 + 80) = -1073741761;
    goto LABEL_20;
  }
  if ( *(int *)(v3 + 80) < 0 )
  {
LABEL_19:
    *(_BYTE *)(v5 + 35) = v7 | 0x10;
LABEL_20:
    if ( ((*(_DWORD *)(v3 + 192) & 0x10) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(v5 + 16) & 0x400LL) == 0
      && !(unsigned int)MiIsPfnCommitNotCharged(v5) )
    {
      MiChargeCommit(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)), 1LL, 4LL);
    }
    MiHandleInPageError(v5);
    return MiRemoveLockedPageChargeAndDecRef(v5);
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( v5 == v6 )
      *((_DWORD *)a1 + 2) = -1073740748;
    v7 = *(_BYTE *)(v5 + 35);
    goto LABEL_19;
  }
  if ( v5 != v6 )
    goto LABEL_12;
  v8 = *(_QWORD *)(v3 + 104);
  if ( v8 )
  {
    MiSwapHardFaultPage(*(_QWORD *)(v3 + 232), v5, *(_QWORD *)(v3 + 104));
    *(_QWORD *)(v3 + 104) = 0LL;
    v6 = v8;
    v5 = v8;
    *(_QWORD *)(v3 + 248) = v8;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( v5 == v6 && *((int *)a1 + 2) >= 0 )
    return MiMakeFaultPfnActive(a1, v5);
LABEL_12:
  result = MiRemoveLockedPageCharge(v5, a2, a3);
  if ( (_DWORD)result )
  {
    v10 = a1[7];
    if ( v10 )
      return MiInsertProtectedStandbyPage(v10, v5);
    else
      return MiPfnReferenceCountIsZero(v5, 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4));
  }
  return result;
}
