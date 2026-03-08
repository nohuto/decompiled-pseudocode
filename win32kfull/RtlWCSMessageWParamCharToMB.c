/*
 * XREFs of RtlWCSMessageWParamCharToMB @ 0x1C024EB88
 * Callers:
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     fnHkINLPMSG @ 0x1C00C5E60 (fnHkINLPMSG.c)
 *     SfnINWPARAMCHAR @ 0x1C02100D0 (SfnINWPARAMCHAR.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C02103E0 (SfnINWPARAMDBCSCHAR.c)
 * Callees:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x1C00BCE20 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x1C0207F9C (-THREAD_CODEPAGE@@YAGXZ.c)
 */

__int64 __fastcall RtlWCSMessageWParamCharToMB(int a1, unsigned __int16 *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned __int16 v11; // ax
  ULONG BytesInUnicodeString; // edx
  unsigned __int64 v13; // rcx
  unsigned int MultiByteString; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 - 47;
  if ( v3 )
  {
    v4 = v3 - 157;
    if ( v4 )
    {
      v5 = v4 - 54;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 3;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 8;
              if ( v9 )
              {
                v10 = v9 - 17;
                if ( v10 )
                {
                  if ( v10 != 358 )
                    return 1LL;
                }
              }
            }
          }
        }
      }
    }
  }
  v11 = THREAD_CODEPAGE();
  MultiByteString = 0;
  BytesInUnicodeString = (*gpsi & 2) != 0 ? 2 : 4;
  if ( v11 != NlsAnsiCodePage && v11 )
  {
    if ( (unsigned int)ConvertToAndFromWideChar(v11, a2, BytesInUnicodeString, (char *)&MultiByteString, 4u, 0) )
      goto LABEL_13;
LABEL_17:
    *(_QWORD *)a2 = 0LL;
    return 1LL;
  }
  if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, a2, BytesInUnicodeString) < 0 )
    goto LABEL_17;
LABEL_13:
  if ( (*gpsi & 2) != 0 )
  {
    if ( (MultiByteString & 0xFF00) != 0 )
      v13 = ((unsigned __int64)(unsigned __int16)MultiByteString >> 8) | (((unsigned __int8)MultiByteString | ((unsigned __int64)a2[1] << 8)) << 8);
    else
      v13 = (unsigned __int8)MultiByteString;
    *(_QWORD *)a2 = v13;
  }
  else
  {
    *(_QWORD *)a2 = MultiByteString;
  }
  return 1LL;
}
