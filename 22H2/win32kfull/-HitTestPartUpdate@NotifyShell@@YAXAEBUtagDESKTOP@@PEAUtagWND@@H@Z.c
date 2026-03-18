/*
 * XREFs of ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C0018DD4
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C0018E5C (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     _anonymous_namespace_::NotifyPartExit @ 0x1C0018EE0 (_anonymous_namespace_--NotifyPartExit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C021D290 (_anonymous_namespace_--NotifyPartEnter.c)
 */

void __fastcall NotifyShell::HitTestPartUpdate(
        NotifyShell *this,
        const struct tagDESKTOP *a2,
        struct tagWND *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  const struct tagDESKTOP *v8; // rbx
  int v9; // eax
  const struct tagDESKTOP *v10; // rcx

  v5 = (unsigned int)a3;
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 320) & 1) != 0 )
    {
      LOBYTE(a4) = 1;
      if ( !(unsigned __int8)lambda_a4faeffec317e94db02d9bdb76d95fff_::operator()(
                               this,
                               v6,
                               *((unsigned int *)this + 50),
                               a4) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1516LL);
    }
  }
  v8 = (const struct tagDESKTOP *)*((_QWORD *)this + 24);
  if ( (unsigned __int8)lambda_a4faeffec317e94db02d9bdb76d95fff_::operator()(this, a2, v5, 0LL) )
  {
    v9 = *((_DWORD *)this + 50);
    if ( v8 != a2 )
      goto LABEL_14;
    if ( v9 == v5 )
      return;
    if ( v8 == a2 )
    {
      if ( v9 != v5 )
      {
        v10 = a2;
LABEL_16:
        anonymous_namespace_::NotifyPartExit(v10);
      }
    }
    else
    {
LABEL_14:
      if ( v8 )
      {
        v10 = v8;
        goto LABEL_16;
      }
    }
    anonymous_namespace_::NotifyPartEnter(a2, v5);
    return;
  }
  if ( v8 )
    anonymous_namespace_::NotifyPartExit(v8);
}
