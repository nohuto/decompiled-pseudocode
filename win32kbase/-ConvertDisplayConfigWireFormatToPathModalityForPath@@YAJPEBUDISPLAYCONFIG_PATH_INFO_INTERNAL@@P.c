/*
 * XREFs of ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C018D0A4
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C018CA3C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigWireFormatToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  int v2; // r8d
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r11d
  int v10; // r9d
  int v11; // esi
  unsigned int v12; // eax

  v2 = 8;
  if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    v4 = *((_DWORD *)a1 + 45);
    switch ( v4 )
    {
      case 6u:
        v7 = 0x4000000;
        v8 = 256;
        v9 = 0x100000;
        v10 = 0x4000;
        v2 = 4;
        break;
      case 8u:
        v7 = 0x8000000;
        v8 = 512;
        v9 = 0x200000;
        v10 = 0x8000;
        break;
      case 0xAu:
        v7 = 0x10000000;
        v8 = 1024;
        v9 = 0x400000;
        v10 = 0x10000;
        v2 = 16;
        break;
      case 0xCu:
        v7 = 0x20000000;
        v8 = 2048;
        v9 = 0x800000;
        v10 = 0x20000;
        v2 = 32;
        break;
      case 0xEu:
        v7 = 0x40000000;
        v8 = 4096;
        v9 = 0x1000000;
        v10 = 0x40000;
        v2 = 64;
        break;
      case 0x10u:
        v7 = 0x80000000;
        v8 = 0x2000;
        v9 = 0x2000000;
        v10 = 0x80000;
        v2 = 128;
        break;
      default:
        v5 = v4;
LABEL_9:
        WdLogSingleEntry1(2LL, v5);
        return 3221225485LL;
    }
    v11 = *((_DWORD *)a1 + 44);
    if ( v11 )
    {
      switch ( v11 )
      {
        case 1:
          v12 = v8 | *((_DWORD *)a2 + 51) & 0xFFFFC0FF;
          break;
        case 2:
          v12 = v10 | *((_DWORD *)a2 + 51) & 0xFFF03FFF;
          break;
        case 3:
          v12 = v9 | *((_DWORD *)a2 + 51) & 0xFC0FFFFF;
          break;
        case 4:
          v12 = v7 | *((_DWORD *)a2 + 51) & 0x3FFFFFF;
          break;
        default:
          v5 = *((int *)a1 + 44);
          goto LABEL_9;
      }
    }
    else
    {
      v12 = v2 | *((_DWORD *)a2 + 51) & 0xFFFFFF03;
    }
    *((_DWORD *)a2 + 51) = v12;
    v5 = *((unsigned int *)a1 + 46);
    if ( (_DWORD)v5 && (_DWORD)v5 != 12 && (_DWORD)v5 != 30 && (_DWORD)v5 != 31 && (unsigned int)(v5 - 32) > 1 )
      goto LABEL_9;
    *((_DWORD *)a2 + 52) = v5;
  }
  return 0LL;
}
