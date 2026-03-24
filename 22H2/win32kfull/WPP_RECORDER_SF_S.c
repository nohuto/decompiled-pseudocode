/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C003B7A4
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CA90 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C010BB74 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6)
{
  __int64 v6; // rdi
  struct RECORDER_LOG__ *v7; // r15
  const char *v8; // rbx
  unsigned __int64 v10; // r11
  int v12; // eax
  __int64 v13; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-18h]
  __int64 v20; // [rsp+48h] [rbp-10h]

  v6 = -1LL;
  v7 = gFullLog;
  v8 = a6;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 4u )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v17,
      v16,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v13 = v6 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(v7, 4LL, a3, a5, v18, v8, v13, 0LL, v19, v20);
}
