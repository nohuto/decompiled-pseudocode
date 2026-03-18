/*
 * XREFs of GreDxgkPreSessionDisconnected @ 0x1C0123804
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0123098 (xxxRemoteDisconnect.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreDxgkPreSessionDisconnected(char a1)
{
  __int64 v2; // rcx
  char v3; // [rsp+38h] [rbp+10h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v3);
  LOBYTE(v2) = a1;
  ((void (__fastcall *)(__int64))gDxgkInterface[46])(v2);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v3);
}
