__int64 __fastcall KiInitializeAndStartInitialThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  _DWORD *v8; // rcx
  int v10; // eax
  __int64 v11; // r9
  _QWORD v12[4]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+40h] [rbp-48h]
  void *v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+5Ch] [rbp-2Ch]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v7 = 6;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v7 = 7;
    v10 = *(_DWORD *)(a1 + 1056);
    v11 = *(_QWORD *)(*(_QWORD *)(a4 + 240) + 3712LL) + 4112LL;
    *(_QWORD *)(a1 + 1048) = v11;
    *(_QWORD *)(a1 + 1056) = v10 & 0xFF8 | (v11 - 12288) & 0xFFFFFFFFFFFFF002uLL | 2;
  }
  *(_QWORD *)(a1 + 576) = &KiBootProcessorIdleThreadAffinity;
  *(_QWORD *)(a1 + 552) = &KiBootProcessorIdleThreadUserAffinity;
  KiBootProcessorIdleThreadAffinity = 2097153;
  memset(&unk_140D24E94, 0, 0x104uLL);
  v8 = *(_DWORD **)(a1 + 552);
  v8[1] = 0;
  *v8 = 2097153;
  memset(v8 + 2, 0, 0x100uLL);
  v17 = 0LL;
  v12[2] = 0LL;
  v12[3] = 0LL;
  v14 = &KiInitialProcess;
  v13 = 0LL;
  v15 = 1;
  v12[0] = a2;
  v12[1] = KiIdleLoop;
  v16 = v7;
  KeInitThread(a1, v12);
  *(_QWORD *)(a1 + 1488) = 0LL;
  *(_QWORD *)(a1 + 1632) = &KiIdleThreadName;
  *(_QWORD *)(a1 + 1184) = KiIdleLoop;
  *(_QWORD *)(a1 + 1464) = a1 + 1456;
  *(_QWORD *)(a1 + 1456) = a1 + 1456;
  *(_QWORD *)(a1 + 1312) = KiIdleLoop;
  *(_QWORD *)(a1 + 1480) = a1 + 1472;
  *(_QWORD *)(a1 + 1472) = a1 + 1472;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x15u);
  return KiStartIdleThread(a1, a3, a2);
}
