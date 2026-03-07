__int64 __fastcall EtwpSystemImageEnumCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  int v4; // edx
  __int64 v5; // rax

  v3 = *(_QWORD *)(a2 + 8);
  **(_QWORD **)a2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(*(_QWORD *)a2 + 20LL) = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(*(_QWORD *)a2 + 24LL) = *(_DWORD *)(a1 + 156);
  *(_BYTE *)(*(_QWORD *)a2 + 28LL) = *(_BYTE *)(a1 + 110) & 0xF;
  *(_BYTE *)(*(_QWORD *)a2 + 29LL) = (*(_BYTE *)(a1 + 110) >> 4) & 7;
  v4 = *(unsigned __int16 *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(v3 + 28) = 0;
  *(_QWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 24) = v4;
  EtwpLogKernelEvent(
    v3,
    *(_QWORD *)(*(_QWORD *)(a2 + 16) + 1096LL),
    **(_DWORD **)(a2 + 16),
    3u,
    *(_WORD *)(a2 + 24),
    0x401903u);
  return 0LL;
}
