/*
 * XREFs of ListTableIteratorNext @ 0x1C01828D8
 * Callers:
 *     RIMCmActiveContactsNext @ 0x1C017FD8C (RIMCmActiveContactsNext.c)
 *     ListTableBegin @ 0x1C0182788 (ListTableBegin.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableEnd @ 0x1C018283C (ListTableEnd.c)
 */

__int64 __fastcall ListTableIteratorNext(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r10
  unsigned int v9; // r9d
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // xmm1_8
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  if ( !*a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 81);
    v2 = *a2;
  }
  if ( *((_DWORD *)a2 + 2) >= *(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 82);
  v5 = *(_QWORD *)a2[2];
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v6 = *(_QWORD *)a1;
  v7 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v5;
  v8 = *(_QWORD *)v6;
  if ( v5 == *(_QWORD *)v6 + 16LL * v7 )
  {
    v9 = *(_DWORD *)(v6 + 8);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 8) = ++v7;
      if ( v7 >= v9 )
        break;
      v10 = (_QWORD *)(v8 + 16LL * v7);
      v11 = (_QWORD *)*v10;
      *(_QWORD *)(a1 + 16) = *v10;
      if ( v11 != v10 )
        return a1;
    }
    if ( v7 != v9 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 99);
      v6 = *(_QWORD *)a1;
    }
    v12 = ListTableEnd((__int64)v15, v6);
    v13 = *(_QWORD *)(v12 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v12;
    *(_QWORD *)(a1 + 16) = v13;
  }
  return a1;
}
