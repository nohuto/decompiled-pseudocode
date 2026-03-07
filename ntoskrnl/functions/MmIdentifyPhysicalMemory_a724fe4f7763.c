__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  char v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned int *v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // r14
  int v18; // [rsp+34h] [rbp-65h]
  __int128 v20; // [rsp+40h] [rbp-59h] BYREF
  char *v21; // [rsp+50h] [rbp-49h]
  int v22; // [rsp+58h] [rbp-41h] BYREF
  int v23; // [rsp+5Ch] [rbp-3Dh]
  int v24; // [rsp+60h] [rbp-39h]
  __int64 v25; // [rsp+68h] [rbp-31h]
  __int128 v26; // [rsp+70h] [rbp-29h] BYREF
  __int64 v27; // [rsp+80h] [rbp-19h]
  unsigned __int64 v28; // [rsp+88h] [rbp-11h]
  unsigned int *v29; // [rsp+90h] [rbp-9h]
  __int128 v30; // [rsp+A0h] [rbp+7h] BYREF

  v22 = 0;
  v4 = a2;
  v25 = a1;
  v5 = a1;
  v21 = 0LL;
  v27 = 0LL;
  v24 = a4;
  v20 = 0LL;
  v6 = a4;
  v7 = 0LL;
  v30 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v29 = (unsigned int *)MiReferencePageRuns((__int64)MiSystemPartition, 0);
  v9 = v29;
  v18 = 0;
  if ( *v29 )
  {
    while ( 1 )
    {
      v10 = 48LL * *(_QWORD *)&v9[4 * v8 + 4] - 0x220000000000LL;
      v28 = v10 + 48LL * *(_QWORD *)&v9[4 * v8 + 6];
      if ( v10 >= v28 )
        goto LABEL_28;
      v11 = v25;
      v12 = v6 & 1;
      v23 = v12;
      do
      {
        v13 = 1LL;
        if ( v12 && !_bittest64((const signed __int64 *)(v10 + 40), 0x28u) && (*(_BYTE *)(v10 + 34) & 7) != 6 )
          goto LABEL_26;
        v20 = 0LL;
        v21 = 0LL;
        v13 = MiIdentifyPfnWrapper(v10, (__int64)&v20);
        if ( (v6 & 2) == 0 )
          goto LABEL_14;
        if ( v7 )
        {
          if ( *(_WORD *)v7 == ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FF) )
            goto LABEL_12;
          PsDereferencePartition(*(_QWORD *)(v7 + 200));
        }
        v7 = MiReferencePagePartition(v10, 0);
        if ( !v7 )
          goto LABEL_13;
LABEL_12:
        if ( MiPfnsWorthTrying(v7, v10, 1LL, 0, &v22) )
        {
LABEL_13:
          v14 = v20;
          *(_QWORD *)&v20 = v20 | 0x1000000000000000LL;
          goto LABEL_15;
        }
LABEL_14:
        v14 = v20;
LABEL_15:
        if ( (!v12 || (v14 & 0x70) == 0x60) && v13 )
        {
          v15 = v13;
          do
          {
            *(_QWORD *)&v30 = &v20;
            *((_QWORD *)&v30 + 1) = 24LL;
            EtwTraceSiloDcEvent((__int64)&v30, 1u, v11, a2, a3, 0x401804u);
            ++*((_QWORD *)&v20 + 1);
            if ( (v20 & 0xF) == 2 )
            {
              v21 += 8;
            }
            else if ( v21 && v21 != MmBadPointer )
            {
              v21 += 4096;
            }
            --v15;
          }
          while ( v15 );
          v12 = v23;
          v6 = v24;
        }
LABEL_26:
        v10 += 48 * v13;
      }
      while ( v10 < v28 );
      v8 = v18;
      v9 = v29;
LABEL_28:
      v18 = ++v8;
      if ( v8 >= *v9 )
      {
        v5 = v25;
        v4 = a2;
        break;
      }
    }
  }
  MiDereferencePageRuns((__int64)v9);
  if ( (v6 & 1) == 0 )
  {
    LODWORD(v26) = v26 & 0xFFFFFFE0;
    *((_QWORD *)&v26 + 1) = MmPfnDatabase;
    v27 = MxPfnAllocation;
    *(_QWORD *)&v30 = &v26;
    *((_QWORD *)&v30 + 1) = 24LL;
    EtwTraceSiloDcEvent((__int64)&v30, 1u, v5, v4, 0x27Bu, 0x401804u);
  }
  if ( v7 )
    PsDereferencePartition(*(_QWORD *)(v7 + 200));
  return 0LL;
}
