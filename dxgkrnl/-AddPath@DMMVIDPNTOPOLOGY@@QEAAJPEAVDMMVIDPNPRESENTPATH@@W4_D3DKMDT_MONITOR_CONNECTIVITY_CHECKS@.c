__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rbp
  char v12; // r12
  __int64 v13; // r10
  char *v14; // r11
  DMMVIDPNTOPOLOGY *v15; // rbp
  char *v16; // rbp
  unsigned int v18; // esi
  __int64 v19; // rdx
  DMMVIDPNTOPOLOGY *v20; // rax

  v4 = (int)a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[5] = *((int *)a2 + 26);
  if ( !this[21] )
    WdLogSingleEntry0(1LL);
  v7[6] = this[21];
  v7[7] = v4;
  if ( *((_BYTE *)this + 76) <= 1u )
    WdLogSingleEntry0(1LL);
  if ( (*((_BYTE *)this + 78) & 2) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225506LL;
  }
  v8 = *((_QWORD *)a2 + 11);
  v9 = *((_QWORD *)a2 + 12);
  v10 = *(unsigned int *)(v8 + 24);
  v11 = *(unsigned int *)(v9 + 24);
  if ( DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, *(_DWORD *)(v8 + 24), *(_DWORD *)(v9 + 24)) )
  {
    WdLogSingleEntry2(3LL, a2, this);
    return 3223192339LL;
  }
  v12 = *(_BYTE *)(*(_QWORD *)(v9 + 96) + 406LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)this, v11) )
  {
    v18 = -1071774976;
    goto LABEL_24;
  }
  if ( *(char **)(v13 + 112) == v14 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      WdLogSingleEntry2(7LL, v10, v11);
LABEL_22:
      v14 = 0LL;
      goto LABEL_11;
    }
    if ( (_DWORD)v4 != 2 )
    {
      if ( (unsigned int)(v4 - 1) <= 1 )
        goto LABEL_11;
      WdLogSingleEntry0(1LL);
      goto LABEL_22;
    }
    v18 = -1071774920;
LABEL_24:
    WdLogSingleEntry3(7LL, a2, this, v11);
    return v18;
  }
LABEL_11:
  v15 = this[3];
  if ( v15 == (DMMVIDPNTOPOLOGY *)(this + 3) || (v16 = (char *)v15 - 8) == 0LL )
  {
LABEL_13:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
      WdLogSingleEntry0(1LL);
    if ( this )
    {
      if ( *((_QWORD *)a2 + 6) )
        WdLogSingleEntry0(1LL);
      *((_QWORD *)a2 + 6) = this;
    }
    else
    {
      WdLogSingleEntry2(2LL, (char *)a2 + 40, *((_QWORD *)a2 + 6));
    }
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((ProtectableFromChange *)(this + 7), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v16 + 11) + 24LL) != *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL) )
      goto LABEL_33;
    if ( v12 )
      break;
    v19 = *((_QWORD *)v16 + 12);
    if ( *(_BYTE *)(*(_QWORD *)(v19 + 96) + 406LL) != (_BYTE)v14 )
      goto LABEL_40;
LABEL_33:
    if ( *((_DWORD *)v16 + 26) == *((_DWORD *)a2 + 26) )
    {
      WdLogSingleEntry4(3LL, a2, *((int *)a2 + 26), v9, this);
      v14 = 0LL;
    }
    v20 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v16 + 1);
    v16 = (char *)v20 - 8;
    if ( v20 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v16 = v14;
    if ( !v16 )
      goto LABEL_13;
  }
  v19 = v9;
LABEL_40:
  WdLogSingleEntry2(3LL, v19, -1071774975LL);
  return 3223192321LL;
}
