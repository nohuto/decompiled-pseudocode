/*
 * XREFs of MiSetWsleProtection @ 0x14036AB70
 * Callers:
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 * Callees:
 *     MiWriteWsle @ 0x14031A590 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 */

signed __int64 __fastcall MiSetWsleProtection(__int64 a1, unsigned __int64 a2)
{
  char WsleContents; // al
  char v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // r10

  WsleContents = MiGetWsleContents(a1, a2);
  return MiWriteWsle(v4, v5, (16 * (v3 & 7)) | WsleContents & 0x8Fu);
}
