__int64 __fastcall rimExtractTouchInfo(__int64 a1, int a2, _DWORD *a3)
{
  int v4; // ecx
  __int64 result; // rax
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  v9 = 0;
  v8 = 0;
  if ( (unsigned int)(v4 - 1) > 3 && v4 != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3019);
  a3[6] = rimExtractData(a1, 13, 72, 1, &v9);
  a3[7] = rimExtractData(a1, 13, 73, 1, &v8);
  if ( v9 == v8 && v8 == 1 )
    a3[41] |= 1u;
  a3[5] = 1;
  if ( (*(_DWORD *)(a1 + 360) & 0x8000) != 0 )
  {
    a3[51] = rimExtractData(a1, 13, 48, 4, a3 + 41);
  }
  else if ( a2 )
  {
    a3[41] |= 4u;
    a3[51] = 512;
  }
  result = rimExtractData(a1, 13, 63, 2, a3 + 41);
  a3[50] = result;
  return result;
}
