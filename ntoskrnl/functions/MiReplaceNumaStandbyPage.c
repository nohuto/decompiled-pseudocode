signed __int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rdi
  __int64 PfnChannel; // r12
  unsigned __int64 v8; // rsi
  int v9; // ebx
  int v10; // eax
  unsigned int PfnPriority; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  signed __int64 result; // rax

  v6 = *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  PfnChannel = (unsigned int)MiGetPfnChannel(a1);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v9 = *((_DWORD *)MiSearchNumaNodeTable(v8) + 2);
  v10 = MiGetPfnChannel(a2);
  if ( (_DWORD)v6 == v9 && (_DWORD)PfnChannel == v10 )
  {
    PfnPriority = MiGetPfnPriority(a1);
    v13 = 25408 * v6
        + *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((v12 >> 43) & 0x3FF)) + 16LL)
        + 88 * (PfnPriority + 8 * PfnChannel + 37);
    MiSetNextStandbyPageSameNodeNoLockAsserts(
      a2,
      (8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | ((v12 & 0xF80000000000000LL | (*(_QWORD *)a1 >> 20)) >> 20));
    if ( v14 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v13 + 24) = v8;
    }
    else
    {
      v15 = 48 * v14 - 0x220000000000LL;
      MiSetPfnNodeBlinkLow(v15, v8);
      *(_DWORD *)(v15 + 36) ^= (*(_DWORD *)(v15 + 36) ^ (v8 >> 19)) & 0x1FFFFF;
    }
    v16 = (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL;
    v17 = v16 | ((*(_DWORD *)(a1 + 36) & 0x1FFFFFLL) << 19);
    MiSetPfnNodeBlinkLow(a2, v16 | (*(_DWORD *)(a1 + 36) << 19));
    result = *(_DWORD *)(a2 + 36) & 0xFFE00000;
    *(_DWORD *)(a2 + 36) = result | (v17 >> 19);
    if ( v17 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(v13 + 16) = v8;
    else
      return MiSetNextStandbyPageSameNodeNoLockAsserts(48 * v17 - 0x220000000000LL, v8);
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1);
    return MiInsertNumaStandbyPage(a2, a3 & -(__int64)(*(_BYTE *)a3 != 0));
  }
  return result;
}
