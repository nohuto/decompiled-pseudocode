__int64 __fastcall NVMeReservationReportStatusCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // r12
  int v11; // r15d
  unsigned int v12; // edx
  int v13; // r15d
  unsigned int v14; // r14d
  unsigned int *v15; // r10
  __int64 v16; // r8
  char v17; // si
  _BYTE *v18; // r9
  __int64 v19; // r15
  char v20; // r12
  _BYTE *v21; // r10
  char v22; // di
  char v23; // r11
  char v24; // cl
  char v25; // al
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rax
  char v31; // cl
  char v32; // al
  char ScsiReservationType; // al
  void *v34; // r15
  __int64 v35; // r9
  int v36; // r15d
  char v37; // al
  __int64 v38; // r8
  __int16 v39; // r15
  unsigned __int16 v40; // r9
  char v41; // al
  unsigned __int64 v42; // rcx
  int v43; // r15d
  __int64 v44; // rdx
  char *v45; // rbx
  __int64 v46; // rcx
  char v47; // al
  char *v48; // rbx
  __int64 v49; // rcx
  char v50; // al
  unsigned __int16 v51; // [rsp+32h] [rbp-1Eh]
  __int64 v52; // [rsp+40h] [rbp-10h]
  unsigned int *v54; // [rsp+A0h] [rbp+50h] BYREF
  int v55; // [rsp+A8h] [rbp+58h]

  v3 = a2;
  result = GetSrbExtension(a2);
  v52 = result;
  v7 = result;
  if ( !v6 || (result = 510LL, (*(_WORD *)(v6 + 14) & 0x1FE) != 0) )
  {
    *(_BYTE *)(v5 + 3) = 4;
    goto LABEL_52;
  }
  v8 = *(_QWORD *)(v7 + 4200);
  v9 = *(_DWORD *)(v7 + 4232);
  v51 = HIWORD(v9);
  v10 = *(unsigned __int16 *)(v8 + 5);
  v11 = *(unsigned __int16 *)(v8 + 5);
  if ( (*(_BYTE *)(a1 + 4296) & 8) != 0 )
  {
    v12 = ((_DWORD)v10 + 1) << 6;
  }
  else
  {
    result = (unsigned int)(v10 + 1);
    v12 = 24 * result;
  }
  if ( *(_DWORD *)(v7 + 4240) < v12 )
  {
    result = NVMeReservationReportStatus(a1, v3, v9, SHIWORD(v9), v12);
    if ( (_DWORD)result )
      goto LABEL_52;
    return ProcessCommand(a1, v3);
  }
  if ( !(_BYTE)v9 )
  {
    v43 = 8 * v11;
    v55 = v43;
    v14 = v43 + 8;
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v43 + 8), 1701672526LL);
    if ( !(_DWORD)result )
    {
      NVMeZeroMemory(0LL, v14);
      v15 = 0LL;
      MEMORY[3] = *(_BYTE *)v8;
      MEMORY[2] = *(_BYTE *)(v8 + 1);
      MEMORY[1] = *(_BYTE *)(v8 + 2);
      MEMORY[0] = *(_BYTE *)(v8 + 3);
      MEMORY[5] = BYTE2(v55);
      MEMORY[6] = BYTE1(v55);
      MEMORY[4] = HIBYTE(v55);
      MEMORY[7] = v43;
      if ( v43 && (_WORD)v10 )
      {
        v44 = v10;
        if ( (*(_BYTE *)(a1 + 4296) & 8) != 0 )
        {
          v48 = (char *)(v8 + 74);
          v49 = 14LL;
          do
          {
            *(_BYTE *)(v49 + 1) = *(v48 - 2);
            *(_BYTE *)v49 = *(v48 - 1);
            v49 += 8LL;
            v50 = *v48;
            v48 += 64;
            *(_BYTE *)(v49 - 9) = v50;
            *(_BYTE *)(v49 - 10) = *(v48 - 63);
            *(_BYTE *)(v49 - 11) = *(v48 - 62);
            *(_BYTE *)(v49 - 12) = *(v48 - 61);
            *(_BYTE *)(v49 - 13) = *(v48 - 60);
            *(_BYTE *)(v49 - 14) = *(v48 - 59);
            --v44;
          }
          while ( v44 );
        }
        else
        {
          v45 = (char *)(v8 + 42);
          v46 = 14LL;
          do
          {
            *(_BYTE *)(v46 + 1) = *(v45 - 2);
            *(_BYTE *)v46 = *(v45 - 1);
            v46 += 8LL;
            v47 = *v45;
            v45 += 24;
            *(_BYTE *)(v46 - 9) = v47;
            *(_BYTE *)(v46 - 10) = *(v45 - 23);
            *(_BYTE *)(v46 - 11) = *(v45 - 22);
            *(_BYTE *)(v46 - 12) = *(v45 - 21);
            *(_BYTE *)(v46 - 13) = *(v45 - 20);
            *(_BYTE *)(v46 - 14) = *(v45 - 19);
            --v44;
          }
          while ( v44 );
        }
      }
      goto LABEL_24;
    }
    goto LABEL_14;
  }
  if ( (unsigned __int8)v9 != 1 )
  {
    if ( (unsigned __int8)v9 != 3 )
    {
LABEL_12:
      *(_BYTE *)(v3 + 3) = 6;
      goto LABEL_52;
    }
    v13 = 32 * v11;
    v55 = v13;
    v14 = v13 + 8;
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v13 + 8), 1701672526LL);
    if ( !(_DWORD)result )
    {
      NVMeZeroMemory(0LL, v14);
      v15 = 0LL;
      MEMORY[3] = *(_BYTE *)v8;
      MEMORY[2] = *(_BYTE *)(v8 + 1);
      MEMORY[1] = *(_BYTE *)(v8 + 2);
      MEMORY[0] = *(_BYTE *)(v8 + 3);
      MEMORY[5] = BYTE2(v55);
      MEMORY[6] = BYTE1(v55);
      MEMORY[4] = HIBYTE(v55);
      MEMORY[7] = v13;
      if ( v13 )
      {
        v55 = 8;
        if ( (_WORD)v10 )
        {
          v16 = 31LL;
          v17 = BYTE1(v55);
          v18 = (_BYTE *)(v8 + 74);
          v19 = v10;
          v20 = HIBYTE(v55);
          LOBYTE(v54) = BYTE2(v55);
          v21 = (_BYTE *)(v8 + 42);
          v22 = BYTE2(v55);
          v23 = 15;
          do
          {
            if ( (*(_BYTE *)(a1 + 4296) & 8) != 0 )
            {
              *(_BYTE *)(v16 - 16) = *(v18 - 2);
              *(_BYTE *)(v16 - 17) = *(v18 - 1);
              *(_BYTE *)(v16 - 18) = *v18;
              *(_BYTE *)(v16 - 19) = v18[1];
              *(_BYTE *)(v16 - 20) = v18[2];
              *(_BYTE *)(v16 - 21) = v18[3];
              *(_BYTE *)(v16 - 22) = v18[4];
              *(_BYTE *)(v16 - 23) = v18[5];
              v31 = *(_BYTE *)(v16 - 11) | 2;
              *(_BYTE *)(v16 - 11) = v31;
              v32 = *(v18 - 8) ^ v31;
              *(_BYTE *)(v16 - 10) &= v23;
              *(_BYTE *)(v16 - 11) = v31 ^ v32 & 1;
              ScsiReservationType = GetScsiReservationType(*(unsigned __int8 *)(v8 + 4));
              *(_BYTE *)(v27 - 10) = v23 & ScsiReservationType;
              *(_BYTE *)(v27 - 4) = *(_BYTE *)(v28 - 10);
              *(_BYTE *)(v27 - 5) = *(_BYTE *)(v28 - 9);
              *(_BYTE *)v27 = 8;
              *(_BYTE *)(v27 - 1) = v17;
              *(_BYTE *)(v27 - 2) = v22;
              *(_BYTE *)(v27 - 3) = v20;
              v30 = *(_QWORD *)(v28 + 6);
            }
            else
            {
              *(_BYTE *)(v16 - 16) = *(v21 - 2);
              *(_BYTE *)(v16 - 17) = *(v21 - 1);
              *(_BYTE *)(v16 - 18) = *v21;
              *(_BYTE *)(v16 - 19) = v21[1];
              *(_BYTE *)(v16 - 20) = v21[2];
              *(_BYTE *)(v16 - 21) = v21[3];
              *(_BYTE *)(v16 - 22) = v21[4];
              *(_BYTE *)(v16 - 23) = v21[5];
              v24 = *(_BYTE *)(v16 - 11) | 2;
              *(_BYTE *)(v16 - 11) = v24;
              v25 = *(v21 - 16) ^ v24;
              *(_BYTE *)(v16 - 10) &= v23;
              *(_BYTE *)(v16 - 11) = v24 ^ v25 & 1;
              v26 = GetScsiReservationType(*(unsigned __int8 *)(v8 + 4));
              *(_BYTE *)(v27 - 10) = v23 & v26;
              *(_BYTE *)(v27 - 4) = *(_BYTE *)(v29 - 18);
              *(_BYTE *)(v27 - 5) = *(_BYTE *)(v29 - 17);
              *(_BYTE *)v27 = 8;
              *(_BYTE *)(v27 - 1) = v17;
              *(_BYTE *)(v27 - 2) = v22;
              *(_BYTE *)(v27 - 3) = v20;
              v30 = *(_QWORD *)(v29 - 10);
            }
            *(_QWORD *)(v27 + 1) = v30;
            v21 = (_BYTE *)(v29 + 24);
            v16 = v27 + 32;
            v18 = (_BYTE *)(v28 + 64);
            --v19;
          }
          while ( v19 );
          v7 = v52;
          v3 = a2;
          goto LABEL_23;
        }
      }
      goto LABEL_24;
    }
