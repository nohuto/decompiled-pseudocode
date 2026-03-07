__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, int a2, __int16 a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // r11
  __int64 v12; // r8
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  char v15; // dl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a3;
  v18 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 24);
  if ( a2 == 3 )
  {
    v10 = 0;
    if ( *(_WORD *)(v9 + 6) )
    {
      v11 = *(_QWORD *)(v9 + 16);
      while ( 1 )
      {
        v12 = 28LL * v10;
        if ( (*(_WORD *)(v12 + v11) & 0x1020) == 0x20 && *(_WORD *)(v12 + v11 + 6) == (_WORD)v5 && a4 )
          break;
        if ( ++v10 >= *(unsigned __int16 *)(v9 + 6) )
          goto LABEL_10;
      }
      *a4 = v10;
      return v4;
    }
LABEL_10:
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 )
    {
      if ( (v5 & 0x8000u) == 0LL && (unsigned int)v5 < *(unsigned __int16 *)(v13 + 6) )
      {
        v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2 * v5));
        if ( v14 )
        {
          RtlInitUnicodeString(&DestinationString, v14);
          if ( RtlCultureNameToLCID(&DestinationString.Length, &v18) )
          {
            LOWORD(v5) = v18;
            v15 = 0;
            return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v5, v15, a4);
          }
        }
      }
    }
    return (unsigned int)-1073741772;
  }
  v15 = 1;
  if ( a2 == 1 )
    return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v5, v15, a4);
  if ( a2 != 2 )
    return (unsigned int)-1073741772;
  if ( (__int16)v5 <= 0 || (int)v5 >= *(unsigned __int16 *)(v9 + 6) )
    return (unsigned int)-1073741811;
  if ( a4 )
    *a4 = v5;
  return v4;
}
