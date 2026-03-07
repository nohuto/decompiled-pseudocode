void __fastcall VIDMM_PURGE_TELEMETRY::AddData(VIDMM_PURGE_TELEMETRY *this, unsigned __int64 a2, unsigned __int64 a3)
{
  char *v5; // rbx
  unsigned __int64 v6; // rcx
  char *v7; // rbx
  unsigned __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 < 0x40000000 )
  {
    v5 = (char *)this + 32 * (unsigned int)(a2 >> 25) + 8;
    goto LABEL_9;
  }
  if ( a2 < 0x140000000LL )
  {
    v6 = (a2 - 0x40000000) >> 27;
    v7 = (char *)this + 1032;
LABEL_7:
    v5 = &v7[32 * (unsigned int)v6];
    goto LABEL_9;
  }
  if ( a2 < 0x540000000LL )
  {
    v7 = (char *)this + 2056;
    v6 = (a2 - 0x140000000LL) >> 29;
    goto LABEL_7;
  }
  v5 = (char *)this + 3080;
LABEL_9:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
    (VIDMM_PURGE_TELEMETRY *)((char *)this + 3112));
  v8 = *((_QWORD *)v5 + 1);
  *(_QWORD *)v5 += a3;
  ++*((_DWORD *)v5 + 6);
  if ( v8 > a3 )
    a3 = v8;
  *((_QWORD *)v5 + 1) = a3;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
}
