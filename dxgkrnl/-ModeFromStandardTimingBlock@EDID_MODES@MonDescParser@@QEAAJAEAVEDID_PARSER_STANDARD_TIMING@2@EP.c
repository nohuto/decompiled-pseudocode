/*
 * XREFs of ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C001E364
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001DE50 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z @ 0x1C001E4B8 (-CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C001E4F4 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C001E888 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 */

int __fastcall MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_STANDARD_TIMING *a2,
        char a3,
        struct _VideoModeDescriptor *a4)
{
  unsigned __int8 **v7; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int16 v9; // cx
  int v10; // edx
  unsigned int v11; // edi
  unsigned __int16 v12; // bx
  int v13; // edx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  int result; // eax
  unsigned __int8 v19; // al
  int v20; // edx
  unsigned __int16 *v21; // [rsp+20h] [rbp-38h]
  unsigned __int16 v22; // [rsp+30h] [rbp-28h] BYREF

  if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(a2) )
    return -1071841276;
  v8 = *v7;
  v9 = 0;
  v22 = 0;
  v10 = v8[1] >> 6;
  v11 = (v8[1] & 0x3F) + 60;
  v12 = 8 * (*v8 + 31);
  if ( !v10 )
  {
    v16 = **(_QWORD **)this;
    v17 = *(_BYTE *)(v16 + 18);
    if ( (v17 != 1 || *(_BYTE *)(v16 + 19) < 3u) && v17 < 3u )
    {
      v9 = v12;
      goto LABEL_11;
    }
    v15 = 10;
LABEL_8:
    v14 = 16;
    goto LABEL_9;
  }
  v13 = v10 - 1;
  if ( v13 )
  {
    v20 = v13 - 1;
    if ( !v20 )
    {
      v14 = 5;
      v15 = 4;
      goto LABEL_9;
    }
    if ( v20 != 1 )
      goto LABEL_11;
    v15 = 9;
    goto LABEL_8;
  }
  v14 = 4;
  v15 = 3;
LABEL_9:
  result = MonDescParser::CalculateVerticalActivePixelsFrom((MonDescParser *)v12, v14, v15, (unsigned __int16)&v22, v21);
  if ( result < 0 )
    return result;
  v9 = v22;
LABEL_11:
  if ( v9 < 0x64u )
    return -1071841276;
  if ( v12 != 1024 || v9 != 768 || (v19 = 1, v11 != 43) )
    v19 = 0;
  result = GTF_GetVideoModeDescriptor(v12, v9, v11, 1u, v19, a4);
  a4->VideoStandardType = 2;
  a4->Origin = *((_BYTE *)this + 8);
  a4->TimingType = (a3 != 0) + 2;
  return result;
}
