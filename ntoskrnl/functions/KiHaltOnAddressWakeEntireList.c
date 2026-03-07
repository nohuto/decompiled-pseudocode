void *__fastcall KiHaltOnAddressWakeEntireList(__int64 a1)
{
  void *result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _DWORD v8[68]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(&v8[2], 0, 0x100uLL);
  v3 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v3 )
  {
    v8[0] = 2097153;
    memset(&v8[1], 0, 0x104uLL);
    while ( 1 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = *(_QWORD *)(v3 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v3 + 24), 1) )
      {
        v6 = *(_QWORD *)(v4 + 200);
        v7 = *(unsigned __int8 *)(v4 + 208);
        if ( LOWORD(v8[0]) > (unsigned __int16)v7 )
          goto LABEL_7;
        if ( HIWORD(v8[0]) > (unsigned __int16)v7 )
          break;
      }
LABEL_8:
      v3 = v5;
      if ( !v5 )
        return (void *)HalRequestIpi(0, (__int64)v8);
    }
    LOWORD(v8[0]) = v7 + 1;
LABEL_7:
    *(_QWORD *)&v8[2 * v7 + 2] |= v6;
    goto LABEL_8;
  }
  return result;
}
