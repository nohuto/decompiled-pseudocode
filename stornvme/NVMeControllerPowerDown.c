/*
 * XREFs of NVMeControllerPowerDown @ 0x1C000DF70
 * Callers:
 *     NVMeHwStartIo @ 0x1C0001DD0 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C000AB24 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00237E0 (NVMeSetHostMemoryBuffer.c)
 */

char __fastcall NVMeControllerPowerDown(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int128 v4; // rax
  __int64 v5; // rsi
  int *v7; // rcx
  unsigned int v8; // edi
  int v9; // r9d
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // r10d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // r9
  unsigned int v18; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  *((_QWORD *)&v4 + 1) = a2;
  v5 = *(_QWORD *)(a1 + 1840);
  v7 = *(int **)(a1 + 4000);
  v8 = 0;
  if ( v7 )
  {
    v9 = *v7;
    LODWORD(Size) = v7[1];
    NVMeSetHostMemoryBuffer(a1, 0, 0, v9, v7 + 2, Size);
  }
  if ( (*(_BYTE *)(a1 + 4008) & 3) == 3 )
    *(_BYTE *)(a1 + 4008) |= 4u;
  v10 = *(_DWORD *)(v5 + 88);
  if ( v10 )
  {
    a3 = v10;
    a4 = 0x346DC5D63886594BLL;
    v11 = 10000 * (v10 / 0x2710uLL);
    v12 = v11 + 10000;
    if ( v10 == v11 )
      v12 = v10;
    v4 = v12 * (unsigned __int128)0x346DC5D63886594BuLL;
    v13 = *((_QWORD *)&v4 + 1) >> 11;
  }
  else
  {
    LODWORD(v13) = 500;
  }
  v14 = *(unsigned __int8 *)(a1 + 55);
  if ( (_BYTE)v14 )
  {
    a3 = (unsigned int)v13;
    v15 = 100 * ((unsigned int)v13 / 0x64uLL);
    v16 = v15 + 100;
    if ( (unsigned int)v13 == v15 )
      v16 = (unsigned int)v13;
    *((_QWORD *)&v4 + 1) = (v16 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 55);
    a4 = v16 / 0x64;
    if ( (unsigned int)a4 > v14 )
      LODWORD(v4) = a4;
    LODWORD(v13) = 100 * v4;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDFA | 4;
  IoQueuesDeletion(a1, *((__int64 *)&v4 + 1), a3, a4);
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) & 0xFFFF3FFF | 0x4000;
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) = v18;
  _InterlockedOr(v20, 0);
  if ( (_DWORD)v13 )
  {
    do
    {
      LOBYTE(v18) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL) & 0xC;
      if ( (_BYTE)v18 == 8 )
        break;
      LOBYTE(v18) = StorPortExtendedFunction(81LL, a1, 10000LL, v17);
      ++v8;
    }
    while ( v8 < (unsigned int)v13 );
  }
  return v18;
}
