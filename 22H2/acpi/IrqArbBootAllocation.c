/*
 * XREFs of IrqArbBootAllocation @ 0x1C00942E0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessorCopyData @ 0x1C00944E0 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C0094850 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C0094980 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1C00952A8 (IcRemapInputs.c)
 *     ArbBootAllocation @ 0x1C00954B0 (ArbBootAllocation.c)
 */

__int64 __fastcall IrqArbBootAllocation(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 i; // r9
  unsigned int v7; // r10d
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // ecx
  __int64 j; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0

  ProcessorpClearData(1LL);
  IcClearPossibleData();
  result = ProcessorCopyData(1LL);
  if ( (int)result >= 0 )
  {
    for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
    {
      if ( *(int *)(i + 28) >= 0 )
      {
        v5 = 0LL;
        v7 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
        if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
        {
          v8 = i + 32;
          do
          {
            v9 = *(_OWORD *)(v8 + 16);
            v10 = *(_OWORD *)(v8 + 32);
            *(_DWORD *)(v8 + 4) = *(_DWORD *)v8;
            *(_DWORD *)(v8 + 12) = *(_DWORD *)(v8 + 8);
            *(_BYTE *)(v8 + 193) = *(_BYTE *)(v8 + 192);
            *(_OWORD *)(v8 + 104) = v9;
            v11 = *(_OWORD *)(v8 + 48);
            *(_OWORD *)(v8 + 120) = v10;
            v12 = *(_OWORD *)(v8 + 64);
            *(_OWORD *)(v8 + 136) = v11;
            v13 = *(_OWORD *)(v8 + 80);
            *(_OWORD *)(v8 + 152) = v12;
            *(_QWORD *)&v12 = *(_QWORD *)(v8 + 96);
            *(_OWORD *)(v8 + 168) = v13;
            *(_QWORD *)(v8 + 184) = v12;
            *(_DWORD *)(v8 + 104) = 0;
            v8 += 200LL;
            v14 = v5 + *(_DWORD *)(i + 16);
            v5 = (unsigned int)(v5 + 1);
            *(_DWORD *)(v8 - 40) = v14;
          }
          while ( (unsigned int)v5 < v7 );
        }
      }
    }
    result = ArbBootAllocation(a1, a2, v5, i);
    if ( (int)result >= 0 )
    {
      result = ProcessorCopyData(0LL);
      if ( (int)result >= 0 )
      {
        result = IcRemapInputs();
        if ( (int)result >= 0 )
        {
          for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
          {
            if ( *(int *)(j + 28) >= 0 && *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) != -1 )
            {
              v16 = j + 48;
              v17 = (unsigned int)(*(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1);
              do
              {
                *(_DWORD *)(v16 - 16) = *(_DWORD *)(v16 - 12);
                *(_DWORD *)(v16 - 8) = *(_DWORD *)(v16 - 4);
                *(_BYTE *)(v16 + 176) = *(_BYTE *)(v16 + 177);
                v18 = *(_OWORD *)(v16 + 104);
                *(_OWORD *)v16 = *(_OWORD *)(v16 + 88);
                v19 = *(_OWORD *)(v16 + 120);
                *(_OWORD *)(v16 + 16) = v18;
                v20 = *(_OWORD *)(v16 + 136);
                *(_OWORD *)(v16 + 32) = v19;
                v21 = *(_OWORD *)(v16 + 152);
                *(_OWORD *)(v16 + 48) = v20;
                *(_QWORD *)&v20 = *(_QWORD *)(v16 + 168);
                *(_OWORD *)(v16 + 64) = v21;
                *(_QWORD *)(v16 + 80) = v20;
                v16 += 200LL;
                --v17;
              }
              while ( v17 );
            }
          }
          ProcessorpClearData(1LL);
          IcClearPossibleData();
          return 0LL;
        }
      }
    }
  }
  return result;
}
