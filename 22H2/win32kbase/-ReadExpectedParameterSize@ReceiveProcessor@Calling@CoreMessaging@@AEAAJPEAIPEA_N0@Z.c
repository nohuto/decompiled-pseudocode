/*
 * XREFs of ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C00A7CCC
 * Callers:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C00A7CCC (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x1C00AA7E0 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C00A7CCC (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0200DC8 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
        CoreMessaging::Calling::ReceiveProcessor *this,
        unsigned int *a2,
        bool *a3,
        unsigned int *a4)
{
  unsigned __int8 *v4; // rax
  int v8; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r8d
  int v16; // edx
  __int64 result; // rax
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  __int64 v25; // rcx
  int v26; // r10d
  unsigned __int64 v27; // rax
  bool v28; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+50h] [rbp+18h] BYREF

  v4 = (unsigned __int8 *)*((_QWORD *)this + 1);
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = *v4;
  *((_QWORD *)this + 1) = v4 + 1;
  if ( (unsigned __int8)v8 <= 9u )
  {
    if ( (_BYTE)v8 != 9 )
    {
      v18 = v8 - 1;
      if ( !v18 )
        goto LABEL_21;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_22;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_18;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_23;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_21;
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_22:
        *a2 = 2;
        return 0LL;
      }
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 1 )
          goto LABEL_25;
LABEL_23:
        *a2 = 8;
        return 0LL;
      }
    }
LABEL_18:
    *a2 = 4;
    return 0LL;
  }
  v10 = v8 - 10;
  if ( !v10 )
    goto LABEL_23;
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_22;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_21:
    *a2 = 1;
    return 0LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v25 = *((_QWORD *)this + 52);
    if ( !v25 )
      return 0LL;
    v27 = *((unsigned int *)this + 21);
    if ( (v27 & 1) == 0 && !*(_WORD *)(v25 + 2 * (v27 >> 1) - 2) )
      return 0LL;
LABEL_32:
    *((_DWORD *)this + 30) = 202;
    return 2147942487LL;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v15 = v4[1];
    *((_QWORD *)this + 1) = v4 + 2;
    v16 = v15 | (v4[2] << 8);
    *((_QWORD *)this + 1) = v4 + 3;
    *a2 = v16;
    return 0LL;
  }
  v26 = v14 - 1;
  if ( !v26 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x1FAuLL);
  if ( v26 != 1 )
  {
LABEL_25:
    *((_DWORD *)this + 30) = 205;
    return 2147942487LL;
  }
  v29 = 0;
  v28 = 0;
  v30 = 0;
  result = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(this, &v29, &v28, &v30);
  if ( (int)result >= 0 )
  {
    *a3 = 1;
    if ( !*((_QWORD *)this + 52) )
      return 0LL;
    if ( !(*((_DWORD *)this + 21) % v29) )
    {
      *a4 = *((_DWORD *)this + 21) / v29;
      return 0LL;
    }
    goto LABEL_32;
  }
  return result;
}
