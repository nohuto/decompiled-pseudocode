__int64 __fastcall EDID_V1_ExtractDisplayIdBlob(unsigned int a1, unsigned __int8 *a2, struct DisplayIDObj *a3)
{
  __int64 result; // rax
  unsigned int BlockTypeCount; // eax
  __int64 v5; // r11
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r10
  struct DisplayIDObj *v9; // r11
  int v10; // eax
  __int64 *v11; // rcx
  __int64 *v12; // r8
  __int64 v13; // r8
  char *v14; // rcx
  unsigned __int8 v15; // al
  __int64 v16; // r9
  _QWORD v17[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v18[10]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v19; // [rsp+80h] [rbp+47h]

  if ( !a2 || a1 < 0x80 || !a3 )
    return 3221225485LL;
  v19 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v18, a2, a1);
  if ( (int)result >= 0 )
  {
    BlockTypeCount = MonDescParser::EDID_PARSER::GetBlockTypeCount(v18);
    if ( *(unsigned int *)(v5 + 8) < 126 * (unsigned __int64)BlockTypeCount )
    {
      return 3221225507LL;
    }
    else
    {
      v6 = v19;
      v7 = 1;
      if ( (unsigned int)v19 <= 1 )
        return 3221226021LL;
      do
      {
        if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType((MonDescParser::EDID_PARSER *)v18, v7) == 112 )
        {
          v10 = 0;
          v11 = &v18[v6];
          v12 = v18;
          if ( v18 == v11 )
          {
LABEL_15:
            v12 = 0LL;
          }
          else
          {
            while ( v10 != v7 )
            {
              ++v10;
              if ( ++v12 == v11 )
                goto LABEL_15;
            }
          }
          v13 = *v12;
          if ( (*(_BYTE *)(v13 + 1) & 0xF0) == 0x20 && *(_BYTE *)(v13 + 2) == 121 )
          {
            v14 = *(char **)v9;
            *(_OWORD *)&v14[v8] = *(_OWORD *)(v13 + 1);
            *(_OWORD *)&v14[v8 + 16] = *(_OWORD *)(v13 + 17);
            *(_OWORD *)&v14[v8 + 32] = *(_OWORD *)(v13 + 33);
            *(_OWORD *)&v14[v8 + 48] = *(_OWORD *)(v13 + 49);
            *(_OWORD *)&v14[v8 + 64] = *(_OWORD *)(v13 + 65);
            *(_OWORD *)&v14[v8 + 80] = *(_OWORD *)(v13 + 81);
            *(_OWORD *)&v14[v8 + 96] = *(_OWORD *)(v13 + 97);
            *(_QWORD *)&v14[v8 + 112] = *(_QWORD *)(v13 + 113);
            *(_DWORD *)&v14[v8 + 120] = *(_DWORD *)(v13 + 121);
            *(_WORD *)&v14[v8 + 124] = *(_WORD *)(v13 + 125);
            if ( (_DWORD)v8 )
            {
              v17[0] = *(_QWORD *)v9;
              v17[1] = 126LL;
              ++*(_BYTE *)(v17[0] + 3LL);
              v15 = DisplayID_Section_Parser::ComputeChecksum((DisplayID_Section_Parser *)v17);
              *(_BYTE *)(v16 + 125) = v15;
            }
            v6 = v19;
            LODWORD(v8) = v8 + 126;
          }
        }
        ++v7;
      }
      while ( v7 < (unsigned int)v6 );
      if ( (_DWORD)v8 )
      {
        DisplayID_Initialize(v9, *(const void **)v9, v8);
        return 0LL;
      }
      else
      {
        return 3221226021LL;
      }
    }
  }
  return result;
}
