__int64 __fastcall KdpWriteCustomBreakpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(a4) = *(_BYTE *)(a1 + 37);
  LOBYTE(a3) = *(_BYTE *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&v8 = 0LL;
  v6 = KdpAddBreakpoint(*(_QWORD *)(a1 + 16), v5, a3, a4, 56LL, a1);
  *(_DWORD *)(a1 + 32) = v6;
  *(_DWORD *)(a1 + 8) = v6 == 0 ? 0xC0000001 : 0;
  return KdSendPacket(2LL, &v8, 0LL, &KdpContext);
}
