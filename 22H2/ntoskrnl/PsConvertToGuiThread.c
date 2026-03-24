/*
 * XREFs of PsConvertToGuiThread @ 0x140683840
 * Callers:
 *     KiConvertToGuiThread @ 0x1404021A0 (KiConvertToGuiThread.c)
 * Callees:
 *     SeCaptureAtomTableCallout @ 0x140314314 (SeCaptureAtomTableCallout.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     PsQuerySectionSignatureInformation @ 0x140683970 (PsQuerySectionSignatureInformation.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x14093C480 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int Blink; // esi
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  __int64 result; // rax
  int v8; // esi
  int v9; // edi
  _KPROCESS *v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+2Ch] [rbp-14h]
  struct _KTHREAD *v13; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+3Ch] [rbp-4h]
  char v16; // [rsp+60h] [rbp+20h] BYREF

  v12 = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  Blink = (int)Process[2].ReadyListHead.Blink;
  if ( (Blink & 0x1000) != 0 || ((__int64)Process[2].ReadyListHead.Blink & 0x2000) != 0 )
  {
    EtwTimLogProhibitWin32kSystemCalls((unsigned int)((Blink & 0x1000) != 0) + 1, CurrentThread->ApcState.Process);
    if ( (Blink & 0x1000) != 0 )
      return 3221225506LL;
  }
  v3 = 1;
  v10 = Process;
  v11 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v16) >= 0 )
  {
    v6 = (char)qword_140C1DB20;
    if ( qword_140C1DB20 )
    {
      LOBYTE(v5) = v16;
      LOBYTE(v4) = 12;
      v6 = qword_140C1DB20(v5, v4);
      v3 = v11;
    }
    v11 = ((unsigned __int8)v3 ^ (unsigned __int8)(2 * v6)) & 2 ^ v3;
  }
  result = PsInvokeWin32Callout(0, (__int64)&v10, 0, 0LL);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v8 = Blink & 0xC000;
    if ( v8 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v14 = 0;
    v13 = CurrentThread;
    v9 = PsInvokeWin32Callout(1, (__int64)&v13, 0, 0LL);
    if ( v9 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
      if ( v8 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v9;
  }
  return result;
}
