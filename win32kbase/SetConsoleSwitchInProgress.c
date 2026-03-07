int __fastcall SetConsoleSwitchInProgress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rax
  int v6; // edx

  v4 = a1;
  HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  *(_DWORD *)(v5 + 516) = v4;
  if ( gptiCurrent )
  {
    v6 = 0;
    if ( v4 == 1 )
      v6 = 2;
    LODWORD(v5) = *((_DWORD *)gptiCurrent + 318) & 0xFFFFFFFD;
    *((_DWORD *)gptiCurrent + 318) = v5 | v6;
  }
  if ( gpevtVideoportCallout )
  {
    if ( v4 )
      LODWORD(v5) = KeResetEvent(gpevtVideoportCallout);
    else
      LODWORD(v5) = KeSetEvent(gpevtVideoportCallout, 1, 0);
  }
  return v5;
}
