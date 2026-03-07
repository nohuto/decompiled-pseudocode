__int64 __fastcall PspSyscallProviderServiceDispatch(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD, _QWORD),
        char a3)
{
  __int64 result; // rax
  _BYTE v6[136]; // [rsp+20h] [rbp-88h] BYREF

  if ( (a3 & 0xF) == 0 )
    return a2(a1[7], a1[8], a1[9], a1[10]);
  result = PspCaptureSystemServiceInMemoryArgs((void *)(a1[48] + 40LL), v6);
  if ( (int)result >= 0 )
    return a2(a1[7], a1[8], a1[9], a1[10]);
  return result;
}
