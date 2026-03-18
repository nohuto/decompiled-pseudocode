/*
 * XREFs of RtlMBMessageWParamCharToWCS @ 0x1C025A63C
 * Callers:
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C0076120 (fnHkINLPMSG.c)
 *     NtUserfnINWPARAMCHAR @ 0x1C0202FC0 (NtUserfnINWPARAMCHAR.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00E7F50 (ConvertToAndFromWideChar.c)
 *     THREAD_CODEPAGE @ 0x1C022AA7C (THREAD_CODEPAGE.c)
 */

__int64 __fastcall RtlMBMessageWParamCharToWCS(unsigned int a1, CHAR *a2)
{
  unsigned __int64 v2; // rsi
  BOOL v3; // ebp
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int UnicodeString; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)a2;
  v3 = 0;
  v6 = (unsigned __int16)THREAD_CODEPAGE();
  if ( a1 == 47 || a1 == 204 )
    goto LABEL_16;
  if ( a1 == 258 )
  {
    v3 = (*gpsi & 2) != 0 && (*(_QWORD *)a2 & 0x80000000LL) != 0;
LABEL_12:
    if ( (*gpsi & 2) != 0 )
    {
      v7 = (unsigned __int8)v2;
      if ( (v2 & 0xFF00) != 0 )
        v7 = (v2 >> 8) | ((unsigned __int64)(unsigned __int8)v2 << 8);
      *(_QWORD *)a2 = v7;
    }
    goto LABEL_16;
  }
  if ( a1 != 259 )
  {
    if ( a1 <= 0x105 )
      return 1LL;
    if ( a1 > 0x107 )
    {
      if ( a1 != 271 )
      {
        if ( a1 == 288 )
          goto LABEL_16;
        if ( a1 != 646 )
          return 1LL;
      }
      goto LABEL_12;
    }
  }
LABEL_16:
  UnicodeString = 0;
  if ( (_WORD)v6 == NlsAnsiCodePage || !(_WORD)v6 )
  {
    if ( RtlMultiByteToUnicodeN((PWCH)&UnicodeString, 4u, 0LL, a2, 2u) >= 0 )
      goto LABEL_19;
  }
  else if ( (unsigned int)ConvertToAndFromWideChar(v6, (WCHAR *)&UnicodeString, 4u, a2, 2u, 1) )
  {
LABEL_19:
    v8 = UnicodeString;
    if ( v3 )
      v8 = UnicodeString | 0x80000000;
    *(_QWORD *)a2 = v8;
    return 1LL;
  }
  return 0LL;
}
