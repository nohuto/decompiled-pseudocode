NTSTATUS __fastcall PopBatteryInitialize(__int64 a1)
{
  unsigned int v1; // eax
  IRP *v3; // rcx
  NTSTATUS result; // eax
  int v5; // eax
  const char *v6; // rcx
  __int128 v7; // xmm1
  bool v8; // zf
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-39h]
  __int64 v12; // [rsp+28h] [rbp-31h]
  __m256i v13; // [rsp+70h] [rbp+17h] BYREF
  int v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh] BYREF
  char v16; // [rsp+9Ch] [rbp+43h]

  v1 = *(_DWORD *)(a1 + 108);
  v3 = *(IRP **)(a1 + 56);
  v14 = 0;
  memset(&v13.m256i_u64[1], 0, 24);
  v13.m256i_i64[0] = v1;
  PopPrepareIoctl(v3, 0x294044u, 0, (struct _IRP *)&v13, 0xCu, 0x24u);
  result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( result >= 0 )
  {
    v5 = v14;
    v6 = "non-rechargeable";
    v7 = *(_OWORD *)&v13.m256i_u64[2];
    v16 = 0;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)v13.m256i_i8;
    *(_OWORD *)(a1 + 128) = v7;
    *(_DWORD *)(a1 + 144) = v5;
    v8 = *(_BYTE *)(a1 + 116) == 0;
    v15 = *(_DWORD *)(a1 + 120);
    if ( !v8 )
      v6 = "rechargeable";
    LODWORD(v12) = *(_DWORD *)(a1 + 112);
    LODWORD(v11) = *(_DWORD *)(a1 + 108);
    DbgPrintEx(
      0x92u,
      2u,
      "\n"
      "Battery Information [%p]\n"
      "|-- Tag                 = %u\n"
      "|-- Capabilities        = 0x%08x\n"
      "|-- Technology          = %s\n"
      "|-- Chemistry           = %s\n"
      "|-- DesignedCapacity    = %u\n"
      "|-- FullChargedCapacity = %u\n"
      "|-- DefaultAlert1       = %u\n"
      "|-- DefaultAlert2       = %u\n"
      "|-- CriticalBias        = %u\n"
      "|-- CycleCount          = %u\n",
      a1,
      v11,
      v12,
      v6,
      &v15,
      *(_DWORD *)(a1 + 124),
      *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 132),
      *(_DWORD *)(a1 + 136),
      *(_DWORD *)(a1 + 140),
      *(_DWORD *)(a1 + 144));
    *(_DWORD *)(a1 + 104) = 3;
    v9 = (_QWORD *)(a1 + 64);
    v10 = (_QWORD *)qword_140C3CB78;
    if ( *(__int64 **)qword_140C3CB78 != &qword_140C3CB70 )
      __fastfail(3u);
    v9[1] = qword_140C3CB78;
    *v9 = &qword_140C3CB70;
    *v10 = v9;
    ++dword_140C3CB54;
    ++dword_140C3CBB8;
    result = 0;
    qword_140C3CB78 = (__int64)v9;
    byte_140C3CB58 = 1;
  }
  return result;
}
