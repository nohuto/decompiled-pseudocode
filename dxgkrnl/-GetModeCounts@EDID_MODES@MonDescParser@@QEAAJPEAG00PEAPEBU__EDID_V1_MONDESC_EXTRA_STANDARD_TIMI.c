__int64 __fastcall MonDescParser::EDID_MODES::GetModeCounts(
        MonDescParser ***this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7)
{
  MonDescParser **v7; // rbx
  MonDescParser **v12; // r10
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **v13; // r14
  MonDescParser *v14; // r12
  MonDescParser *v15; // rcx
  MonDescParser *v16; // rcx
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // al
  unsigned __int8 v19; // r11
  __int16 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r10
  MonDescParser *v23; // r9
  unsigned __int16 i; // dx
  unsigned int *v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int16 v28; // dx
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r9
  __int16 v31; // r10
  unsigned __int16 v32; // r11
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *v33; // r8
  unsigned __int16 j; // cx
  __int16 v35; // dx
  int k; // r10d
  char v37; // al
  unsigned __int8 v38; // r9
  int v39; // r10d
  _WORD *v40; // r11
  unsigned __int8 v41; // dl
  unsigned __int16 *v42; // rdi
  unsigned int v43; // esi
  int v45; // ecx
  MonDescParser **v46; // rdx
  unsigned __int8 m; // r10
  unsigned __int8 v48; // r10
  unsigned int v49; // r14d
  unsigned int v50; // ebx
  char *v51; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v52; // [rsp+28h] [rbp-8h] BYREF
  __int16 v53; // [rsp+60h] [rbp+30h]

  v7 = *this;
  v12 = *this;
  if ( *this == &(*this)[(_QWORD)(*this)[10]] )
    v12 = 0LL;
  v13 = a5;
  v14 = *v12;
  if ( a5 )
    *a5 = 0LL;
  if ( a2 )
  {
    v15 = *v7;
    LOBYTE(v15) = *(_WORD *)((char *)*v7 + 35);
    v53 = *(_WORD *)((char *)*v7 + 35);
    MonDescParser::DenseOnesBitCount(v15, (unsigned __int8)a2);
    LOBYTE(v16) = HIBYTE(v53);
    v18 = MonDescParser::DenseOnesBitCount(v16, v17);
    *a2 = (v19 >> 7) + v18 + v20;
  }
  v21 = 4LL;
  v22 = 1LL;
  if ( a3 )
  {
    v23 = *v7;
    *a3 = 0;
    for ( i = 0; i < 8u; i = v22 + v28 )
    {
      v25 = &v52;
      v51 = (char *)v23 + 2 * i + 38;
      v26 = 0LL;
      do
      {
        v27 = *((unsigned __int8 *)v23 + v26 + 18);
        v26 += v22;
        *v25 = v27;
        v25 = (unsigned int *)((char *)v25 + v21);
      }
      while ( v26 < 2 );
      if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused((MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v51) )
        break;
      *a3 += v22;
    }
    v13 = a5;
  }
  if ( a4 )
    *a4 = 0;
  v29 = 0;
  while ( !MonDescParser::EDID_PARSER::Is18ByteDispDesc((MonDescParser::EDID_PARSER *)v7, v29)
       || *((_BYTE *)*v7 + 18 * v30 + 57) != 0xFA )
  {
    v29 = v31 + v30;
    if ( v29 >= v32 )
      goto LABEL_26;
  }
  v33 = (MonDescParser *)((char *)v14 + 18 * v30 + 59);
  if ( a4 )
  {
    for ( j = 0; j < 6u; j += v31 )
    {
      v35 = *((_WORD *)v33 + j);
      if ( v35 == 257 )
        break;
      if ( !v35 )
        break;
      *a4 += v31;
    }
  }
  if ( v13 )
    *v13 = v33;
LABEL_26:
  if ( a6 )
  {
    for ( k = 0; k < 4; k = v39 + 1 )
    {
      v37 = MonDescParser::EDID_PARSER::Is18ByteDetTim((MonDescParser::EDID_PARSER *)v7, k);
      v41 = v38 + 1;
      if ( !v37 )
        v41 = v38;
    }
    *v40 = v41;
  }
  v42 = a7;
  if ( a7 )
  {
    v43 = 0;
    *a7 = 0;
    if ( *((_DWORD *)v7 + 20) )
    {
      do
      {
        if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v7, v43) == 2 )
        {
          v45 = 0;
          v46 = &v7[(_QWORD)v7[10]];
          if ( v7 == v46 )
          {
LABEL_42:
            v7 = 0LL;
          }
          else
          {
            while ( v45 != v43 )
            {
              ++v45;
              if ( ++v7 == v46 )
                goto LABEL_42;
            }
          }
          MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51, *v7);
          for ( m = 0;
                MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
                  m,
                  (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&a5);
                m = v48 + 1 )
          {
            ;
          }
          v49 = v52;
          v50 = 0;
          *v42 += v48;
          if ( v49 )
          {
            do
            {
              a5 = 0LL;
              if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                     (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
                     v50,
                     (struct _EDID_V1_CEA_861_DATA_HEADER **)&a5)
                && (*(_BYTE *)a5 & 0xE0) == 0x40 )
              {
                *v42 += *(_BYTE *)a5 & 0x1F;
              }
              ++v50;
            }
            while ( v50 < v49 );
          }
        }
        v7 = *this;
        ++v43;
      }
      while ( v43 < *((_DWORD *)*this + 20) );
    }
  }
  return 0LL;
}
