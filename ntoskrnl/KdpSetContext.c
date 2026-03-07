__int64 __fastcall KdpSetContext(__int64 a1, unsigned __int16 *a2, char *a3)
{
  __int64 v4; // r8
  _DWORD *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0;
  v4 = *(unsigned __int16 *)(a1 + 6);
  *((_QWORD *)&v7 + 1) = a1;
  LOWORD(v7) = 56;
  if ( (unsigned __int16)v4 < 0x800u && KiProcessorBlock[v4] && KdpContextSent )
  {
    *(_DWORD *)(a1 + 8) = 0;
    if ( (_WORD)v4 != (unsigned __int16)KeGetPcr()->Prcb.Number )
      a3 = *(char **)(KiProcessorBlock[v4] + 35264);
    v5 = (_DWORD *)*((_QWORD *)a2 + 1);
    KdpSanitizeContextFlags(v5, *a2, &v8);
    KdpCopyContext(a3, v8, v5);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v7, 0LL, &KdpContext);
}
