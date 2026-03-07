__int64 *__fastcall ListTableIteratorNext(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // r8
  unsigned int v6; // edx
  __int64 v7; // r9
  unsigned int v8; // r8d
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 81);
  if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(*(_QWORD *)a2 + 8LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 82);
  v4 = **(_QWORD **)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v5 = (__int64 *)*a1;
  v6 = *((_DWORD *)a1 + 2);
  a1[2] = v4;
  v7 = *v5;
  if ( v4 == *v5 + 16LL * v6 )
  {
    v8 = *((_DWORD *)v5 + 2);
    while ( 1 )
    {
      *((_DWORD *)a1 + 2) = ++v6;
      if ( v6 >= v8 )
        break;
      v9 = (_QWORD *)(v7 + 16LL * v6);
      v10 = (_QWORD *)*v9;
      a1[2] = *v9;
      if ( v10 != v9 )
        return a1;
    }
    if ( v6 != v8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 99);
    v11 = ListTableEnd((__int64)v14, *a1);
    v12 = *(_QWORD *)(v11 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v11;
    a1[2] = v12;
  }
  return a1;
}
