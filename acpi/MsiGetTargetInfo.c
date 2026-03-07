__int64 __fastcall MsiGetTargetInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[12]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x5CuLL);
  result = ProcessorGetMsiConnectionData(a1);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a3 = v6[10];
    *(_WORD *)(a3 + 8) = v6[11];
  }
  return result;
}
