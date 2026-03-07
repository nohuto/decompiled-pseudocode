int __fastcall MiFillMapFileInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r15
  int v6; // r13d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int SessionId; // eax
  unsigned __int64 v13; // rcx
  __int64 VadEvent; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = v7 << 12;
  v9 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = (v9 - v7 + 1) << 12;
  if ( !*(_QWORD *)(v4 + 64) )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 16) = 0xC0000000000000LL;
    goto LABEL_10;
  }
  v11 = MiReferenceControlAreaFile(v4);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 24);
  MiDereferenceControlAreaFile(v4, v11);
  MiGetProtoPteAddress(a1, v7, 0, &v19);
  SessionId = MmGetSessionIdEx(v5);
  v13 = *(_QWORD *)(a2 + 16) ^ (*(_QWORD *)(a2 + 16) ^ MiStartingOffset(v19, *(_QWORD *)(a1 + 80), SessionId)) & 0xFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 16) = v13;
  if ( (v6 & 0x70) != 0x20 )
  {
    v15 = v13 & 0xFF3FFFFFFFFFFFFFuLL;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0xF80) != 0x380 )
  {
    v15 = v13 & 0xFF3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
LABEL_9:
    *(_QWORD *)(a2 + 16) = v15;
    goto LABEL_10;
  }
  *(_QWORD *)(a2 + 16) = v13 & 0xFF3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
  if ( (unsigned int)MiVadMapsLargeImage(a1) )
  {
    VadEvent = MiLocateVadEvent();
    v8 += (unsigned __int64)*(unsigned __int8 *)(VadEvent + 8) << 16;
    v10 = *(_QWORD *)(VadEvent + 16) << 12;
  }
LABEL_10:
  v16 = ((unsigned __int64)(*(_DWORD *)(a1 + 64) & 0x1000000) << 29) | *(_QWORD *)(a2 + 16) & 0xFFDFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a2 + 16) = v16;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v5 + 1088);
  *(_QWORD *)a2 = v8;
  *(_QWORD *)(a2 + 24) = v10;
  *(_QWORD *)(a2 + 16) = v16 ^ (v16 ^ ((unsigned __int64)*(unsigned int *)(a1 + 48) << 41)) & 0x1F000000000000LL;
  v17 = *(unsigned int *)(a1 + 52);
  LODWORD(v17) = v17 & 0x7FFFFFFF;
  *(_QWORD *)(a2 + 32) = (v17 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) << 12;
  return v17;
}
