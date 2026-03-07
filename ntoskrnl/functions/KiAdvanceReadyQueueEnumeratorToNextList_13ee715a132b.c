__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextList(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // edx
  bool v6; // zf
  __int64 result; // rax
  unsigned int v8; // edx
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // ecx
  int v15; // eax

  v2 = *(unsigned __int8 *)(a1 + 13);
  if ( !v2 )
    goto LABEL_6;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_13;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return 2147483674LL;
LABEL_13:
    v10 = *(unsigned __int8 *)(a1 + 11) & ~(1 << *(_BYTE *)(a1 + 12));
    *(_BYTE *)(a1 + 11) = v10;
    if ( !(_BYTE)v10 && (int)KiAdvanceReadyQueueEnumeratorToNextProcessor(a1) < 0 )
      goto LABEL_6;
    v11 = *(unsigned __int8 *)(a1 + 8);
    v12 = *(_QWORD *)(a1 + 48 * (*(unsigned __int8 *)(a1 + 10) + 1LL));
    v13 = *(_QWORD *)(a1 + 48 * (*(unsigned __int8 *)(a1 + 10) + 1LL) + 8);
    v14 = *(unsigned __int8 *)(a1 + 11);
    if ( ((v14 - 1) & v14) != 0 )
      LOBYTE(v15) = !_bittest((const signed __int32 *)(v12 + 32476), v11);
    else
      _BitScanForward((unsigned int *)&v15, v14);
    *(_BYTE *)(a1 + 12) = v15;
    if ( (_BYTE)v15 )
    {
      if ( (unsigned __int8)v15 != 1 )
        goto LABEL_6;
      v9 = v13 + 16 * (v11 + 1);
    }
    else
    {
      v9 = v12 + 16 * (v11 + 2036);
    }
    goto LABEL_9;
  }
  v5 = ~(1 << *(_BYTE *)(a1 + 8));
  v6 = (v5 & *(_DWORD *)(a1 + 4)) == 0;
  *(_DWORD *)(a1 + 4) &= v5;
  if ( v6 && (int)KiAdvanceReadyQueueEnumeratorToNextScb(a1) < 0 )
    goto LABEL_6;
  _BitScanReverse(&v8, *(_DWORD *)(a1 + 4));
  v9 = 16LL * (unsigned __int8)v8 + *(_QWORD *)(a1 + 16) + 136LL;
  *(_BYTE *)(a1 + 8) = v8;
LABEL_9:
  if ( v9 )
  {
    *(_QWORD *)(a1 + 32) = v9;
    *(_QWORD *)(a1 + 40) = v9;
    return 0LL;
  }
LABEL_6:
  result = KiAdvanceReadyQueueEnumeratorToNextPhase(a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
