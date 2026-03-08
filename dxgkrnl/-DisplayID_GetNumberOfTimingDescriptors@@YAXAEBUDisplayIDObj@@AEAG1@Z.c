/*
 * XREFs of ?DisplayID_GetNumberOfTimingDescriptors@@YAXAEBUDisplayIDObj@@AEAG1@Z @ 0x1C0072BE4
 * Callers:
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0072ED8 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x1C0073690 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

void __fastcall DisplayID_GetNumberOfTimingDescriptors(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  int v3; // eax
  __int64 v4; // r11
  __int64 v6; // rdi
  unsigned int v7; // r8d
  unsigned int v8; // r10d
  _BYTE *v9; // r9
  unsigned __int64 v10; // rcx
  signed int v11; // ebx
  unsigned __int64 v12; // rbp
  _BYTE *v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v3 = *((_DWORD *)a1 + 5);
  v4 = *(_QWORD *)a1;
  *a2 = 0;
  *a3 = 0;
  if ( v3 > 0 )
  {
    v6 = (unsigned int)v3;
    do
    {
      v7 = *(unsigned __int8 *)(v4 + 1);
      v8 = v7;
      if ( v7 >= 3 )
      {
        v9 = (_BYTE *)((v4 + 4) & -(__int64)((_BYTE)v7 != 0));
        do
        {
          if ( !*v9 )
            break;
          v10 = (unsigned __int8)v9[2];
          v11 = v10 + 3;
          if ( v8 < 3 || (int)v8 < v11 )
            break;
          if ( *v9 == 34 )
          {
            v13 = v9;
            v12 = v10 / 0x14;
            v14 = v10 / 0x14;
            if ( DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v13) )
              *a2 += (unsigned __int8)v12;
          }
          v8 -= v11;
          v9 += (unsigned int)v11;
        }
        while ( v8 >= 3 );
      }
      v4 += (unsigned __int8)(v7 + 5);
      --v6;
    }
    while ( v6 );
  }
}
