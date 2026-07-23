/*
 * XREFs of RtlLargeIntegerToChar @ 0x140663A00
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x140663720 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v6; // r9d
  int v7; // r10d
  char *v8; // r14
  unsigned __int64 QuadPart; // rax
  unsigned int v10; // r8d
  int v11; // esp
  __int64 v12; // rsi
  bool v13; // cc
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rtt
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  if ( Base )
  {
    if ( Base == 16 )
    {
      v6 = 4;
LABEL_4:
      v7 = (1 << v6) - 1;
      goto LABEL_5;
    }
    if ( Base != 10 )
    {
      if ( Base == 2 )
      {
        v6 = 1;
      }
      else
      {
        if ( Base != 8 )
          return -1073741811;
        v6 = 3;
      }
      goto LABEL_4;
    }
  }
  else
  {
    Base = 10;
  }
  v6 = 0;
  v7 = 0;
LABEL_5:
  v8 = &v18;
  QuadPart = Value->QuadPart;
  if ( v6 )
  {
    do
    {
      v10 = QuadPart;
      QuadPart >>= v6;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (v7 & v10));
    }
    while ( QuadPart );
  }
  else
  {
    v15 = Base;
    do
    {
      v16 = QuadPart;
      QuadPart /= v15;
      *(_QWORD *)&Base = v16 % v15;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (unsigned int)(v16 % v15));
    }
    while ( QuadPart );
  }
  v12 = (unsigned int)(v11 + 97 - (_DWORD)v8);
  if ( OutputLength >= 0 )
    goto LABEL_8;
  OutputLength = -OutputLength;
  v13 = (int)v12 <= OutputLength;
  if ( (int)v12 < OutputLength )
  {
    v17 = (unsigned int)(OutputLength - v12);
    LOBYTE(Base) = 48;
    memset(String, Base, v17);
    OutputLength = v12;
    String += v17;
LABEL_8:
    v13 = (int)v12 <= OutputLength;
  }
  if ( !v13 )
    return -2147483643;
  memmove(String, v8, (unsigned int)v12);
  if ( (int)v12 < OutputLength )
    String[v12] = 0;
  return 0;
}
