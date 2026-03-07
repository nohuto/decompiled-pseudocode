__int64 __fastcall EtwpInitStateChangeInfo(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int16 ProcessSessionId; // ax
  __int64 v6; // rcx
  __int16 v7; // r8
  __int16 v8; // ax
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-18h]

  memset((void *)a2, 0, 0x62uLL);
  v4 = *(_DWORD *)(a1 + 1088);
  LODWORD(v10) = v4;
  ProcessSessionId = PsGetProcessSessionId(a1);
  v6 = *(_QWORD *)(a1 + 1128);
  v7 = ProcessSessionId;
  v8 = MEMORY[0xFFFFF780000002C4];
  WORD3(v10) = MEMORY[0xFFFFF780000002C4];
  WORD2(v10) = v7;
  *(_DWORD *)(a2 + 21) = v4;
  *(_WORD *)(a2 + 25) = v7;
  *(_WORD *)(a2 + 27) = v8;
  *(_QWORD *)(a2 + 29) = v6;
  *((_QWORD *)&v10 + 1) = PsGetProcessStartKey(a1);
  *(_OWORD *)(a2 + 2) = v10;
  *(_DWORD *)(a2 + 37) = *(_DWORD *)(a1 + 2296);
  *(_QWORD *)(a2 + 82) = _InterlockedIncrement64(&EtwpAppStateChangeSequenceNumber);
  result = *(_QWORD *)(a1 + 2296);
  *(_QWORD *)(a2 + 90) = result;
  return result;
}
