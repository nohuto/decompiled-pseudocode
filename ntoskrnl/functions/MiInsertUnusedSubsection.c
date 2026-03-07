__int64 __fastcall MiInsertUnusedSubsection(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // r9d

  v1 = 0;
  v2 = *(unsigned int *)(a1 + 44);
  v4 = 8 * v2;
  v5 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( (unsigned __int64)(8 * v2) > 0xFE0 )
  {
    if ( v4 >= 0x10000 || ((8 * (_WORD)v2) & 0xFFFu) > 0xFC0 )
    {
      v7 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v6 = v4 + 15;
  }
  else
  {
    v6 = v4 + 31;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 1408));
  *(_WORD *)(a1 + 34) |= 8u;
  *(_QWORD *)(v5 + 1760) += v7;
  _InterlockedExchangeAdd64(&qword_140C651D8, v7);
  v8 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 62LL) & 0xC) == 0 && (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = *(_DWORD *)(a1 + 44) - (v13 & *(_DWORD *)(a1 + 52));
  }
  v9 = (_QWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 104) )
  {
    v10 = *(_QWORD **)(v5 + 1792);
    if ( *v10 == v5 + 1784 )
    {
      *v9 = v5 + 1784;
      *(_QWORD *)(a1 + 88) = v10;
      *v10 = v9;
      *(_QWORD *)(v5 + 1792) = v9;
      goto LABEL_10;
    }
LABEL_21:
    __fastfail(3u);
  }
  v12 = *(_QWORD **)(v5 + 1808);
  if ( *v12 != v5 + 1800 )
    goto LABEL_21;
  *v9 = v5 + 1800;
  *(_QWORD *)(a1 + 88) = v12;
  *v12 = v9;
  *(_QWORD *)(v5 + 1808) = v9;
  *(_QWORD *)(v5 + 1488) += v2;
  if ( *(_QWORD *)(v5 + 1488) >= 0x20000uLL )
    v1 = 1;
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 1408));
  if ( v1 )
    KeSetEvent((PRKEVENT)(v5 + 1440), 0, 0);
  return v8;
}
