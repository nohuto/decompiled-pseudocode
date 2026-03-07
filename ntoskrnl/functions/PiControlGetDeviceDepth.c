__int64 __fastcall PiControlGetDeviceDepth(__int64 a1, void **a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  unsigned int DeviceDepth; // ebx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(unsigned __int16 *)a2;
  v9 = 0LL;
  WORD1(v9) = v4;
  LOWORD(v9) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((void **)&v9 + 1, a2[1], v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    DeviceDepth = PiGetDeviceDepth(&v9, a2 + 2);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v9 + 1));
    return DeviceDepth;
  }
  return result;
}
