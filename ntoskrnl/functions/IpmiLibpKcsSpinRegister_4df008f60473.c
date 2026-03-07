__int64 __fastcall IpmiLibpKcsSpinRegister(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  int v5; // r15d
  int v7; // ebp
  LARGE_INTEGER v8; // rcx
  LONGLONG v9; // rbx
  unsigned __int8 OneByte; // al
  __int64 v11; // rcx
  __int64 v13; // rcx
  LARGE_INTEGER v14; // rcx
  ULONG v15; // edx
  LARGE_INTEGER v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = dword_140C2C7E8;
  v4 = (unsigned int)dword_140C2C7E4;
  v5 = 0;
  v16.QuadPart = 0LL;
  v7 = a3;
  v8 = KeQueryPerformanceCounter(&v16);
  v9 = v8.QuadPart + v4 * (v16.QuadPart / 1000000);
  while ( 1 )
  {
    ++v5;
    OneByte = IpmiLibReadOneByte(v8.QuadPart, 1u);
    if ( v7 == 1 )
    {
      if ( (OneByte & 1) != 0 )
        return 0LL;
    }
    else
    {
      if ( v7 != 2 )
        return 3221225485LL;
      if ( (OneByte & 2) == 0 )
        return 0LL;
    }
    if ( (unsigned __int8)IpmiLibpTimeAfter(v11, a2) || (unsigned __int8)IpmiLibpTimeAfter(v13, v9) )
      break;
    if ( v3 < 0x32 && v5 == 40 )
      v3 += 100;
    v15 = dword_140C2C7EC;
    if ( v3 < dword_140C2C7EC )
      v15 = v3;
    IpmiLibpDelay(v14, v15);
  }
  return 258LL;
}
