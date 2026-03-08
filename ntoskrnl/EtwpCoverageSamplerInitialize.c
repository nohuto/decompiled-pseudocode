/*
 * XREFs of EtwpCoverageSamplerInitialize @ 0x1409F0364
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall EtwpCoverageSamplerInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x6C8uLL);
  *(_QWORD *)(a1 + 1192) = 0LL;
  *(_DWORD *)(a1 + 1648) = 1;
  *(_QWORD *)(a1 + 1248) = a1 + 1240;
  *(_QWORD *)(a1 + 1240) = a1 + 1240;
  *(_QWORD *)(a1 + 1208) = 0LL;
  *(_QWORD *)(a1 + 1216) = 0LL;
  *(_QWORD *)(a1 + 1224) = 0LL;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_OWORD *)(a1 + 1264) = 0LL;
  *(_OWORD *)(a1 + 1280) = 0LL;
  *(_OWORD *)(a1 + 1296) = 0LL;
  *(_QWORD *)(a1 + 1312) = 0LL;
  result = a1 + 1680;
  *(_QWORD *)(a1 + 1272) = 0LL;
  *(_QWORD *)(a1 + 1264) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1;
  *(_DWORD *)(a1 + 1724) = 1;
  *(_QWORD *)(a1 + 1688) = a1 + 1680;
  *(_QWORD *)(a1 + 1680) = a1 + 1680;
  return result;
}