LABEL_14:
    *(_BYTE *)(v3 + 3) = 38;
    goto LABEL_52;
  }
  LOBYTE(v54) = *(_BYTE *)(v8 + 4);
  v36 = (_BYTE)v54 != 0 ? 0x10 : 0;
  v55 = v36;
  v14 = v36 + 8;
  result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v36 + 8), 1701672526LL);
  if ( (_DWORD)result )
    goto LABEL_14;
  NVMeZeroMemory(0LL, v14);
  v15 = 0LL;
  MEMORY[3] = *(_BYTE *)v8;
  MEMORY[2] = *(_BYTE *)(v8 + 1);
  MEMORY[1] = *(_BYTE *)(v8 + 2);
  MEMORY[0] = *(_BYTE *)(v8 + 3);
  MEMORY[5] = BYTE2(v55);
  MEMORY[6] = BYTE1(v55);
  MEMORY[4] = HIBYTE(v55);
  MEMORY[7] = v36;
  if ( !(_BYTE)v54 )
    goto LABEL_24;
  v37 = GetScsiReservationType(*(unsigned __int8 *)(v8 + 4));
  v39 = (_WORD)v15 + 1;
  *(_BYTE *)(v38 + 21) = v37 & 0xF;
  if ( (unsigned __int8)(*(_BYTE *)(v8 + 4) - 5) <= (unsigned __int8)((_BYTE)v15 + 1) )
  {
    *(_QWORD *)(v38 + 8) = v15;
    goto LABEL_24;
  }
  v40 = (unsigned __int16)v15;
  if ( (unsigned __int16)v15 >= (unsigned __int16)v10 )
    goto LABEL_24;
  while ( (*(_BYTE *)(a1 + 4296) & 8) == 0 )
  {
    if ( ((unsigned __int8)v39 & *(_BYTE *)(v8 + 24LL * v40 + 26)) != 0 )
    {
      *(_BYTE *)(v38 + 15) = *(_BYTE *)(v8 + 24LL * v40 + 40);
      *(_BYTE *)(v38 + 14) = *(_BYTE *)(v8 + 24LL * v40 + 41);
      *(_BYTE *)(v38 + 13) = *(_BYTE *)(v8 + 24LL * v40 + 42);
      *(_BYTE *)(v38 + 12) = *(_BYTE *)(v8 + 24LL * v40 + 43);
      *(_BYTE *)(v38 + 11) = *(_BYTE *)(v8 + 24LL * v40 + 44);
      *(_BYTE *)(v38 + 10) = *(_BYTE *)(v8 + 24LL * v40 + 45);
      *(_BYTE *)(v38 + 9) = *(_BYTE *)(v8 + 24LL * v40 + 46);
      v41 = *(_BYTE *)(v8 + 24LL * v40 + 47);
      goto LABEL_35;
    }
LABEL_37:
    v40 += v39;
    if ( v40 >= (unsigned __int16)v10 )
      goto LABEL_23;
  }
  v42 = (unsigned __int64)v40 << 6;
  if ( ((unsigned __int8)v39 & *(_BYTE *)(v42 + v8 + 66)) == 0 )
    goto LABEL_37;
  *(_BYTE *)(v38 + 15) = *(_BYTE *)(v42 + v8 + 72);
  *(_BYTE *)(v38 + 14) = *(_BYTE *)(v42 + v8 + 73);
  *(_BYTE *)(v38 + 13) = *(_BYTE *)(v42 + v8 + 74);
  *(_BYTE *)(v38 + 12) = *(_BYTE *)(v42 + v8 + 75);
  *(_BYTE *)(v38 + 11) = *(_BYTE *)(v42 + v8 + 76);
  *(_BYTE *)(v38 + 10) = *(_BYTE *)(v42 + v8 + 77);
  *(_BYTE *)(v38 + 9) = *(_BYTE *)(v42 + v8 + 78);
  v41 = *(_BYTE *)(v42 + v8 + 79);
LABEL_35:
  *(_BYTE *)(v38 + 8) = v41;
LABEL_23:
  v15 = 0LL;
LABEL_24:
  v54 = v15;
  result = GetSrbDataBuffer(v3, &v54);
  v34 = (void *)result;
  if ( *v54 < v51 )
    goto LABEL_12;
  NVMeZeroMemory((void *)result, *v54);
  if ( v14 >= v51 )
    v14 = v51;
  memmove(v34, 0LL, v14);
  result = StorPortExtendedFunction(1LL, a1, 0LL, v35);
  *(_BYTE *)(v3 + 3) = 1;
LABEL_52:
  *(_BYTE *)(v7 + 4253) |= 8u;
  return result;
}
