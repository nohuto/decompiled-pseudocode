/*
 * XREFs of RtlWCSMessageWParamCharToMB @ 0x1C012DA10
 * Callers:
 *     fnHkINLPMSG @ 0x1C005D100 (fnHkINLPMSG.c)
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C0160040 (SfnINWPARAMDBCSCHAR.c)
 *     SfnINWPARAMCHAR @ 0x1C022E840 (SfnINWPARAMCHAR.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00A4AF4 (ConvertToAndFromWideChar.c)
 *     THREAD_CODEPAGE @ 0x1C0230DD0 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall RtlWCSMessageWParamCharToMB(unsigned int a1, WCHAR *a2)
{
  unsigned __int16 v4; // ax
  ULONG BytesInUnicodeString; // edx
  unsigned __int64 v6; // rcx
  unsigned int MultiByteString; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 != 47
    && a1 != 204
    && (a1 <= 0x101 || a1 > 0x103 && (a1 <= 0x105 || a1 > 0x107 && a1 != 271 && a1 != 288 && a1 != 646)) )
  {
    return 1LL;
  }
  v4 = THREAD_CODEPAGE();
  MultiByteString = 0;
  BytesInUnicodeString = (*gpsi & 2) != 0 ? 2 : 4;
  if ( v4 != NlsAnsiCodePage && v4 )
  {
    if ( (unsigned int)ConvertToAndFromWideChar(v4, a2, BytesInUnicodeString, (CHAR *)&MultiByteString, 4u, 0) )
      goto LABEL_14;
LABEL_18:
    *(_QWORD *)a2 = 0LL;
    return 1LL;
  }
  if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, a2, BytesInUnicodeString) < 0 )
    goto LABEL_18;
LABEL_14:
  if ( (*gpsi & 2) != 0 )
  {
    if ( (MultiByteString & 0xFF00) != 0 )
      v6 = ((unsigned __int64)(unsigned __int16)MultiByteString >> 8) | (((unsigned __int8)MultiByteString | ((unsigned __int64)a2[1] << 8)) << 8);
    else
      v6 = (unsigned __int8)MultiByteString;
    *(_QWORD *)a2 = v6;
  }
  else
  {
    *(_QWORD *)a2 = MultiByteString;
  }
  return 1LL;
}
