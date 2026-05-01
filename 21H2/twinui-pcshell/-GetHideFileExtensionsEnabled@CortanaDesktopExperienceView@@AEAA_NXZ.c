/*
 * XREFs of ?GetHideFileExtensionsEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18027BD84
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180279D0C (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 * Callees:
 *     <none>
 */

char __fastcall CortanaDesktopExperienceView::GetHideFileExtensionsEnabled(CortanaDesktopExperienceView *this)
{
  char v1; // bl
  LSTATUS ValueW; // eax
  signed int v3; // edx
  bool v4; // zf
  char v5; // al
  CortanaDesktopExperienceView *v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF

  v7 = this;
  v9 = 4;
  v1 = 0;
  v8 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"HideFileExt",
             0x10000012u,
             &v8,
             &v7,
             &v9);
  LOWORD(v3) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v3 = ValueW;
    if ( ValueW <= 0 )
      goto LABEL_12;
  }
  else if ( v8 == 4 )
  {
    v4 = (_DWORD)v7 == 1;
    if ( (unsigned int)v7 <= 1 )
    {
LABEL_4:
      v3 = 0;
      v5 = v4;
      goto LABEL_13;
    }
  }
  else if ( v9 == 4 && (unsigned __int16)((_WORD)v7 - 48) <= 1u )
  {
    v4 = (_WORD)v7 == 49;
    goto LABEL_4;
  }
  v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_12:
  v5 = (char)v7;
LABEL_13:
  if ( v3 >= 0 )
    return v5;
  return v1;
}
