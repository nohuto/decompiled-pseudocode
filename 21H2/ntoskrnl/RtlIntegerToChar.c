/*
 * XREFs of RtlIntegerToChar @ 0x14060F430
 * Callers:
 *     CmLogMcUpdateStatus @ 0x1404ECCD8 (CmLogMcUpdateStatus.c)
 *     RtlIntegerToUnicodeString @ 0x14060F3A0 (RtlIntegerToUnicodeString.c)
 *     CmpInitializeRegistryNode @ 0x1407A6EEC (CmpInitializeRegistryNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  ULONG v11; // edx
  __int64 v12; // rax
  __int64 *v13; // rdx
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

  v6 = Base;
  switch ( Base )
  {
    case 0u:
      v6 = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v8 = 0;
      v9 = 0;
      goto LABEL_4;
    case 0x10u:
      v8 = 4;
      break;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v8 = 3;
      break;
    default:
      return -1073741811;
  }
  v9 = (1 << v8) - 1;
LABEL_4:
  v10 = &v19;
  do
  {
    if ( v8 )
    {
      v11 = Value & v9;
      Value >>= v8;
    }
    else
    {
      v11 = Value % v6;
      Value /= v6;
    }
    --v10;
    v12 = v11;
    v13 = RtlpIntegerChars;
    *v10 = *((_BYTE *)RtlpIntegerChars + v12);
  }
  while ( Value );
  v15 = (unsigned int)(v14 + 65 - (_DWORD)v10);
  if ( OutputLength >= 0 )
    goto LABEL_9;
  OutputLength = -OutputLength;
  v16 = (int)v15 <= OutputLength;
  if ( (int)v15 < OutputLength )
  {
    v18 = (unsigned int)(OutputLength - v15);
    LOBYTE(v13) = 48;
    memset(String, (int)v13, v18);
    OutputLength = v15;
    String += v18;
LABEL_9:
    v16 = (int)v15 <= OutputLength;
  }
  if ( !v16 )
    return -2147483643;
  memmove(String, v10, (unsigned int)v15);
  if ( (int)v15 < OutputLength )
    String[v15] = 0;
  return 0;
}
