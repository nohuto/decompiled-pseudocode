__int64 *__fastcall RIMCmActiveContactsNext(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 *result; // rax
  __int64 v6; // xmm0_8
  __int64 v7[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 1000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 479);
  if ( *(_QWORD *)a2 != a1 + 992 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 480);
  v4 = (_QWORD *)ListTableEnd((__int64)v7, *(_QWORD *)a2);
  if ( *(_QWORD *)a2 == *v4 && *(_DWORD *)(a2 + 8) == (unsigned int)v4[1] && *(_QWORD *)(a2 + 16) == v4[2] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 481);
  result = ListTableIteratorNext(v7, a2);
  v6 = result[2];
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}
