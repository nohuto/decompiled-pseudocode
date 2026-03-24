/*
 * XREFs of ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001F824
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001ECC8 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C000D650 (-Is18ByteDetTim@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C000D77C (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C001FA50 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 *     ?DenseOnesBitCount@MonDescParser@@YAEE@Z @ 0x1C001FA74 (-DenseOnesBitCount@MonDescParser@@YAEE@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001FA8C (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0061348 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0061418 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C0061478 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 */

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
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **v13; // rsi
  MonDescParser *v14; // r12
  MonDescParser *v15; // rcx
  MonDescParser *v16; // rcx
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // al
  unsigned __int8 v19; // r11
  __int16 v20; // r10
  __int64 v21; // r11
  MonDescParser *v22; // r9
  __int64 v23; // r10
  unsigned __int16 i; // dx
  unsigned int *v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int16 v28; // dx
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r9
  unsigned __int16 v31; // r11
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *v32; // r8
  unsigned __int16 j; // cx
  __int16 v34; // dx
  int k; // r10d
  char v36; // al
  unsigned __int8 v37; // r9
  int v38; // r10d
  _WORD *v39; // r11
  unsigned __int8 v40; // dl
  unsigned __int16 *v41; // rdi
  unsigned int v42; // esi
  int v44; // ecx
  MonDescParser **v45; // rdx
  unsigned __int8 m; // r10
  unsigned __int8 v47; // r10
  unsigned int v48; // r14d
  unsigned int v49; // ebx
  char *v50; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v51; // [rsp+28h] [rbp-8h] BYREF
  __int16 v52; // [rsp+60h] [rbp+30h]

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
    v52 = *(_WORD *)((char *)*v7 + 35);
    MonDescParser::DenseOnesBitCount(v15, (unsigned __int8)a2);
    LOBYTE(v16) = HIBYTE(v52);
    v18 = MonDescParser::DenseOnesBitCount(v16, v17);
    *a2 = (v19 >> 7) + v18 + v20;
  }
  v21 = 4LL;
  if ( a3 )
  {
    v22 = *v7;
    *a3 = 0;
    v23 = 1LL;
    for ( i = 0; i < 8u; i = v23 + v28 )
    {
      v25 = &v51;
      v50 = (char *)v22 + 2 * i + 38;
      v26 = 0LL;
      do
      {
        v27 = *((unsigned __int8 *)v22 + v26 + 18);
        v26 += v23;
        *v25 = v27;
        v25 = (unsigned int *)((char *)v25 + v21);
      }
      while ( v26 < 2 );
      if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused((MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v50) )
        break;
      *a3 += v23;
    }
    v13 = a5;
  }
  if ( a4 )
    *a4 = 0;
  v29 = 0;
  while ( !MonDescParser::EDID_PARSER::Is18ByteDispDesc((MonDescParser::EDID_PARSER *)v7, v29)
       || *((_BYTE *)*v7 + 18 * v30 + 57) != 0xFA )
  {
    v29 = v30 + 1;
    if ( v29 >= v31 )
      goto LABEL_28;
  }
  v32 = (MonDescParser *)((char *)v14 + 18 * v30 + 59);
  if ( a4 )
  {
    for ( j = 0; j < 6u; ++j )
    {
      v34 = *((_WORD *)v32 + j);
      if ( v34 == 257 )
        break;
      if ( !v34 )
        break;
      ++*a4;
    }
  }
  if ( v13 )
    *v13 = v32;
LABEL_28:
  if ( a6 )
  {
    for ( k = 0; k < 4; k = v38 + 1 )
    {
      v36 = MonDescParser::EDID_PARSER::Is18ByteDetTim((MonDescParser::EDID_PARSER *)v7, k);
      v40 = v37 + 1;
      if ( !v36 )
        v40 = v37;
    }
    *v39 = v40;
  }
  v41 = a7;
  if ( a7 )
  {
    v42 = 0;
    *a7 = 0;
    if ( *((_DWORD *)v7 + 20) )
    {
      do
      {
        if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v7, v42) == 2 )
        {
          v44 = 0;
          v45 = &v7[(_QWORD)v7[10]];
          if ( v7 == v45 )
          {
LABEL_42:
            v7 = 0LL;
          }
          else
          {
            while ( v44 != v42 )
            {
              ++v44;
              if ( ++v7 == v45 )
                goto LABEL_42;
            }
          }
          MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)&v50, *v7);
          for ( m = 0;
                MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v50,
                  m,
                  (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&a5);
                m = v47 + 1 )
          {
            ;
          }
          v48 = v51;
          v49 = 0;
          *v41 += v47;
          if ( v48 )
          {
            do
            {
              a5 = 0LL;
              if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                     (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v50,
                     v49,
                     (struct _EDID_V1_CEA_861_DATA_HEADER **)&a5)
                && (*(_BYTE *)a5 & 0xE0) == 0x40 )
              {
                *v41 += *(_BYTE *)a5 & 0x1F;
              }
              ++v49;
            }
            while ( v49 < v48 );
          }
        }
        v7 = *this;
        ++v42;
      }
      while ( v42 < *((_DWORD *)*this + 20) );
    }
  }
  return 0LL;
}
