/*
 * XREFs of ?InitializeKeyboardGlobals@@YAJXZ @ 0x1C009737C
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1C0096E3C (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C009755C (ApiSetEditionGetExecutionEvironment.c)
 */

__int64 __fastcall InitializeKeyboardGlobals(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-20h]

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  *(_QWORD *)&v8 = 0x3000C00010004LL;
  *((_QWORD *)&v8 + 1) = 104LL;
  *(_OWORD *)(v4 + 12568) = v8;
  *(_QWORD *)(v4 + 12584) = 0xFA00020000LL;
  *(_DWORD *)(v4 + 12592) = 65536030;
  *(_QWORD *)(v4 + 13760) = &unk_1C0279410;
  *(_DWORD *)(v4 + 13940) = -1;
  *(_DWORD *)(v4 + 13944) = -1;
  *(_DWORD *)(v4 + 12612) = 15;
  *(_DWORD *)(v4 + 12660) = -1;
  *(_DWORD *)(v4 + 13768) = 9502864;
  *(_DWORD *)(v4 + 13820) = 1;
  *(_QWORD *)(v4 + 13952) = -1LL;
  *(_WORD *)(v4 + 13989) = 4359;
  *(_BYTE *)(v4 + 14160) = (unsigned int)ApiSetEditionGetExecutionEvironment(-1LL, 1LL, v5, v6) == 2;
  return 0LL;
}
