_QWORD *__fastcall CTouchProcessor::FindFrameById(struct _KTHREAD **a1, int a2, int a3)
{
  _QWORD **v4; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edx

  v4 = (_QWORD **)(a1 + 7);
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8073);
  v6 = *v4;
  if ( *v4 == v4 )
    return 0LL;
  do
  {
    v7 = v6 - 1;
    v8 = *((_DWORD *)v6 + 8);
    if ( v8 == a2 )
      break;
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != v4 );
  if ( v6 == v4 )
    return 0LL;
  if ( v8 != a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8099);
  if ( *((_DWORD *)v7 + 56) != a3 )
    return 0LL;
  return v7;
}
