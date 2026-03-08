/*
 * XREFs of ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C0096768
 * Callers:
 *     ?CreateInstance@CHidInput@@SAJPEAPEAV1@@Z @ 0x1C00962C8 (-CreateInstance@CHidInput@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x1C009637C (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1C0096430 (--0CMouseSensor@@IEAA@XZ.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C0096848 (--0CRIMBase@@IEAA@K@Z.c)
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
  *(_QWORD *)(a1 + 1320) = SGDGetUserSessionState(v8, v7, v9, v10) + 3232;
  *(_QWORD *)(a1 + 1328) = SGDGetUserSessionState(v12, v11, v13, v14) + 3248;
  v19 = SGDGetUserSessionState(v16, v15, v17, v18);
  *(_QWORD *)(a1 + 1344) = 0LL;
  *(_QWORD *)(a1 + 1336) = v19 + 3256;
  *(_QWORD *)(a1 + 1368) = &CBaseInput::ivOnChildPartitionConnected;
  *(_QWORD *)(a1 + 1376) = CBaseInput::ivOnPacketReceived;
  *(_QWORD *)(a1 + 1384) = CBaseInput::ivPreReceiveCallback;
  *(_QWORD *)(a1 + 1352) = v4;
  *(_DWORD *)(a1 + 1392) = 0;
  *(_BYTE *)(a1 + 1396) = 0;
  *(_DWORD *)(a1 + 1360) = v6;
  *(_QWORD *)(a1 + 1400) = 0LL;
  result = a1;
  qword_1C02D8780[v6] = a1 + 1352;
  return result;
}
