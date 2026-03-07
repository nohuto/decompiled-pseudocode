__int64 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  bool v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  v1 = 0;
  qword_140C69538 = (__int64)&qword_140C69530;
  qword_140C69530 = (__int64)&qword_140C69530;
  v2 = 0LL;
  qword_140C69540 = 0LL;
  stru_140C69548.Count = 0LL;
  v3 = *(_QWORD *)(a1 + 360);
  if ( (v3 & 1) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 360);
    goto LABEL_5;
  }
  if ( v3 != 1 )
  {
    v4 = v3 ^ ((a1 + 352) | 1);
    while ( 1 )
    {
LABEL_5:
      if ( !v4 )
        break;
      if ( ((*(_DWORD *)(v4 + 24) - 33) & 0xFFFFFFFD) != 0 )
        goto LABEL_7;
      v9 = *(_QWORD *)(v4 + 32);
      v10 = *(_QWORD *)(v4 + 40);
      if ( v2 )
      {
        v11 = *(_QWORD *)(v2 + 32);
        if ( v9 == v11 + *(_QWORD *)(v2 + 24) )
        {
          *(_QWORD *)(v2 + 32) = v11 + v10;
          goto LABEL_23;
        }
      }
      result = (__int64)MiAllocatePool(64, 0x28uLL, 0x52456D4Du);
      v2 = result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = v9;
      v12 = 0;
      *(_QWORD *)(result + 32) = v10;
      v13 = (_QWORD *)qword_140C69508;
      if ( !qword_140C69508 )
        goto LABEL_22;
      while ( v9 < v13[3] )
      {
        v14 = (_QWORD *)*v13;
        if ( !*v13 )
          goto LABEL_22;
LABEL_26:
        v13 = v14;
      }
      v14 = (_QWORD *)v13[1];
      if ( v14 )
        goto LABEL_26;
      v12 = 1;
LABEL_22:
      RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C69508, (unsigned __int64)v13, v12, v2);
LABEL_23:
      MiUpdateLargePageBitMap((__int64)MiSystemPartition, v9, v10, 0, 0);
LABEL_7:
      v6 = *(_QWORD **)(v4 + 8);
      v7 = v4;
      if ( v6 )
      {
        v5 = (_QWORD *)*v6;
        v4 = *(_QWORD *)(v4 + 8);
        if ( *v6 )
        {
          do
          {
            v4 = (unsigned __int64)v5;
            v5 = (_QWORD *)*v5;
          }
          while ( v5 );
        }
      }
      else
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v4 || *(_QWORD *)v4 == v7 )
            break;
          v7 = v4;
        }
      }
    }
  }
  if ( !qword_140C69508 )
    return 1LL;
  LOBYTE(v1) = (unsigned int)MiInitializeEnclaveMetadataPage() != 0;
  return v1;
}
