/*
 * XREFs of ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C005CDE8
 * Callers:
 *     ?CreateInstance@CHidInput@@SAJPEAPEAV1@@Z @ 0x1C005C718 (-CreateInstance@CHidInput@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x1C005C7B8 (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1C005C8DC (--0CMouseSensor@@IEAA@XZ.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C005CE7C (--0CRIMBase@@IEAA@K@Z.c)
 */

__int64 __fastcall CBaseInput::CBaseInput(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 result; // rax

  v4 = a4;
  v6 = a3;
  CRIMBase::CRIMBase((CRIMBase *)a1, a2);
  *(_QWORD *)(a1 + 1256) = 0LL;
  *(_QWORD *)a1 = &CBaseInput::`vftable';
  *(_QWORD *)(a1 + 1280) = &CBaseInput::ivOnChildPartitionConnected;
  *(_QWORD *)(a1 + 1288) = CBaseInput::ivOnPacketReceived;
  *(_QWORD *)(a1 + 1296) = CBaseInput::ivPreReceiveCallback;
  *(_QWORD *)(a1 + 1264) = v4;
  *(_DWORD *)(a1 + 1304) = 0;
  *(_BYTE *)(a1 + 1308) = 0;
  *(_DWORD *)(a1 + 1272) = v6;
  *(_QWORD *)(a1 + 1312) = 0LL;
  result = a1;
  qword_1C02A05C8[v6] = a1 + 1264;
  return result;
}
