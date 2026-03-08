/*
 * XREFs of ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C00225C8
 * Callers:
 *     ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C0212560 (-GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$def.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_RemovePII(unsigned int a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *i; // rdx
  __int64 v7; // r8
  char v8; // cl
  __int64 j; // rax
  _QWORD v10[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+70h] [rbp-18h]

  if ( !a2 || a1 < 0x80 )
    return 3221225485LL;
  v11 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v10, a2, a1);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 12) = 0;
    v4 = v3 + 57;
    v5 = 4LL;
    do
    {
      if ( !*(_WORD *)(v4 - 3) && !*(_BYTE *)(v4 - 1) && *(_BYTE *)v4 == 0xFF )
      {
        *(_QWORD *)(v4 + 2) = 0LL;
        *(_DWORD *)(v4 + 10) = 0;
        *(_BYTE *)(v4 + 14) = 0;
      }
      v4 += 18LL;
      --v5;
    }
    while ( v5 );
    for ( i = v10; i != &v10[v11]; *(_BYTE *)(v7 + 127) = -v8 )
    {
      v7 = *i;
      v8 = 0;
      for ( j = 0LL; j < 127; ++j )
        v8 += *(_BYTE *)(j + v7);
      ++i;
    }
    return 0LL;
  }
  return result;
}
