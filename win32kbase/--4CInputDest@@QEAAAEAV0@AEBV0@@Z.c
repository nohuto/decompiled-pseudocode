__int64 __fastcall CInputDest::operator=(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != a2 )
  {
    v4 = (__int64 *)(a1 + 80);
    if ( !*(_BYTE *)(a1 + 112) || *(_QWORD *)(a2 + 80) != *v4 )
    {
      CInputDest::SetEmpty((CInputDest *)a1);
      if ( *(_DWORD *)(a2 + 92) )
      {
        if ( *v4 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 161);
        v6[1] = *(__int64 **)(a2 + 80);
        v6[0] = v4;
        HMAssignmentLock(v6, 1);
      }
    }
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  }
  return a1;
}
