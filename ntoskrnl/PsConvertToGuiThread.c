/*
 * XREFs of PsConvertToGuiThread @ 0x140776D40
 * Callers:
 *     KiConvertToGuiThread @ 0x14041B920 (KiConvertToGuiThread.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1409B1C08 (PspEnsureGuiThreadAndBatchFlush.c)
 * Callees:
 *     SeCaptureAtomTableCallout @ 0x1402EA5D0 (SeCaptureAtomTableCallout.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PsQuerySectionSignatureInformation @ 0x140776E70 (PsQuerySectionSignatureInformation.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1409E7844 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int Blink; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // al
  __int64 result; // rax
  int v7; // esi
  int v8; // edi
  _KPROCESS *v9; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h]
  int v11; // [rsp+2Ch] [rbp-14h]
  struct _KTHREAD *v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+3Ch] [rbp-4h]
  char v15; // [rsp+60h] [rbp+20h] BYREF

  v11 = 0;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
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
  v9 = Process;
  v10 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v15) >= 0 )
  {
    v5 = (char)qword_140C37600;
    if ( qword_140C37600 )
    {
      LOBYTE(v4) = v15;
      LOBYTE(v3) = 12;
      v5 = qword_140C37600(v4, v3);
    }
    v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(2 * v5)) & 2;
  }
  result = PsInvokeWin32Callout(0LL, &v9, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v7 = Blink & 0xC000;
    if ( v7 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v13 = 0;
    v12 = CurrentThread;
    v8 = PsInvokeWin32Callout(1LL, &v12, 0LL, 0LL);
    if ( v8 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
      if ( v7 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v8;
  }
  return result;
}
