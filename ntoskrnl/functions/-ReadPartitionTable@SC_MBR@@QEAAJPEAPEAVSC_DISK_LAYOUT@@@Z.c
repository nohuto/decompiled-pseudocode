__int64 __fastcall SC_MBR::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2, unsigned __int8 a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  const __m128i *v5; // r13
  unsigned int v6; // edi
  char *v7; // rax
  char *v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rbp
  unsigned int v12; // edi
  unsigned __int8 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // eax
  MBR_ENTRY *v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned __int8 v23; // cf
  char v24; // al
  unsigned int v25; // eax
  unsigned int v26; // ebp
  char *v27; // rax
  char *v28; // rsi
  int Sectors; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  MBR_ENTRY *v32; // [rsp+30h] [rbp-68h]
  char v35; // [rsp+B0h] [rbp+18h]
  unsigned int v36; // [rsp+B8h] [rbp+20h]
  unsigned int v37; // [rsp+B8h] [rbp+20h]

  v35 = 0;
  v3 = 0;
  Sectors = 0;
  v4 = 0;
  v36 = 0;
  v5 = (const __m128i *)*((_QWORD *)*this + 33);
  v6 = 0;
  *a2 = 0LL;
  v7 = (char *)SC_ENV::Allocate(0x270uLL, (unsigned int)a2, a3);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v7 + 4, 0, 0x26CuLL);
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 2) = v5[27].m128i_i32[2];
  *((_DWORD *)v8 + 3) = MBR_HEADER::CheckSum(v5);
  if ( v5[31].m128i_i16[7] != -21931 )
    goto LABEL_27;
  v10 = &v5[28].m128i_u8[2];
  while ( 2 )
  {
    v11 = 0LL;
    v12 = v36;
    v13 = v10;
    v31 = 4LL;
    v14 = 4LL;
    do
    {
      v15 = 18LL * v4;
      if ( *v13 == 5 || *v13 == 15 )
      {
        if ( v11 )
        {
          v18 = 1;
          v35 = 1;
          goto LABEL_19;
        }
        v11 = v13 - 4;
        v16 = v3;
        v17 = (MBR_ENTRY *)(v13 - 4);
      }
      else
      {
        v16 = v12;
        v17 = (MBR_ENTRY *)(v13 - 4);
      }
      v32 = v17;
      v37 = v16;
      if ( MBR_ENTRY::Validate(v17, v16, *((_QWORD *)*this + 31)) )
      {
        *(_DWORD *)&v8[144 * v4 + 48] = 0;
        v9 = (v37 + (unsigned __int64)*((unsigned int *)v13 + 1)) << *((_DWORD *)*this + 60);
        *(_QWORD *)&v8[144 * v4 + 56] = v9;
        v19 = *((unsigned int *)v13 + 2);
        v20 = *((_DWORD *)*this + 60);
        *(_DWORD *)&v8[144 * v4 + 72] = -1;
        *(_QWORD *)&v8[144 * v4 + 64] = v19 << v20;
        v8[144 * v4 + 80] = *v13;
        v8[144 * v4 + 81] = *(_BYTE *)v32 == 0x80;
        v21 = *v13;
        if ( (unsigned __int8)v21 > 0xFu || (v22 = 32801, v23 = _bittest(&v22, v21), v24 = 0, !v23) )
          v24 = 1;
        v8[144 * v4++ + 82] = v24;
        *(_DWORD *)&v8[8 * v15 + 84] = *((_DWORD *)v13 + 1);
        *(_DWORD *)&v8[8 * v15 + 88] = *((_DWORD *)v8 + 2);
        v18 = v35;
        *(_DWORD *)&v8[8 * v15 + 92] = 0;
        *(_QWORD *)&v8[8 * v15 + 96] = v9;
      }
      else
      {
        v18 = 1;
        v35 = 1;
      }
      v14 = v31;
LABEL_19:
      v13 += 16;
      v31 = --v14;
    }
    while ( v14 );
    v6 = Sectors;
    if ( v18 || !v11 )
    {
LABEL_27:
      *((_DWORD *)v8 + 1) = (v4 + 3) & 0xFFFFFFFC;
      *a2 = (struct SC_DISK_LAYOUT *)v8;
    }
    else
    {
      v25 = *((_DWORD *)v11 + 2);
      v26 = v25 + v3;
      if ( !v3 )
        v3 = v25;
      v36 = v26;
      v27 = (char *)SC_ENV::Allocate(144 * v4 + 624, 0, v9);
      v28 = v27;
      if ( v27 )
      {
        memmove(v27, v8, (int)(144 * v4 + 48));
        memset(&v28[144 * v4 + 48], 0, 0x240uLL);
        SC_ENV::Free(v8);
        v8 = v28;
        Sectors = SC_DISK::ReadSectors(*this, 1, v26, 0LL);
        v6 = Sectors;
        if ( Sectors >= 0 )
        {
          v10 = &v5[28].m128i_u8[2];
          if ( v5[31].m128i_i16[7] != -21931 )
            goto LABEL_27;
          continue;
        }
LABEL_30:
        SC_ENV::Free(v8);
      }
      else
      {
        v6 = -1073741670;
        if ( v8 )
          goto LABEL_30;
      }
    }
    return v6;
  }
}
