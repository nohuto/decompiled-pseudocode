signed int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser::EDID_MODES *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  struct _VideoModeDescriptor *v4; // r13
  signed int result; // eax
  unsigned __int16 v8; // di
  int v9; // r12d
  int v10; // r15d
  unsigned __int16 v11; // si
  __int64 v12; // rbx
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // ax
  unsigned __int16 i; // di
  __int64 v16; // rax
  _WORD *v17; // r10
  int v18; // r11d
  unsigned __int16 v19; // di
  unsigned int v20; // esi
  struct _EDID_V1_CEA_861_DATA_HEADER *v21; // r15
  __int64 v22; // rcx
  int v23; // r9d
  struct _EDID_V1_CEA_861_DATA_HEADER *v24; // rax
  MonDescParser::EDID_MODES *v25; // r15
  int v26; // ecx
  unsigned __int16 v27; // si
  __int64 *v28; // rax
  __int64 v29; // rdx
  int v30; // edx
  __int64 v31; // r10
  __int64 v32; // r11
  int v33; // ecx
  __int64 v34; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v35; // r11
  unsigned __int16 j; // di
  unsigned int v37; // edi
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v39; // r15
  const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *v40; // r12
  unsigned int k; // esi
  unsigned __int8 v42; // [rsp+48h] [rbp-29h]
  unsigned __int16 v43; // [rsp+4Ch] [rbp-25h] BYREF
  unsigned __int16 v44[2]; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int16 v45; // [rsp+54h] [rbp-1Dh] BYREF
  unsigned __int16 v46; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int16 v47[4]; // [rsp+60h] [rbp-11h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v48; // [rsp+68h] [rbp-9h] BYREF
  int v49; // [rsp+70h] [rbp-1h]
  int v50; // [rsp+74h] [rbp+3h]
  __int64 v51; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v52; // [rsp+80h] [rbp+Fh]

  v4 = a4;
  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v48 = 0LL;
  v45 = 0;
  v46 = 0;
  v47[0] = 0;
  v44[0] = 0;
  v43 = 0;
  v42 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(this, &v45, &v46, v47, &v48, v44, &v43);
  if ( result >= 0 )
  {
    v8 = v45;
    if ( v45 > 0x11u )
      return -1071841278;
    v9 = v46;
    if ( v46 > 8u )
      return -1071841278;
    v10 = v47[0];
    if ( v47[0] > 6u )
      return -1071841278;
    v11 = v44[0];
    if ( v44[0] > 4u )
      return -1071841278;
    v12 = *a2;
    if ( !(_WORD)v12 )
    {
      *a2 = v45 + v46 + v47[0] + v44[0] + v43;
      return -1073741789;
    }
    memset(v4, 0, 56 * v12);
    *a3 = -1;
    v13 = 0;
    if ( (unsigned __int16)v12 < v8 )
    {
      v42 = 1;
      v8 = v12;
    }
    if ( v8 )
    {
      result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings(this, v8, a4);
      if ( result < 0 )
        return result;
      LOWORD(v12) = v12 - v8;
      v4 = &a4[v8];
      v13 = v8;
    }
    if ( (unsigned __int16)v12 < v11 )
    {
      v42 = 1;
      v11 = v12;
    }
    v44[0] = 0;
    v14 = 0;
    for ( i = 0; i < v11; v14 = ++v44[0] )
    {
      if ( v14 >= 4u )
        break;
      *(_QWORD *)v47 = 0LL;
      if ( MonDescParser::EDID_PARSER::GetDetTimParser(
             *(MonDescParser::EDID_PARSER **)this,
             v14,
             (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v47) )
      {
        result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                   this,
                   (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v47,
                   v4);
        if ( result != -1071841271 )
        {
          if ( result < 0 )
            return result;
          if ( !i )
            *a3 = v13;
          if ( v13
            && (v16 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v13], v4), v16 != -1) )
          {
            if ( !i )
              *v17 = v16;
          }
          else
          {
            LOWORD(v12) = v12 - 1;
            ++i;
            ++v13;
            ++v4;
          }
        }
      }
    }
    if ( (unsigned __int16)v12 < (unsigned __int16)v9 )
    {
      LOWORD(v9) = v12;
      LOWORD(v10) = 0;
    }
    else
    {
      if ( (unsigned __int16)v12 >= (unsigned int)(v9 + v10) )
      {
LABEL_32:
        v18 = (unsigned __int16)v9;
        v19 = 0;
        v20 = (unsigned __int16)v9 + (unsigned __int16)v10;
        if ( v20 )
        {
          v21 = v48;
          while ( 1 )
          {
            v22 = **(_QWORD **)this;
            v23 = *(unsigned __int8 *)(v22 + 19);
            v49 = *(unsigned __int8 *)(v22 + 18);
            v50 = v23;
            if ( v19 >= (unsigned __int16)v9 )
              v24 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v21 + 2 * (v19 - (__int64)v18));
            else
              v24 = (struct _EDID_V1_CEA_861_DATA_HEADER *)(v22 + 38 + 2LL * v19);
            v48 = v24;
            result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
                       this,
                       (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v48,
                       v19 >= (unsigned __int16)v9,
                       v4);
            if ( result != -1071841276 )
            {
              if ( result < 0 )
                return result;
              if ( !v13 || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v13], v4) == -1 )
              {
                LOWORD(v12) = v12 - 1;
                ++v13;
                ++v4;
              }
            }
            if ( ++v19 >= v20 )
              break;
            v18 = (unsigned __int16)v9;
          }
        }
        v25 = this;
        v26 = v42;
        if ( (unsigned __int16)v12 < v43 )
          v26 = 1;
        *(_DWORD *)v47 = v26;
        v27 = 0;
        v28 = *(__int64 **)this;
        v51 = 0LL;
        v52 = 0;
        v43 = 0;
        *(_DWORD *)v44 = *((_DWORD *)v28 + 20);
        if ( *(_DWORD *)v44 )
        {
          v29 = 0LL;
          do
          {
            if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v25, v29) == 2 )
            {
              v33 = v32;
              v34 = v31 + 8LL * *(_QWORD *)(v31 + 80);
              while ( v31 != v34 )
              {
                if ( v33 == v30 )
                  goto LABEL_65;
                ++v33;
                v31 += 8LL;
              }
              v31 = v32;
LABEL_65:
              MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
                (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
                *(union _EDID_V1_BLOCK **)v31);
              v35 = 0LL;
              v48 = 0LL;
              for ( j = 0;
                    (_WORD)v12
                 && MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                      (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
                      j,
                      (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v48);
                    ++j )
              {
                result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                           v25,
                           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v48,
                           v4);
                v35 = 0LL;
                if ( result != -1071841271 )
                {
                  if ( result < 0 )
                    return result;
                  if ( !v13
                    || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v13], v4) == -1 )
                  {
                    ++v13;
                    LOWORD(v12) = v12 - 1;
                    ++v4;
                  }
                }
              }
              v37 = (unsigned int)v35;
              if ( (_WORD)v12 )
              {
                do
                {
                  if ( v37 >= v52 )
                    break;
                  v48 = v35;
                  DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                                (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v51,
                                v37,
                                &v48);
                  v35 = 0LL;
                  if ( DataBlock )
                  {
                    v39 = v48;
                    if ( (*(_BYTE *)v48 & 0xE0) == 0x40 )
                    {
                      v40 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v48 + 1);
                      for ( k = 0; (_WORD)v12 && k < (*(_BYTE *)v39 & 0x1Fu); ++k )
                      {
                        result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(this, v40, v4);
                        v35 = 0LL;
                        if ( result != -1071841278 )
                        {
                          if ( result < 0 )
                            return result;
                          ++v13;
                          LOWORD(v12) = v12 - 1;
                          ++v4;
                        }
                        v40 = (const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *)((char *)v40 + 1);
                      }
                    }
                  }
                  ++v37;
                }
                while ( (_WORD)v12 );
                v25 = this;
                v27 = v43;
              }
            }
            v29 = ++v27;
            v43 = v27;
          }
          while ( (unsigned int)v27 < *(_DWORD *)v44 );
          LOBYTE(v26) = v47[0];
        }
        result = (_BYTE)v26 != 0 ? 0xC0000023 : 0;
        *a2 = v13;
        return result;
      }
      LOWORD(v10) = v12 - v9;
    }
    v42 = 1;
    goto LABEL_32;
  }
  return result;
}
