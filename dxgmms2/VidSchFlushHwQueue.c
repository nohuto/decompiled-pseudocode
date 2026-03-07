__int64 __fastcall VidSchFlushHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  _DWORD *v7; // rbx
  union _LARGE_INTEGER v9; // [rsp+20h] [rbp-B8h]
  _QWORD v10[20]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 32LL);
  VidSchRundownUnorderedWaiter<VIDSCH_HW_QUEUE>(a1, v6, a3, a4, v9);
  memset(v10, 0, sizeof(v10));
  v7 = (_DWORD *)(a1 + 148);
  if ( *v7 )
  {
    LODWORD(v10[4]) |= 0x50u;
    LODWORD(v10[2]) = 1;
    v10[5] = v7;
    LODWORD(v10[6]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 16) + 4LL);
    VidSchiWaitFlushCompletion(v6, (__int64)v10, 0x16u);
  }
  return VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v6 + 1728), v7);
}
