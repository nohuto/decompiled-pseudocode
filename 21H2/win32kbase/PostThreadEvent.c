/*
 * XREFs of PostThreadEvent @ 0x1C01AEDB0
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1C012B360 (NtMITPostThreadEventMessage.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C0E58 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall PostThreadEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  bool v11; // bl
  _BYTE v13[24]; // [rsp+40h] [rbp-18h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  v10 = (int)qword_1C0258170;
  if ( qword_1C0258170 )
    v10 = qword_1C0258170(30LL, a1, a2, a3, a4, a5, a6);
  v11 = v10 != 0;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  return v11;
}
