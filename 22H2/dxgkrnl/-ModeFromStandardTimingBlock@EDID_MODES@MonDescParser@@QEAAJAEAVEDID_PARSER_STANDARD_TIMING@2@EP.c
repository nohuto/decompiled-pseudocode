/*
 * XREFs of ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C001F1F8
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001ECC8 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C001F354 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z @ 0x1C001F7F4 (-CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C001FA50 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 */

int __fastcall MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_STANDARD_TIMING *a2,
        char a3,
        struct _VideoModeDescriptor *a4)
{
  unsigned __int8 **v7; // rdx
  unsigned __int8 *v8; // rax
  int v9; // edx
  unsigned int v10; // ebx
  unsigned __int16 v11; // r11
  int v12; // edx
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r8
  int result; // eax
  unsigned __int16 v16; // dx
  unsigned __int8 v17; // al
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  int v20; // edx
  unsigned __int16 *v21; // [rsp+20h] [rbp-28h]
  unsigned __int16 v22; // [rsp+30h] [rbp-18h] BYREF

  if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(a2) )
    return -1071841276;
  v8 = *v7;
  v22 = 0;
  v9 = v8[1] >> 6;
  v10 = (v8[1] & 0x3F) + 60;
  v11 = 8 * (*v8 + 31);
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( !v12 )
    {
      v13 = 4;
      v14 = 3;
LABEL_5:
      result = MonDescParser::CalculateVerticalActivePixelsFrom(
                 (MonDescParser *)v11,
                 v13,
                 v14,
                 (unsigned __int16)&v22,
                 v21);
      v16 = v22;
      goto LABEL_6;
    }
    v20 = v12 - 1;
    if ( !v20 )
    {
      v13 = 5;
      v14 = 4;
      goto LABEL_5;
    }
    if ( v20 != 1 )
      return -1071841276;
    v14 = 9;
LABEL_15:
    v13 = 16;
    goto LABEL_5;
  }
  v18 = **(_QWORD **)this;
  v19 = *(_BYTE *)(v18 + 18);
  if ( v19 == 1 && *(_BYTE *)(v18 + 19) >= 3u || v19 >= 3u )
  {
    v14 = 10;
    goto LABEL_15;
  }
  v16 = v11;
  result = 0;
LABEL_6:
  if ( result < 0 )
    return result;
  if ( v16 < 0x64u )
    return -1071841276;
  if ( v11 != 1024 || v16 != 768 || (v17 = 1, v10 != 43) )
    v17 = 0;
  result = GTF_GetVideoModeDescriptor(v11, v16, v10, 1u, v17, a4);
  a4->VideoStandardType = 2;
  a4->Origin = *((_BYTE *)this + 8);
  a4->TimingType = (a3 != 0) + 2;
  return result;
}
