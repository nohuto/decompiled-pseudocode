CThreadLockInputDest *__fastcall CThreadLockInputDest::CThreadLockInputDest(
        CThreadLockInputDest *this,
        struct CInputDest *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi

  *(_QWORD *)this = a2;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 80);
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    if ( !*(_DWORD *)(v5 + 92) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1273);
    ThreadLock(*((_QWORD *)this + 1), (_QWORD *)this + 2, a3, a4);
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(this, (char *)this + 40, lambda_49695c4423cfafe8a47d188aee5e3e85_::_lambda_invoker_cdecl_);
    v7 = *(_QWORD *)this;
    if ( !*(_DWORD *)(*(_QWORD *)this + 92LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1145);
    ++*(_BYTE *)(v7 + 112);
  }
  return this;
}
