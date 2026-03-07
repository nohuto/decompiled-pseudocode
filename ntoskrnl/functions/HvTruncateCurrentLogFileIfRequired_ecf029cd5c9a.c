__int64 __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r11
  unsigned __int64 v5; // rdi
  __int64 v6; // r11
  unsigned __int64 v7; // r8

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 1) == 0 && (result & 0x8000) == 0 )
  {
    v2 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v2 )
    {
      if ( *(_QWORD *)(a1 + 8 * v2 + 1544) )
      {
        v3 = HvpLogTypeToLogArrayIndex((unsigned int)v2);
        v5 = *(_QWORD *)(v4 + 8LL * v3 + 1808);
        result = HvGetEffectiveLogSizeCapForHive(v4);
        if ( v5 > (unsigned int)result )
        {
          v7 = *(unsigned int *)(v6 + 180);
          if ( v5 > v7 )
            return CmpDoFileSetSizeEx(v6, (unsigned int)v2, v7, 0LL);
        }
      }
    }
  }
  return result;
}
