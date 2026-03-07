struct CInputPointerNode *__fastcall CTouchProcessor::FindNodeById(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        int a4)
{
  _QWORD **v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  bool v11; // zf
  bool v12; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8626);
  v8 = (_QWORD **)((char *)this + (a3 != 0 ? 88LL : 72LL));
  v9 = *v8;
  if ( *v8 == v8 )
    return 0LL;
  do
  {
    v10 = v9 - 2;
    if ( !a3 )
      v10 = v9;
    if ( a4 )
      v11 = *((_WORD *)v10 + 17) == a2;
    else
      v11 = *((_WORD *)v10 + 16) == a2;
    if ( v11 )
      break;
    v9 = (_QWORD *)*v9;
  }
  while ( v9 != v8 );
  if ( v9 == v8 )
    return 0LL;
  if ( a4 )
    v12 = *((_WORD *)v10 + 17) == a2;
  else
    v12 = *((_WORD *)v10 + 16) == a2;
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8664);
  return (struct CInputPointerNode *)v10;
}
