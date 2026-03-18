/*
 * XREFs of ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C0083400
 * Callers:
 *     ?CreateInstance@CHidInput@@SAJPEAPEAV1@@Z @ 0x1C0083080 (-CreateInstance@CHidInput@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x1C0083134 (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1C00C2538 (--0CMouseSensor@@IEAA@XZ.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C00834E0 (--0CRIMBase@@IEAA@K@Z.c)
 */

__int64 __fastcall CBaseInput::CBaseInput(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 result; // rax

  v4 = a4;
  v6 = a3;
  CRIMBase::CRIMBase((CRIMBase *)a1, a2);
  *(_QWORD *)a1 = &CBaseInput::`vftable';
  *(_QWORD *)(a1 + 1256) = SGDGetUserSessionState(v8, v7, v9, v10) + 3232;
  *(_QWORD *)(a1 + 1264) = SGDGetUserSessionState(v12, v11, v13, v14) + 3248;
  v19 = SGDGetUserSessionState(v16, v15, v17, v18);
  *(_QWORD *)(a1 + 1280) = 0LL;
  *(_QWORD *)(a1 + 1272) = v19 + 3256;
  *(_QWORD *)(a1 + 1304) = &CBaseInput::ivOnChildPartitionConnected;
  *(_QWORD *)(a1 + 1312) = CBaseInput::ivOnPacketReceived;
  *(_QWORD *)(a1 + 1320) = CBaseInput::ivPreReceiveCallback;
  *(_QWORD *)(a1 + 1288) = v4;
  *(_DWORD *)(a1 + 1328) = 0;
  *(_BYTE *)(a1 + 1332) = 0;
  *(_DWORD *)(a1 + 1296) = v6;
  *(_QWORD *)(a1 + 1336) = 0LL;
  result = a1;
  qword_1C02975E8[v6] = a1 + 1288;
  return result;
}
