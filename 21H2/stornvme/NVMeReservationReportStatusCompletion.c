/*
 * XREFs of NVMeReservationReportStatusCompletion @ 0x1C001E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 *     GetScsiReservationType @ 0x1C001AEE8 (GetScsiReservationType.c)
 *     NVMeReservationReportStatus @ 0x1C001E814 (NVMeReservationReportStatus.c)
 */

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
  __int64 v15; // r9
  _BYTE *v16; // r10
  _BYTE *v17; // r11
  char v18; // cl
  char v19; // al
  char v20; // al
  __int64 v21; // r8
  _BYTE *v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rax
  char v26; // cl
  char v27; // al
  char ScsiReservationType; // al
  char v29; // al
  __int64 v30; // r8
  __int64 v31; // r11
  __int16 v32; // r15
  unsigned __int16 v33; // r9
  char v34; // al
  unsigned __int64 v35; // rdx
  int v36; // r15d
  __int64 v37; // rdx
  char *v38; // rbx
  __int64 v39; // rcx
  char v40; // al
  char *v41; // rbx
  __int64 v42; // rcx
  char v43; // al
  void *v44; // rbx
  unsigned int v45; // edx
  __int64 v46; // r9
  unsigned __int16 v47; // [rsp+3Eh] [rbp-12h]
  __int64 v48; // [rsp+48h] [rbp-8h]
  char v50; // [rsp+A0h] [rbp+50h]

  v3 = a2;
  result = GetSrbExtension(a2);
  v48 = result;
  v7 = result;
  if ( !v6 || (result = 510LL, (*(_WORD *)(v6 + 14) & 0x1FE) != 0) )
  {
    *(_BYTE *)(v5 + 3) = 4;
    goto LABEL_53;
  }
  v8 = *(_QWORD *)(v7 + 4200);
  v9 = *(_DWORD *)(v7 + 4232);
  v47 = HIWORD(v9);
  v10 = *(unsigned __int16 *)(v8 + 5);
  v11 = *(unsigned __int16 *)(v8 + 5);
  if ( (*(_BYTE *)(a1 + 4096) & 8) != 0 )
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
      goto LABEL_53;
    return ProcessCommand(a1, v3);
  }
  if ( !(_BYTE)v9 )
  {
    v36 = 8 * v11;
    v14 = v36 + 8;
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v36 + 8), 1701672526LL);
    if ( !(_DWORD)result )
    {
      NVMeZeroMemory(0LL, v14);
      MEMORY[3] = *(_BYTE *)v8;
      MEMORY[2] = *(_BYTE *)(v8 + 1);
      MEMORY[1] = *(_BYTE *)(v8 + 2);
      MEMORY[0] = *(_BYTE *)(v8 + 3);
      MEMORY[6] = BYTE1(v36);
      MEMORY[5] = BYTE2(v36);
      MEMORY[4] = HIBYTE(v36);
      MEMORY[7] = v36;
      if ( v36 && (_WORD)v10 )
      {
        v37 = v10;
        if ( (*(_BYTE *)(a1 + 4096) & 8) != 0 )
        {
          v41 = (char *)(v8 + 74);
          v42 = 14LL;
          do
          {
            *(_BYTE *)(v42 + 1) = *(v41 - 2);
            *(_BYTE *)v42 = *(v41 - 1);
            v42 += 8LL;
            v43 = *v41;
            v41 += 64;
            *(_BYTE *)(v42 - 9) = v43;
            *(_BYTE *)(v42 - 10) = *(v41 - 63);
            *(_BYTE *)(v42 - 11) = *(v41 - 62);
            *(_BYTE *)(v42 - 12) = *(v41 - 61);
            *(_BYTE *)(v42 - 13) = *(v41 - 60);
            *(_BYTE *)(v42 - 14) = *(v41 - 59);
            --v37;
          }
          while ( v37 );
        }
        else
        {
          v38 = (char *)(v8 + 42);
          v39 = 14LL;
          do
          {
            *(_BYTE *)(v39 + 1) = *(v38 - 2);
            *(_BYTE *)v39 = *(v38 - 1);
            v39 += 8LL;
            v40 = *v38;
            v38 += 24;
            *(_BYTE *)(v39 - 9) = v40;
            *(_BYTE *)(v39 - 10) = *(v38 - 23);
            *(_BYTE *)(v39 - 11) = *(v38 - 22);
            *(_BYTE *)(v39 - 12) = *(v38 - 21);
            *(_BYTE *)(v39 - 13) = *(v38 - 20);
            *(_BYTE *)(v39 - 14) = *(v38 - 19);
            --v37;
          }
          while ( v37 );
        }
      }
      goto LABEL_45;
    }
    goto LABEL_14;
  }
  if ( (unsigned __int8)v9 != 1 )
  {
    if ( (unsigned __int8)v9 != 3 )
    {
LABEL_12:
      *(_BYTE *)(v3 + 3) = 6;
      goto LABEL_53;
    }
    v13 = 32 * v11;
    v14 = v13 + 8;
    result = StorPortExtendedFunction(0LL, a1, (unsigned int)(v13 + 8), 1701672526LL);
    if ( !(_DWORD)result )
    {
      NVMeZeroMemory(0LL, v14);
      MEMORY[3] = *(_BYTE *)v8;
      MEMORY[2] = *(_BYTE *)(v8 + 1);
      MEMORY[1] = *(_BYTE *)(v8 + 2);
      MEMORY[0] = *(_BYTE *)(v8 + 3);
      MEMORY[6] = BYTE1(v13);
      MEMORY[5] = BYTE2(v13);
      MEMORY[4] = HIBYTE(v13);
      MEMORY[7] = v13;
      if ( v13 && (_WORD)v10 )
      {
        v15 = 31LL;
        v16 = (_BYTE *)(v8 + 74);
        v17 = (_BYTE *)(v8 + 42);
        do
        {
          if ( (*(_BYTE *)(a1 + 4096) & 8) != 0 )
          {
            *(_BYTE *)(v15 - 16) = *(v16 - 2);
            *(_BYTE *)(v15 - 17) = *(v16 - 1);
            *(_BYTE *)(v15 - 18) = *v16;
            *(_BYTE *)(v15 - 19) = v16[1];
            *(_BYTE *)(v15 - 20) = v16[2];
            *(_BYTE *)(v15 - 21) = v16[3];
            *(_BYTE *)(v15 - 22) = v16[4];
            *(_BYTE *)(v15 - 23) = v16[5];
            *(_BYTE *)(v15 - 11) |= 2u;
            v26 = *(v16 - 8);
            v27 = *(_BYTE *)(v15 - 11);
            *(_BYTE *)(v15 - 10) &= 0xFu;
            *(_BYTE *)(v15 - 11) = v27 ^ (v27 ^ v26) & 1;
            ScsiReservationType = GetScsiReservationType(*(unsigned __int8 *)(v8 + 4));
            *(v22 - 10) = ScsiReservationType & 0xF;
            *(v22 - 4) = *(_BYTE *)(v23 - 10);
            *(v22 - 5) = *(_BYTE *)(v23 - 9);
            *v22 = 8;
            *(v22 - 1) = 0;
            *(v22 - 2) = 0;
            *(v22 - 3) = 0;
            v25 = *(_QWORD *)(v23 + 6);
          }
          else
          {
            *(_BYTE *)(v15 - 16) = *(v17 - 2);
            *(_BYTE *)(v15 - 17) = *(v17 - 1);
            *(_BYTE *)(v15 - 18) = *v17;
            *(_BYTE *)(v15 - 19) = v17[1];
            *(_BYTE *)(v15 - 20) = v17[2];
            *(_BYTE *)(v15 - 21) = v17[3];
            *(_BYTE *)(v15 - 22) = v17[4];
            *(_BYTE *)(v15 - 23) = v17[5];
            *(_BYTE *)(v15 - 11) |= 2u;
            v18 = *(v17 - 16);
            v19 = *(_BYTE *)(v15 - 11);
            *(_BYTE *)(v15 - 10) &= 0xFu;
            *(_BYTE *)(v15 - 11) = v19 ^ (v19 ^ v18) & 1;
            v20 = GetScsiReservationType(*(unsigned __int8 *)(v8 + 4));
            *(v22 - 10) = v20 & 0xF;
            *(v22 - 4) = *(_BYTE *)(v24 - 18);
            *(v22 - 5) = *(_BYTE *)(v24 - 17);
            *v22 = 8;
            *(v22 - 1) = 0;
            *(v22 - 2) = 0;
            *(v22 - 3) = 0;
            v25 = *(_QWORD *)(v24 - 10);
          }
          *(_QWORD *)&v22[v21 + 9] = v25;
          v17 = (_BYTE *)(v24 + 24);
          v15 = (__int64)(v22 + 32);
          v16 = (_BYTE *)(v23 + 64);
          --v10;
        }
        while ( v10 );
        v7 = v48;
        v3 = a2;
        v14 = v13 + 8;
      }
      goto LABEL_45;
    }
LABEL_14:
    *(_BYTE *)(v3 + 3) = 38;
    goto LABEL_53;
  }
  v50 = *(_BYTE *)(v8 + 4);
  v14 = v50 != 0 ? 24 : 8;
  result = StorPortExtendedFunction(0LL, a1, v14, 1701672526LL);
  if ( (_DWORD)result )
    goto LABEL_14;
  NVMeZeroMemory(0LL, v14);
  MEMORY[3] = *(_BYTE *)v8;
  MEMORY[2] = *(_BYTE *)(v8 + 1);
  MEMORY[1] = *(_BYTE *)(v8 + 2);
  MEMORY[0] = *(_BYTE *)(v8 + 3);
  MEMORY[6] = (unsigned __int16)(v50 != 0 ? 0x10 : 0) >> 8;
  MEMORY[5] = (unsigned int)(v50 != 0 ? 0x10 : 0) >> 16;
  MEMORY[4] = (unsigned int)(v50 != 0 ? 0x10 : 0) >> 24;
  MEMORY[7] = v50 != 0 ? 0x10 : 0;
  if ( !v50 )
    goto LABEL_45;
  v29 = GetScsiReservationType(*(unsigned __int8 *)(v8 + 4));
  v32 = v31 + 1;
  *(_BYTE *)(v30 + 21) = v29 & 0xF;
  if ( (unsigned __int8)(*(_BYTE *)(v8 + 4) - 5) <= (unsigned __int8)(v31 + 1) )
  {
    *(_QWORD *)(v30 + 8) = v31;
    goto LABEL_45;
  }
  v33 = v31;
  if ( (unsigned __int16)v31 >= (unsigned __int16)v10 )
    goto LABEL_45;
  while ( (*(_BYTE *)(a1 + 4096) & 8) == 0 )
  {
    if ( ((unsigned __int8)v32 & *(_BYTE *)(v8 + 24LL * v33 + 26)) != 0 )
    {
      *(_BYTE *)(v30 + 15) = *(_BYTE *)(v8 + 24LL * v33 + 40);
      *(_BYTE *)(v30 + 14) = *(_BYTE *)(v8 + 24LL * v33 + 41);
      *(_BYTE *)(v30 + 13) = *(_BYTE *)(v8 + 24LL * v33 + 42);
      *(_BYTE *)(v30 + 12) = *(_BYTE *)(v8 + 24LL * v33 + 43);
      *(_BYTE *)(v30 + 11) = *(_BYTE *)(v8 + 24LL * v33 + 44);
      *(_BYTE *)(v30 + 10) = *(_BYTE *)(v8 + 24LL * v33 + 45);
      *(_BYTE *)(v30 + 9) = *(_BYTE *)(v8 + 24LL * v33 + 46);
      v34 = *(_BYTE *)(v8 + 24LL * v33 + 47);
      goto LABEL_30;
    }
LABEL_32:
    v33 += v32;
    if ( v33 >= (unsigned __int16)v10 )
      goto LABEL_45;
  }
  if ( (*(_BYTE *)(((unsigned __int64)v33 << 6) + v8 + 66) & (unsigned __int8)v32) == 0 )
    goto LABEL_32;
  v35 = (unsigned __int64)v33 << 6;
  *(_BYTE *)(v30 + 15) = *(_BYTE *)(v35 + v8 + 72);
  *(_BYTE *)(v30 + 14) = *(_BYTE *)(v35 + v8 + 73);
  *(_BYTE *)(v30 + 13) = *(_BYTE *)(v35 + v8 + 74);
  *(_BYTE *)(v30 + 12) = *(_BYTE *)(v35 + v8 + 75);
  *(_BYTE *)(v30 + 11) = *(_BYTE *)(v35 + v8 + 76);
  *(_BYTE *)(v30 + 10) = *(_BYTE *)(v35 + v8 + 77);
  *(_BYTE *)(v30 + 9) = *(_BYTE *)(v35 + v8 + 78);
  v34 = *(_BYTE *)(v35 + v8 + 79);
LABEL_30:
  *(_BYTE *)(v30 + 8) = v34;
LABEL_45:
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    v44 = *(void **)(v3 + 64);
    result = 60LL;
  }
  else
  {
    v44 = *(void **)(v3 + 24);
    result = 16LL;
  }
  v45 = *(_DWORD *)(v3 + result);
  if ( v45 < v47 )
    goto LABEL_12;
  NVMeZeroMemory(v44, v45);
  if ( v14 >= v47 )
    v14 = v47;
  memmove(v44, 0LL, v14);
  result = StorPortExtendedFunction(1LL, a1, 0LL, v46);
  *(_BYTE *)(v3 + 3) = 1;
LABEL_53:
  *(_BYTE *)(v7 + 4253) |= 8u;
  return result;
}
