__int64 __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct D3DKMT_HASH *a2)
{
  _DWORD *v4; // rax
  unsigned __int16 v5; // bx
  __int64 v7; // rax

  if ( *(_DWORD *)a2 != 1 )
    WdLogSingleEntry0(1LL);
  v4 = (_DWORD *)*((_QWORD *)this + 8);
  v5 = 0;
  if ( v4 && *v4 == 1 )
    return RtlCompareMemory(a2, *((const void **)this + 8), 0x14uLL) != 20 ? 0xC000022E : 0;
  WdLogSingleEntry2(3LL, this, *((_QWORD *)this + 8));
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v5 = *(_WORD *)(v7 + 20);
  DxgkLogCodePointPacket(0x40u, v5, 0, 0, 0LL);
  return 0LL;
}
