/*
 * XREFs of ApiSetEditionIsPointerInputRedirected @ 0x1C02069E4
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95F4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsPointerInputRedirected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( qword_1C0296910 && (int)qword_1C0296910() >= 0 && qword_1C0296918 )
    return (unsigned int)qword_1C0296918(a1, a2, a3);
  return v3;
}
