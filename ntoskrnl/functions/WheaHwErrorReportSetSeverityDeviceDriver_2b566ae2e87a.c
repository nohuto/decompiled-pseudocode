__int64 WheaHwErrorReportSetSeverityDeviceDriver()
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 v3; // rax

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  v3 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 52) = v0;
  *(_DWORD *)(v3 + 20) = v0;
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 20LL) &= ~0x40000000u;
  *(_DWORD *)(*(_QWORD *)(v1 + 40) + 20LL) |= 0x80000000;
  return 0LL;
}
