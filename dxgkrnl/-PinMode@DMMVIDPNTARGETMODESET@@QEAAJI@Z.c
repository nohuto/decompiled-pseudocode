__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char *v6; // rdx
  char *v7; // rbx
  char *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rdx
  char *v15; // r8
  bool v16; // zf
  int v17; // r8d
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  char v23; // al
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // [rsp+60h] [rbp+8h]

  v4 = a2;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry2(7LL, a2, this);
    return 3223192352LL;
  }
  v6 = (char *)this + 48;
  v7 = 0LL;
  v8 = (char *)*((_QWORD *)this + 6);
  if ( v8 != v6 )
    v7 = v8 - 8;
  while ( 1 )
  {
    if ( !v7 )
    {
      WdLogSingleEntry2(2LL, v4, this);
      return 3223192394LL;
    }
    if ( *((_DWORD *)v7 + 6) == (_DWORD)v4 )
      break;
    v8 = (char *)*((_QWORD *)v7 + 1);
    v7 = v8 - 8;
    if ( v8 == (char *)this + 48 )
      v7 = 0LL;
  }
  v9 = *((_QWORD *)this + 14);
  v10 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v7;
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192329LL;
  }
  if ( !*(_QWORD *)(v9 + 40) )
    WdLogSingleEntry0(1LL);
  v11 = *(_QWORD *)(v9 + 40);
  if ( !*(_QWORD *)(v11 + 72) )
    WdLogSingleEntry0(1LL);
  v12 = *(unsigned int *)(v9 + 24);
  v13 = *(_QWORD *)(v11 + 72) + 96LL;
  v14 = (_QWORD *)(v13 + 24);
  v15 = *(char **)(v13 + 24);
  if ( v15 == (char *)(v13 + 24) )
    goto LABEL_47;
  v16 = v15 == (char *)8;
  v15 -= 8;
  v8 = v15;
  if ( v16 )
  {
LABEL_33:
    if ( v15 )
    {
      v21 = WdLogNewEntry5_WdTrace(v8, v14, v15, a4);
      *(_QWORD *)(v21 + 24) = v12;
      *(_QWORD *)(v21 + 32) = v13;
LABEL_48:
      WdLogSingleEntry2(2LL, v4, this);
      return 3223192384LL;
    }
LABEL_47:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v14, v15, a4) + 24) = v13;
    goto LABEL_48;
  }
  while ( *(_DWORD *)(*((_QWORD *)v8 + 12) + 24LL) != (_DWORD)v12 )
  {
    v20 = (_QWORD *)*((_QWORD *)v8 + 1);
    v8 = (char *)(v20 - 1);
    if ( v20 == v14 )
      v8 = 0LL;
    if ( !v8 )
      goto LABEL_33;
  }
  v17 = *(_DWORD *)(*((_QWORD *)v8 + 11) + 24LL);
  if ( v17 == -1 )
    goto LABEL_48;
  if ( (_QWORD *)*v14 == v14 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = *v14 - 8LL;
    if ( *v14 != 8LL )
    {
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v18 + 88) + 24LL) == v17
          && *(_DWORD *)(*(_QWORD *)(v18 + 96) + 24LL) == *(_DWORD *)(v9 + 24) )
        {
          break;
        }
        v22 = *(_QWORD **)(v18 + 8);
        v18 = (__int64)(v22 - 1);
        if ( v22 == v14 )
          v18 = 0LL;
      }
      while ( v18 );
    }
    if ( v18 )
      goto LABEL_24;
  }
  WdLogSingleEntry0(1LL);
LABEL_24:
  if ( *(_DWORD *)(v18 + 112) != 254 && DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned((DMMVIDPNTARGET **)v18) )
  {
    v23 = DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v18);
    v24 = *(int *)(v18 + 112);
    if ( v23 )
    {
      if ( (((_DWORD)v24 - 1) & 0xFFFFFFFB) != 0 )
      {
        WdLogSingleEntry1(2LL, *(int *)(v18 + 112));
        WdLogSingleEntry5(
          2LL,
          *((unsigned int *)v7 + 21),
          *((unsigned int *)v7 + 22),
          *((unsigned int *)v7 + 23),
          *((unsigned int *)v7 + 24),
          *(unsigned int *)(v9 + 24));
        result = 3223192389LL;
        *((_QWORD *)this + 18) = v10;
        return result;
      }
    }
    else if ( (_DWORD)v24 == 1 )
    {
      WdLogSingleEntry1(3LL, v24);
    }
  }
  v19 = *(_QWORD *)(v7 + 92);
  if ( ((*((_DWORD *)v7 + 30) >> 3) & 0x3F) != 0 )
  {
    LODWORD(v26) = *(_QWORD *)(v7 + 92);
    HIDWORD(v26) = ((*((_DWORD *)v7 + 30) >> 3) & 0x3F) * HIDWORD(v19);
    v19 = v26;
  }
  *((_QWORD *)v7 + 19) = v19;
  result = 0LL;
  *((_DWORD *)v7 + 40) = 1;
  return result;
}
