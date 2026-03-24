/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C012C050
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00413C0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00414F4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0042194 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     SynthesizeMitTouchInput @ 0x1C01B398C (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(char *Src, __int64 a2, __int64 a3, __int64 a4)
{
  CInputThread *v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 *v10[2]; // [rsp+30h] [rbp-B88h] BYREF
  _BYTE Srca[1456]; // [rsp+40h] [rbp-B78h] BYREF
  _BYTE v12[1456]; // [rsp+5F0h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v10, "MITSynthesizeTouchInput", 0LL, a4);
  EnterCrit(0, 1);
  memset(v12, 0, sizeof(v12));
  v7 = 0;
  if ( CInputThread::IsInputThread(v5) )
  {
    if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
      Src = (char *)MmUserProbeAddress;
    memmove(Srca, Src, 0x5B0uLL);
    memmove(v12, Srca, 0x5B0uLL);
    if ( (unsigned __int8)SynthesizeMitTouchInput(v12) )
    {
      v7 = 1;
      goto LABEL_10;
    }
    v8 = 5023LL;
  }
  else
  {
    v8 = 5LL;
  }
  UserSetLastError(v8, v6);
LABEL_10:
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v10);
  return v7;
}
