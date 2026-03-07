__int64 __fastcall CcFindBcb(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // bp
  __int64 v11; // r10
  int v12; // edx
  _QWORD *BcbListHeadLargeOffset; // r10
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v17; // rcx

  v4 = *a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = HIDWORD(*a2);
  v8 = 0;
  v11 = *a2 + 0x80000;
  v12 = *a2;
  if ( v6 <= 0x200000 || (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
  {
    LODWORD(v4) = v12;
    goto LABEL_18;
  }
  if ( v6 <= 0x2000000 )
  {
    if ( v11 < v6 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(8 * ((unsigned __int64)(unsigned int)v6 >> 18)
                                        + *(_QWORD *)(a1 + 88)
                                        + 16 * (v11 >> 19));
      goto LABEL_5;
    }
LABEL_18:
    BcbListHeadLargeOffset = (_QWORD *)(a1 + 16);
    goto LABEL_5;
  }
  LOBYTE(v6) = 1;
  BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(a1, v11, v6);
LABEL_5:
  v14 = *BcbListHeadLargeOffset - 16LL;
  if ( (_DWORD)v7 )
    goto LABEL_19;
  if ( *(_WORD *)v14 != 765 )
    goto LABEL_13;
  if ( *(_DWORD *)(v14 + 36) )
  {
LABEL_19:
    if ( *(_WORD *)v14 == 765 )
    {
      while ( *a2 < *(_QWORD *)(v14 + 32) )
      {
        v17 = *(_QWORD *)(v14 + 8);
        if ( *a2 >= v17 )
        {
LABEL_16:
          v8 = 1;
          break;
        }
        if ( *a3 >= v17 )
          *a3 = v17;
        v14 = *(_QWORD *)(v14 + 16) - 16LL;
        if ( *(_WORD *)v14 != 765 )
          break;
      }
    }
  }
  else
  {
    do
    {
      if ( (unsigned int)v4 >= *(_DWORD *)(v14 + 32) )
        break;
      v15 = *(_DWORD *)(v14 + 8);
      if ( (unsigned int)v4 >= v15 )
        goto LABEL_16;
      if ( *(_DWORD *)a3 >= v15 )
      {
        *(_DWORD *)a3 = v15;
        LODWORD(v4) = *(_DWORD *)a2;
      }
      v14 = *(_QWORD *)(v14 + 16) - 16LL;
    }
    while ( *(_WORD *)v14 == 765 );
  }
LABEL_13:
  *a4 = v14;
  return v8;
}
