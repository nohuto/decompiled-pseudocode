__int64 __fastcall Crashdump_Endpoint_Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // edx
  __int64 v15; // rcx

  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 328;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)a1 = a2;
  v8 = (unsigned int)(a4 - 1);
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 168) = 1LL;
  v9 = v8 + 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 104LL) & 4) != 0 )
    v10 = v9 << 6;
  else
    v10 = 32 * v9;
  *(_QWORD *)(a1 + 40) = a7 + v10;
  v11 = v8 + 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 104LL) & 4) != 0 )
    v12 = v11 << 6;
  else
    v12 = 32 * v11;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(v12 + a6);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(v12 + a6 + 16);
  if ( a4 == 1 )
    v13 = 80;
  else
    v13 = 16 * ((((unsigned __int64)a5 + 8190) >> 12) + 2);
  v14 = Crashdump_CommonBufferAcquire(a2, v13, a1 + 80);
  if ( v14 >= 0 )
  {
    v14 = Crashdump_CommonBufferAcquire(*(_QWORD *)a1, v13, a1 + 104);
    if ( v14 >= 0 && (*(_DWORD *)(a1 + 48) & 0x7C00) != 0 )
    {
      v15 = *(_QWORD *)a1;
      *(_BYTE *)(a1 + 128) = 1;
      v14 = Crashdump_CommonBufferAcquire(v15, 64, a1 + 136);
      if ( v14 >= 0 )
        *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL) = *(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0uLL | 3;
    }
  }
  return (unsigned int)v14;
}
