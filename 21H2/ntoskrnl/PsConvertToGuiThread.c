/*
 * XREFs of PsConvertToGuiThread @ 0x1405FE150
 * Callers:
 *     KiConvertToGuiThread @ 0x140402D00 (KiConvertToGuiThread.c)
 * Callees:
 *     SeCaptureAtomTableCallout @ 0x1402396C4 (SeCaptureAtomTableCallout.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PsQuerySectionSignatureInformation @ 0x1405FE280 (PsQuerySectionSignatureInformation.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x14093C600 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  int Blink; // esi
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // al
  __int64 result; // rax
  int v9; // esi
  int v10; // edi
  _KPROCESS *v11; // [rsp+20h] [rbp-20h] BYREF
  int v12; // [rsp+28h] [rbp-18h]
  int v13; // [rsp+2Ch] [rbp-14h]
  struct _KTHREAD *v14; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+38h] [rbp-8h]
  int v16; // [rsp+3Ch] [rbp-4h]
  char v17; // [rsp+60h] [rbp+20h] BYREF

  v13 = 0;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  v17 = 0;
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
  v11 = Process;
  v12 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v17) >= 0 )
  {
    v7 = (char)qword_140C1DB20;
    if ( qword_140C1DB20 )
    {
      LOBYTE(v5) = v17;
      LOBYTE(v4) = 12;
      v7 = qword_140C1DB20(v5, v4, v6);
      v3 = v12;
    }
    v12 = ((unsigned __int8)v3 ^ (unsigned __int8)(2 * v7)) & 2 ^ v3;
  }
  result = PsInvokeWin32Callout(0LL, &v11, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    v9 = Blink & 0xC000;
    if ( v9 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v15 = 0;
    v14 = CurrentThread;
    v10 = PsInvokeWin32Callout(1LL, &v14, 0LL, 0LL);
    if ( v10 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
      if ( v9 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v10;
  }
  return result;
}
