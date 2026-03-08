/*
 * XREFs of CmpCreateObjectTypes @ 0x140B51E7C
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 */

__int64 CmpCreateObjectTypes()
{
  _QWORD v1[16]; // [rsp+20h] [rbp-29h] BYREF

  memset(v1, 0, 0x78uLL);
  v1[6] = 0LL;
  v1[7] = 0LL;
  BYTE3(v1[0]) |= 1u;
  LOWORD(v1[0]) = 120;
  v1[3] = 0xF003F000F003FLL;
  v1[1] = 0x2001900000030LL;
  BYTE2(v1[0]) = BYTE2(v1[0]) & 0xE2 | 0xD;
  v1[8] = CmpCloseKeyObject;
  v1[9] = CmpDeleteKeyObject;
  v1[10] = CmpParseKey;
  v1[11] = CmpSecurityMethod;
  v1[12] = CmpQueryKeyName;
  v1[2] = 0x2003900020006LL;
  LODWORD(v1[5]) = 112;
  HIDWORD(v1[4]) = 1;
  HIDWORD(v1[0]) = 256;
  return ObCreateObjectType((const UNICODE_STRING *)&CmpKeyTypeNameString, (__int64)v1, 0LL, (__int64)&CmKeyObjectType);
}
