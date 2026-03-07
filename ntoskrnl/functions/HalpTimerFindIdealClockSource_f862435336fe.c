__int64 HalpTimerFindIdealClockSource()
{
  char v0; // di
  __int64 v1; // rbx
  __int64 Timer; // rax
  int v3; // ecx

  v0 = HalpTimerPlatformClockSourceForced;
  v1 = 0LL;
  if ( !HalpTimerPlatformClockSourceForced )
  {
    Timer = HalpFindTimer(7, 96, 24576, 3840, 0);
    if ( Timer )
      goto LABEL_8;
  }
  Timer = HalpFindTimer(10, 544, 0, 80, 0);
  if ( Timer )
    goto LABEL_8;
  if ( !v0 && !HalpHvPresent && HalpProfileInterface != &DefaultProfileInterface )
  {
    Timer = HalpFindTimer(0, 33, 24576, 3840, 0);
    if ( Timer )
      goto LABEL_8;
  }
  Timer = HalpFindTimer(3, 352, 0, 0, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(3, 48, 0, 256, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(3, 96, 0, 3840, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(3, 48, 0, 3840, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(2, 304, 0, 0, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(0, 32864, 24576, 3840, 0);
  if ( Timer )
  {
    if ( *(_QWORD *)(Timer + 192) >= 0x7D0uLL )
      goto LABEL_8;
  }
  if ( (Timer = HalpFindTimer(0, 32816, 24576, 3840, 0)) != 0 && *(_QWORD *)(Timer + 192) >= 0x7D0uLL
    || (Timer = HalpFindTimer(0, 608, 57344, 0, 0)) != 0 && *(_QWORD *)(Timer + 192) >= 0x7D0uLL
    || (Timer = HalpFindTimer(0, 96, 57344, 3840, 0)) != 0 && *(_QWORD *)(Timer + 192) >= 0x7D0uLL
    || (Timer = HalpFindTimer(0, 48, 57344, 3840, 0)) != 0 && *(_QWORD *)(Timer + 192) >= 0x7D0uLL )
  {
LABEL_8:
    v3 = *(_DWORD *)(Timer + 224);
    if ( (v3 & 0x50) != 0 )
      return Timer & -(__int64)((v3 & 0x20) != 0);
  }
  return v1;
}
