__int64 __fastcall EtwpRealtimeSendEmptyMarker(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax
  _DWORD v4[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(v4, 0, 0x48uLL);
  EtwpInitializeBufferHeader((__int16 *)a1, v4);
  LOWORD(v4[13]) &= ~0x100u;
  EtwpResetBufferHeader((__int64)v4, 6);
  v2 = *(_DWORD *)(a1 + 344) == 0;
  result = 1LL;
  LOWORD(v4[13]) = 1;
  v4[11] = 3;
  v4[12] = 72;
  if ( v2 || (result = EtwpRealtimeDeliverBuffer(a1, (__int64)v4), (int)result < 0) )
  {
    if ( !_bittest((const signed __int32 *)(a1 + 12), 0x1Cu) )
    {
      result = *(unsigned int *)(a1 + 816);
      if ( (result & 0x10000000) == 0 )
        return EtwpRealtimeSaveBuffer(a1, (__int64)v4);
    }
  }
  return result;
}
