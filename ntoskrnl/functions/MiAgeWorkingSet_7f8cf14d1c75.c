__int64 __fastcall MiAgeWorkingSet(__int64 a1, __int8 a2, unsigned int a3, unsigned int a4)
{
  int v7; // r15d
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  _BYTE *Pool; // rbx
  __int64 v16; // rsi
  unsigned __int64 AvailablePagesBelowPriority; // rcx
  __int64 v18; // r11
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // r10
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r11
  int v28; // r10d
  char v30; // [rsp+41h] [rbp-BFh] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v40[32]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v41[11]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v42[192]; // [rsp+230h] [rbp+130h] BYREF
  _DWORD v43[68]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v44[6]; // [rsp+400h] [rbp+300h] BYREF
  _BYTE v45[16]; // [rsp+430h] [rbp+330h] BYREF
  int *v46; // [rsp+440h] [rbp+340h]
  __int64 v47; // [rsp+448h] [rbp+348h]
  __int64 *v48; // [rsp+450h] [rbp+350h]
  __int64 v49; // [rsp+458h] [rbp+358h]
  __int64 *v50; // [rsp+460h] [rbp+360h]
  __int64 v51; // [rsp+468h] [rbp+368h]
  __int64 *v52; // [rsp+470h] [rbp+370h]
  __int64 v53; // [rsp+478h] [rbp+378h]
  __int64 *v54; // [rsp+480h] [rbp+380h]
  __int64 v55; // [rsp+488h] [rbp+388h]
  int *v56; // [rsp+490h] [rbp+390h]
  __int64 v57; // [rsp+498h] [rbp+398h]

  memset(v42, 0, 0xB8uLL);
  memset(v40, 0, sizeof(v40));
  memset(v41, 0, sizeof(v41));
  memset(v43, 0, 0x108uLL);
  v7 = 4;
  v8 = *(_QWORD *)(a1 + 144);
  v9 = 0;
  v34 = *(_QWORD **)(a1 + 16);
  v10 = v34[4];
  if ( v8 > v10 )
  {
    v11 = 10;
    if ( a4 )
      v11 = a4;
    v12 = MiComputeAgingAmount(a1, v8 - v10, a3, v11);
    v13 = *(unsigned __int16 *)(a1 + 174);
    v14 = v12;
    HIDWORD(v40[1]) = v11;
    Pool = 0LL;
    v16 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v13) + 16920LL);
    if ( (a3 & 3) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(*(_QWORD *)(qword_140C67048 + 8 * v13), 5LL);
      if ( AvailablePagesBelowPriority + *(_QWORD *)(v18 + 3384) < *(_QWORD *)(v16 + 72) )
      {
        if ( *(_BYTE *)(a1 + 186) != 2 )
        {
          v25 = 3;
          if ( AvailablePagesBelowPriority >= *(_QWORD *)(v16 + 64) )
            v25 = 5;
          LODWORD(v40[1]) = v25;
        }
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1664) )
          WORD2(v40[0]) = *(_WORD *)(v16 + 2350);
      }
      if ( v14 <= 0x100 )
        goto LABEL_44;
      v19 = 509;
      if ( v14 < 0x1FD )
        v19 = v14;
      Pool = (_BYTE *)MiAllocatePool(64LL, 8LL * (unsigned int)(v19 - 256) + 2072, 1935109453LL);
      if ( !Pool )
      {
LABEL_44:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 124), 1, 0) )
        {
          Pool = v42;
          v19 = 20;
        }
        else
        {
          Pool = (_BYTE *)(v16 + 128);
          v19 = 256;
        }
      }
      *(_DWORD *)Pool = MiTbFlushType(a1);
      *((_DWORD *)Pool + 3) = 0;
      *((_WORD *)Pool + 2) = 0;
      *((_QWORD *)Pool + 2) = 0LL;
      *((_DWORD *)Pool + 2) = v19;
      *((_QWORD *)Pool + 3) = 0LL;
      if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
      {
        v43[1] = 32;
        v40[31] = v43;
      }
    }
    v41[0].m128i_i8[7] = a2;
    v41[1].m128i_i64[1] = a1;
    LODWORD(v40[0]) = a3;
    v40[6] = v14;
    v40[7] = Pool;
    v40[9] = 20LL;
    LODWORD(v40[8]) = MiTbFlushType(a1);
    v41[10].m128i_i64[1] = (__int64)v40;
    v41[9].m128i_i64[1] = (__int64)MiAgePte;
    v41[10].m128i_i64[0] = (__int64)MiAgeWorkingSetTail;
    WORD2(v40[8]) = 4;
    v40[10] = 0LL;
    v40[11] = 0LL;
    v41[0].m128i_i32[0] = 14;
    if ( (a3 & 2) != 0 )
      v20 = v34[2];
    else
      v20 = v34[1];
    v41[3].m128i_i64[1] = v20;
    if ( !v20 )
      v41[2].m128i_i64[1] = -1LL;
    v7 = MiWalkPageTables(v41);
    if ( Pool )
    {
      if ( Pool == (_BYTE *)(v16 + 128) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v16 + 124), 0);
      }
      else if ( Pool != v42 )
      {
        ExFreePoolWithTag(Pool, 0);
      }
    }
    if ( v7 == 5 )
      ++*(_DWORD *)(v16 + 2568);
  }
  v21 = v40[3];
  v22 = v40[5];
  v35 = 0LL;
  v31 = 0;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    MiFillLogProcessInfo(a1, &v31, &v35, v40[4]);
    if ( *(_DWORD *)v23 > 5u
      && (*(_BYTE *)(v23 + 16) & 1) != 0
      && (*(_QWORD *)(v23 + 24) & 1LL) == *(_QWORD *)(v23 + 24) )
    {
      v30 = *(_BYTE *)(a1 + 184) & 7;
      v44[4] = (__int64)&v30;
      v44[5] = 1LL;
      tlgCreate1Sz_char(v45, v35);
      v46 = &v32;
      v32 = v31;
      v48 = &v36;
      v38 = v26;
      v50 = &v37;
      v47 = 4LL;
      v52 = &v38;
      v36 = v22;
      v54 = &v39;
      v56 = (int *)&v33;
      v49 = 8LL;
      v37 = v27;
      v51 = 8LL;
      v53 = 8LL;
      v39 = v21;
      v55 = 8LL;
      v33 = a3;
      v57 = 4LL;
      tlgWriteEx_EtwWriteEx(v28, (int)&dword_140038573 + 3, 0, 1, 0, 0, 0xAu, (__int64)v44);
    }
  }
  LOBYTE(v9) = v7 == 5;
  return v9;
}
