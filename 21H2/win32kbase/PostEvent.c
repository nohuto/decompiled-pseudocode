/*
 * XREFs of PostEvent @ 0x1C01AEC68
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C0127D0C (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 *     NtMITPostWindowEventMessage @ 0x1C012B480 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     EditionPostInputEvent @ 0x1C00A95A4 (EditionPostInputEvent.c)
 */

char PostEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)va);
  LOBYTE(a4) = (unsigned int)EditionPostInputEvent(30LL, a1, a2, a3, a4, a5) != 0;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)va);
  return a4;
}
