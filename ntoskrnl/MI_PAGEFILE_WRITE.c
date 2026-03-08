/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x14065EB48
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v5; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  char Priority; // cl
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 144);
  v7 = *(_QWORD *)(v5 + 248);
  v8 = v7
     + (((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 17912), 1u) + 1) & 0x1F) + 140LL) << 7);
  *(_DWORD *)v8 = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v8 + 7) = a4 != 0;
  *(_BYTE *)(v8 + 5) = Priority;
  *(_BYTE *)(v8 + 6) = a3;
  *(_QWORD *)(v8 + 8) = *a2;
  *(_BYTE *)(v8 + 4) = *(_BYTE *)(v5 + 204) & 0xF;
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(v7 + 17216);
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v7 + 17600);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(v7 + 17824);
  *(_QWORD *)(v8 + 40) = *(_QWORD *)(v7 + 17728);
  *(_QWORD *)(v8 + 64) = *(_QWORD *)(88LL * (*(_WORD *)(v5 + 204) & 0xF) + v7 + 3904);
  *(_QWORD *)(v8 + 48) = *(_QWORD *)(v7 + 3648);
  result = *(_QWORD *)(v7 + 3776);
  *(_QWORD *)(v8 + 56) = result;
  *(_OWORD *)(v8 + 72) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v8 + 104) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v8 + 120) = *(_QWORD *)(a1 + 256);
  return result;
}
