__int16 __fastcall KiForwardTick(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5)
{
  __int64 v6; // rdi
  unsigned int v8; // r14d
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // r11
  unsigned int v12; // r9d
  unsigned __int16 v13; // cx
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // r15
  unsigned __int16 v20; // di
  unsigned int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // edx
  int *v25; // rdi
  _WORD *v26; // r15
  int IsEmptyAffinity; // eax
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rdi
  int v33; // edx
  int v34; // edi
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v41[67]; // [rsp+64h] [rbp-9Ch] BYREF

  v6 = a1;
  memset(&v41[1], 0, 0x100uLL);
  v8 = 1;
  if ( PoSkipTickMode == 2 )
    goto LABEL_43;
  v40 = 2097153;
  memset(v41, 0, 0x104uLL);
  memset(&v41[1], 0, 8uLL);
  LOWORD(v9) = 1;
  v10 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v11 = KeNodeBlock[v10];
      v12 = *(_DWORD *)(v11 + 16);
LABEL_4:
      LOWORD(v9) = v40;
      while ( v12 )
      {
        _BitScanForward((unsigned int *)&v29, v12);
        v12 &= ~(1 << v29);
        v30 = *(_QWORD *)(v11 + 8 * v29 + 24);
        v31 = *(unsigned __int16 *)(v30 + 136);
        v32 = *(_QWORD *)(v30 + 64);
        if ( (unsigned __int16)v40 > (unsigned __int16)v31 )
          goto LABEL_41;
        if ( HIWORD(v40) > (unsigned __int16)v31 )
        {
          LOWORD(v40) = v31 + 1;
LABEL_41:
          *(_QWORD *)&v41[2 * v31 + 1] |= v32;
          goto LABEL_4;
        }
      }
      ++v10;
    }
    while ( v10 < (unsigned __int16)KeNumberNodes );
    v6 = a1;
  }
  v13 = 0;
  if ( !(_WORD)v9 )
    goto LABEL_43;
  while ( !*(_QWORD *)&v41[2 * v13 + 1] )
  {
    if ( ++v13 >= (unsigned __int16)v9 )
      goto LABEL_43;
  }
  v14 = *(unsigned __int16 *)(a5 + 2);
  if ( (unsigned __int16)v9 > (unsigned __int16)v14 )
    LOWORD(v9) = *(_WORD *)(a5 + 2);
  v15 = 0;
  if ( (_WORD)v9 )
  {
    v15 = (unsigned __int16)v9;
    v16 = (__int64 *)&v41[1];
    v9 = (unsigned __int16)v9;
    do
    {
      v17 = *v16++;
      *(__int64 *)((char *)v16 + a5 - (_QWORD)&v41[1]) = ~v17;
      --v9;
    }
    while ( v9 );
  }
  *(_DWORD *)(a5 + 4) = 0;
  *(_WORD *)a5 = v14;
  for ( *(_WORD *)(a5 + 2) = v14; v15 < v14; v14 = *(unsigned __int16 *)(a5 + 2) )
  {
    v18 = v15++;
    *(_QWORD *)(a5 + 8 * v18 + 8) = -1LL;
  }
  KiAndAffinityEx((unsigned __int16 *)a5, (unsigned __int16 *)KeActiveProcessors, (_BYTE *)a5, v14);
  if ( a4 )
    KiOrAffinityEx((char *)a5, KiGroupSchedulingOverQuotaMask, (_BYTE *)a5, *(_WORD *)(a5 + 2));
  if ( !KiSerializeTimerExpiration )
  {
    v19 = KiLastForwardedHand;
    v40 = 2097153;
    v20 = 0;
    memset(v41, 0, 0x104uLL);
    while ( 1 )
    {
      LOBYTE(v21) = v19 - 1;
      v22 = qword_140D20278[2 * v20];
      do
      {
        v21 = (unsigned __int8)(v21 + 1);
        v23 = *(_QWORD *)(((unsigned __int64)v21 << 6) + v22);
        if ( (unsigned __int16)v40 > v20 )
          goto LABEL_23;
        if ( HIWORD(v40) > v20 )
        {
          LOWORD(v40) = v20 + 1;
LABEL_23:
          *(_QWORD *)&v41[2 * v20 + 1] |= v23;
        }
      }
      while ( v21 != (unsigned __int8)a3 );
      if ( ++v20 >= (unsigned __int16)KiActiveGroups )
      {
        KiOrAffinityEx((char *)a5, &v40, (_BYTE *)a5, *(_WORD *)(a5 + 2));
        v6 = a1;
        break;
      }
    }
  }
  if ( (unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)a5, (unsigned __int16 *)KeActiveProcessors) )
    goto LABEL_43;
  v24 = *(_DWORD *)(v6 + 36);
  v25 = (int *)(v6 + 36);
  KeRemoveProcessorAffinityEx((unsigned __int16 *)a5, v24);
  if ( PoSkipTickMode && (unsigned int)KeCountSetBitsAffinityEx((unsigned __int16 *)a5) > 3 )
  {
    v6 = a1;
LABEL_43:
    v26 = 0LL;
    LOWORD(IsEmptyAffinity) = KiCopyAffinityEx(a5, *(_WORD *)(a5 + 2), (unsigned __int16 *)KeActiveProcessors);
    v25 = (int *)(v6 + 36);
    goto LABEL_30;
  }
  v8 = 0;
  v26 = (_WORD *)a5;
  IsEmptyAffinity = KeIsEmptyAffinityEx((_WORD *)a5);
  if ( IsEmptyAffinity )
    goto LABEL_38;
LABEL_30:
  if ( KiClockTimerPerCpuTickScheduling )
    goto LABEL_38;
  v39 = 0;
  v38 = 0LL;
  if ( !v8 )
  {
    if ( v26 && !(unsigned int)KeIsEmptyAffinityEx(v26) )
      goto LABEL_34;
LABEL_54:
    v28 = -1073741811;
    goto LABEL_55;
  }
  if ( v8 - 1 >= 2 )
    goto LABEL_54;
LABEL_34:
  if ( v8 )
  {
    LODWORD(v38) = 4;
  }
  else
  {
    LODWORD(v38) = 2;
    *((_QWORD *)&v38 + 1) = v26;
  }
  IsEmptyAffinity = HalpInterruptSendIpi(&v38, 0xD2u);
  v28 = IsEmptyAffinity;
  if ( IsEmptyAffinity < 0 )
LABEL_55:
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v28, v8);
  KiLastForwardedHand = a3;
LABEL_38:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v33 = KiPollSlotNext;
    KiPollSlot = KiPollSlotNext;
    IsEmptyAffinity = KiPollSlotNext + 1;
    KiPollSlotNext = IsEmptyAffinity;
    if ( IsEmptyAffinity >= a2 )
      KiPollSlotNext = 0;
    v34 = *v25;
    if ( v33 != v34 )
    {
      IsEmptyAffinity = KeCheckProcessorAffinityEx((unsigned __int16 *)a5, v33);
      if ( !IsEmptyAffinity )
        KiPollSlot = v34;
    }
  }
  return IsEmptyAffinity;
}
