_QWORD *__fastcall KiStartPrcbThread(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rbx
  unsigned __int16 *v5; // rbx
  __int64 v6; // rcx
  unsigned __int16 *v7; // r8
  int v8; // eax
  _QWORD *v9; // rsi
  _QWORD *result; // rax
  _DWORD v11[68]; // [rsp+20h] [rbp-138h] BYREF

  v11[0] = 2097153;
  memset(&v11[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v11, 0);
  KeStartThread(a1, (unsigned __int16 *)v11, 0LL);
  v4 = *(unsigned __int16 **)(a1 + 576);
  memset(v4 + 4, 0, 8LL * *v4);
  *v4 = 1;
  v5 = *(unsigned __int16 **)(a1 + 552);
  memset(v5 + 4, 0, 8LL * *v5);
  *v5 = 1;
  KeAddProcessorAffinityEx(*(unsigned __int16 **)(a1 + 552), *(_DWORD *)(a2 + 36));
  v6 = *(_QWORD *)(a1 + 576);
  v7 = *(unsigned __int16 **)(a1 + 552);
  *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(a2 + 208);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 36);
  KiCopyAffinityEx(v6, *(_WORD *)(v6 + 2), v7);
  *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(a2 + 208);
  *(_DWORD *)(a1 + 588) = *(_DWORD *)(a2 + 36);
  v8 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 116) |= 8u;
  *(_DWORD *)(a1 + 536) = v8;
  *(_BYTE *)(a1 + 195) = 63;
  v9 = (_QWORD *)(a1 + 1336);
  result = (_QWORD *)qword_140D4A528;
  if ( *(_UNKNOWN **)qword_140D4A528 != &unk_140D4A520 )
    __fastfail(3u);
  *v9 = &unk_140D4A520;
  v9[1] = result;
  *result = v9;
  qword_140D4A528 = (__int64)v9;
  return result;
}
