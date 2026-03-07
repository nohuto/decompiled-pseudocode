__int64 __fastcall SC_MBR::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2)
{
  __int8 *v2; // r11
  unsigned int v4; // edx
  const __m128i *v5; // r14
  unsigned int v7; // eax
  unsigned int v8; // r10d
  int v9; // esi
  char v10; // bp
  __int8 *v11; // r15
  __int8 *v12; // rbx
  unsigned int v13; // r12d
  char v14; // cl
  unsigned int v15; // r9d
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // ebx
  int Sectors; // eax
  unsigned int v24; // [rsp+20h] [rbp-68h]
  unsigned int v25; // [rsp+24h] [rbp-64h]
  unsigned int v26; // [rsp+28h] [rbp-60h]
  struct _GUID v27; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0LL;
  v25 = 0;
  v4 = 0;
  v26 = 0;
  v24 = 0;
  v5 = (const __m128i *)*((_QWORD *)*this + 33);
  v7 = *((_DWORD *)a2 + 2);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v27 = 0LL;
  if ( !v7 )
  {
    SC_ENV::CreateGuid(&v27);
    v4 = 0;
    v8 = 0;
    v7 = *(_DWORD *)&v27.Data4[4] ^ *(_DWORD *)v27.Data4 ^ *(_DWORD *)&v27.Data2 ^ v27.Data1;
    *((_DWORD *)a2 + 2) = v7;
    v2 = 0LL;
  }
  if ( v5[27].m128i_i32[2] != v7 )
  {
    v5[27].m128i_i32[2] = v7;
    v10 = 1;
    *((_DWORD *)a2 + 3) = MBR_HEADER::CheckSum(v5);
  }
  while ( 1 )
  {
    v11 = v2;
    v12 = &v5[27].m128i_i8[14];
    v13 = (unsigned int)v2;
    do
    {
      if ( v8 >= *((_DWORD *)a2 + 1) )
        break;
      v14 = *((_BYTE *)a2 + 144 * v8 + 80);
      if ( v14 == 5 || v14 == 15 )
      {
        if ( v11 )
          return (unsigned int)-1073741823;
        v11 = v12;
        v15 = v4;
      }
      else
      {
        v15 = v26;
      }
      v16 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 36 * v8 + 23) = 0;
      *((_DWORD *)a2 + 36 * v8 + 22) = v16;
      *((_QWORD *)a2 + 18 * v8 + 12) = *((_QWORD *)a2 + 18 * v8 + 7);
      if ( *((_BYTE *)a2 + 144 * v8 + 76) != (_BYTE)v2 )
      {
        if ( v14 )
        {
          *v12 = *((_BYTE *)a2 + 144 * v8 + 81) != 0 ? 0x80 : 0;
          v12[4] = *((_BYTE *)a2 + 144 * v8 + 80);
          v17 = *((_QWORD *)a2 + 18 * v8 + 7);
          v18 = *((_DWORD *)*this + 59);
          if ( v18 )
            v17 /= (__int64)v18;
          *((_DWORD *)v12 + 2) = v17 - v15;
          v19 = *((_QWORD *)a2 + 18 * v8 + 8);
          v20 = *((_DWORD *)*this + 59);
          if ( v20 )
            v19 /= (__int64)v20;
          *((_DWORD *)v12 + 3) = v19;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)v12, (struct _DISK_GEOMETRY *)*this + 9);
          v8 = v25;
          LOBYTE(v2) = 0;
        }
        else
        {
          *(_OWORD *)v12 = 0LL;
        }
        v10 = 1;
      }
      v4 = v24;
      ++v8;
      ++v13;
      v25 = v8;
      v12 += 16;
    }
    while ( v13 < 4 );
    if ( v10 )
    {
      v9 = SC_DISK::WriteSectors(*this, 1, v26, 0LL);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v10 = 0;
    }
    if ( !v11 )
      break;
    v21 = *((_DWORD *)v11 + 2);
    v26 = v21 + v24;
    Sectors = SC_DISK::ReadSectors(*this, 1, v21 + v24, 0LL);
    v2 = 0LL;
    v9 = Sectors;
    if ( Sectors < 0 )
      break;
    v8 = v25;
    v5[31].m128i_i16[7] = -21931;
    if ( v24 )
      v21 = v24;
    v4 = v21;
    v24 = v21;
  }
  return (unsigned int)v9;
}
