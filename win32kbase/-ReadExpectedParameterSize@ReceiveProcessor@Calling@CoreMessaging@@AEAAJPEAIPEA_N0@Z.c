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
  int v15; // r10d
  int v16; // r8d
  int v17; // edx
  __int64 result; // rax
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
  if ( (unsigned __int8)v8 <= 8u )
  {
    if ( (_BYTE)v8 == 8 )
      goto LABEL_26;
    if ( !v8 )
      goto LABEL_23;
    v19 = v8 - 1;
    if ( !v19 )
    {
LABEL_24:
      *a2 = 1;
      return 0LL;
    }
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_25;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_20;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_26;
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_24;
    v24 = v23 - 1;
    if ( !v24 )
    {
LABEL_25:
      *a2 = 2;
      return 0LL;
    }
    if ( v24 != 1 )
      goto LABEL_23;
LABEL_20:
    *a2 = 4;
    return 0LL;
  }
  v10 = v8 - 9;
  if ( !v10 )
    goto LABEL_20;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_26:
    *a2 = 8;
    return 0LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_25;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_24;
  v14 = v13 - 1;
  if ( !v14 )
  {
    v25 = *((_QWORD *)this + 52);
    if ( !v25 )
      return 0LL;
    v27 = *((unsigned int *)this + 21);
    if ( (v27 & 1) == 0 && !*(_WORD *)(v25 + 2 * (v27 >> 1) - 2) )
      return 0LL;
LABEL_33:
    *((_DWORD *)this + 30) = 202;
    return 2147942487LL;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = v4[1];
    *((_QWORD *)this + 1) = v4 + 2;
    v17 = v16 | (v4[2] << 8);
    *((_QWORD *)this + 1) = v4 + 3;
    *a2 = v17;
    return 0LL;
  }
  v26 = v15 - 1;
  if ( !v26 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x1E6uLL);
  if ( v26 != 1 )
  {
LABEL_23:
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
    goto LABEL_33;
  }
  return result;
}
