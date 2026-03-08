/*
 * XREFs of HdlspPutWideString @ 0x140AE830C
 * Callers:
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     HdlspUTF8Encode @ 0x140604540 (HdlspUTF8Encode.c)
 *     HdlspSendStringAtBaud @ 0x140AE8474 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspPutWideString(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rbx
  KSPIN_LOCK v2; // rdi
  _BYTE *v3; // r9
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned int i; // edx
  char v7; // cl
  __int16 v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+32h] [rbp+Ah]

  v1 = a1;
  v9 = 0;
  v10 = 0;
  v2 = HeadlessGlobals[3];
  v3 = (_BYTE *)v2;
  v4 = (_BYTE *)(v2 + 79);
  while ( *v1 )
  {
    if ( v3 < v4 )
    {
      HdlspUTF8Encode(*v1, &v9);
      v5 = 0LL;
      for ( i = 0; i < 3; ++i )
      {
        v7 = *((_BYTE *)&v9 + v5);
        if ( v7 )
        {
          *v3++ = v7;
          if ( v5 >= 3 )
            _report_rangecheckfailure();
          *((_BYTE *)&v9 + v5) = 0;
        }
        ++v5;
      }
      ++v1;
    }
    else
    {
      *v4 = 0;
      HdlspSendStringAtBaud(v2);
      v3 = (_BYTE *)HeadlessGlobals[3];
    }
  }
  *v3 = 0;
  return HdlspSendStringAtBaud(v2);
}
