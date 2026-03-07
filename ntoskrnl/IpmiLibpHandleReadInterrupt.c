__int64 __fastcall IpmiLibpHandleReadInterrupt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  int v6; // edi
  __int64 result; // rax
  _WORD *v8; // r8
  __int64 v9; // rdx
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  v10[0] = 0;
  LOBYTE(v11) = 0;
  v6 = a4;
  if ( !qword_140C2C7D0 )
    return 3221225485LL;
  result = qword_140C2C7D0(qword_140C2C7D8, &WheaIpmiContext, a2, &v11, v10, 0);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)v11 )
    {
      switch ( (unsigned __int8)v11 )
      {
        case 1u:
          return 258LL;
        case 2u:
          return 0LL;
        case 0xFFu:
          return 3221225534LL;
        default:
          return 3221225473LL;
      }
    }
    else
    {
      IpmiLibWriteOneByte(0LL, 0, 0x68u);
      v8 = a5;
      v9 = *a5;
      if ( (int)v9 <= v6 - 1 )
      {
        *(_BYTE *)(v9 + a3) = v10[0];
        *v8 = v9 + 1;
      }
      return 261LL;
    }
  }
  return result;
}
