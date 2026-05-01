/*
 * XREFs of ?IsSmallIconsMode@@YA_NXZ @ 0x18009B300
 * Callers:
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x18009B1DC (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsSmallIconsMode(void)
{
  bool v0; // bl
  LSTATUS ValueW; // eax
  signed int v2; // ecx
  bool v3; // zf
  _BOOL8 result; // rax
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF
  DWORD v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 4;
  v6 = 0;
  v0 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"TaskbarSmallIcons",
             0x10000012u,
             &v6,
             &v5,
             &v7);
  LOWORD(v2) = 13;
  if ( !ValueW )
  {
    if ( v6 == 4 )
    {
      v3 = v5 == 1;
      if ( v5 <= 1 )
      {
LABEL_4:
        v2 = 0;
        v0 = v3;
        goto LABEL_12;
      }
    }
    else if ( v7 == 4 && (unsigned __int16)(v5 - 48) <= 1u )
    {
      v3 = (_WORD)v5 == 49;
      goto LABEL_4;
    }
    goto LABEL_11;
  }
  if ( ValueW == 234 )
    ValueW = 13;
  v2 = ValueW;
  if ( ValueW > 0 )
LABEL_11:
    v2 = (unsigned __int16)v2 | 0x80070000;
LABEL_12:
  result = v0;
  if ( v2 < 0 )
    return 0LL;
  return result;
}
