/*
 * XREFs of NVMeControllerPowerDown @ 0x1C0018BDC
 * Callers:
 *     NVMeHwStartIo @ 0x1C0003A70 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C0017F20 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0024584 (NVMeSetHostMemoryBuffer.c)
 */

char __fastcall NVMeControllerPowerDown(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int128 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // r10d
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r9
  unsigned int v17; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  *((_QWORD *)&v4 + 1) = a2;
  v5 = *(_QWORD *)(a1 + 1640);
  v7 = *(_QWORD *)(a1 + 3800);
  v8 = 0;
  if ( v7 )
  {
    LODWORD(Size) = *(_DWORD *)(v7 + 4);
    NVMeSetHostMemoryBuffer(a1, (void *)(v7 + 8), Size);
  }
  if ( (*(_BYTE *)(a1 + 3808) & 3) == 3 )
    *(_BYTE *)(a1 + 3808) |= 4u;
  v9 = *(_DWORD *)(v5 + 88);
  if ( v9 )
  {
    a3 = v9;
    a4 = 0x346DC5D63886594BLL;
    v10 = 10000 * (v9 / 0x2710uLL);
    v11 = v10 + 10000;
    if ( v9 == v10 )
      v11 = v9;
    v4 = v11 * (unsigned __int128)0x346DC5D63886594BuLL;
    v12 = *((_QWORD *)&v4 + 1) >> 11;
  }
  else
  {
    LODWORD(v12) = 500;
  }
  v13 = *(unsigned __int8 *)(a1 + 55);
  if ( (_BYTE)v13 )
  {
    a3 = (unsigned int)v12;
    v14 = 100 * ((unsigned int)v12 / 0x64uLL);
    v15 = v14 + 100;
    if ( (unsigned int)v12 == v14 )
      v15 = (unsigned int)v12;
    *((_QWORD *)&v4 + 1) = (v15 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 55);
    a4 = v15 / 0x64;
    if ( (unsigned int)a4 > v13 )
      LODWORD(v4) = a4;
    LODWORD(v12) = 100 * v4;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDFA | 4;
  IoQueuesDeletion(a1, *((__int64 *)&v4 + 1), a3, a4);
  v17 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v17;
  _InterlockedOr(v19, 0);
  if ( (_DWORD)v12 )
  {
    do
    {
      LOBYTE(v17) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 0xC;
      if ( (_BYTE)v17 == 8 )
        break;
      LOBYTE(v17) = StorPortExtendedFunction(81LL, a1, 10000LL, v16);
      ++v8;
    }
    while ( v8 < (unsigned int)v12 );
  }
  return v17;
}
