/*
 * XREFs of RtlMBMessageWParamCharToWCS @ 0x1C024EA38
 * Callers:
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C00C5E60 (fnHkINLPMSG.c)
 *     NtUserfnINWPARAMCHAR @ 0x1C01E36E0 (NtUserfnINWPARAMCHAR.c)
 * Callees:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x1C00BCE20 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x1C0207F9C (-THREAD_CODEPAGE@@YAGXZ.c)
 */

__int64 __fastcall RtlMBMessageWParamCharToWCS(int a1, CHAR *a2)
{
  unsigned __int64 v2; // rsi
  BOOL v3; // ebp
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int UnicodeString; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)a2;
  UnicodeString = 0;
  v3 = 0;
  v6 = (unsigned __int16)THREAD_CODEPAGE();
  v7 = a1 - 47;
  if ( v7 )
  {
    v8 = v7 - 157;
    if ( v8 )
    {
      v9 = v8 - 54;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
          goto LABEL_16;
        v11 = v10 - 3;
        if ( !v11 )
          goto LABEL_16;
        v12 = v11 - 1;
        if ( !v12 )
          goto LABEL_16;
        v13 = v12 - 8;
        if ( v13 )
        {
          v14 = v13 - 17;
          if ( !v14 )
            goto LABEL_16;
          if ( v14 != 358 )
            return 1LL;
        }
      }
      else
      {
        v3 = (*gpsi & 2) != 0 && (*(_QWORD *)a2 & 0x80000000LL) != 0;
      }
      if ( (*gpsi & 2) != 0 )
      {
        v15 = (unsigned __int8)v2;
        if ( (v2 & 0xFF00) != 0 )
          v15 = (v2 >> 8) | ((unsigned __int64)(unsigned __int8)v2 << 8);
        *(_QWORD *)a2 = v15;
      }
    }
  }
LABEL_16:
  if ( (_WORD)v6 == NlsAnsiCodePage || !(_WORD)v6 )
  {
    if ( RtlMultiByteToUnicodeN((PWCH)&UnicodeString, 4u, 0LL, a2, 2u) >= 0 )
      goto LABEL_19;
  }
  else if ( (unsigned int)ConvertToAndFromWideChar(v6, (unsigned __int16 *)&UnicodeString, 4u, a2, 2u, 1) )
  {
LABEL_19:
    v16 = UnicodeString;
    if ( v3 )
      v16 = UnicodeString | 0x80000000;
    *(_QWORD *)a2 = v16;
    return 1LL;
  }
  return 0LL;
}
