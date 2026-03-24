/*
 * XREFs of IcCopyData @ 0x1C00972F4
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0097104 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcCopyData(int a1)
{
  __int64 i; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // r8
  unsigned int v18; // ecx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v9 = 0;
      v10 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        if ( a1 == 1 )
        {
          v17 = i + 32;
          do
          {
            v12 = *(_OWORD *)(v17 + 16);
            v13 = *(_OWORD *)(v17 + 32);
            *(_DWORD *)(v17 + 4) = *(_DWORD *)v17;
            *(_DWORD *)(v17 + 12) = *(_DWORD *)(v17 + 8);
            *(_BYTE *)(v17 + 193) = *(_BYTE *)(v17 + 192);
            *(_OWORD *)(v17 + 104) = v12;
            v14 = *(_OWORD *)(v17 + 48);
            *(_OWORD *)(v17 + 120) = v13;
            v15 = *(_OWORD *)(v17 + 64);
            *(_OWORD *)(v17 + 136) = v14;
            v16 = *(_OWORD *)(v17 + 80);
            *(_OWORD *)(v17 + 152) = v15;
            *(_QWORD *)&v15 = *(_QWORD *)(v17 + 96);
            *(_OWORD *)(v17 + 168) = v16;
            *(_QWORD *)(v17 + 184) = v15;
            *(_DWORD *)(v17 + 104) = 0;
            v17 += 200LL;
            v18 = v9 + *(_DWORD *)(i + 16);
            ++v9;
            *(_DWORD *)(v17 - 40) = v18;
          }
          while ( v9 < v10 );
        }
        else
        {
          v3 = i + 48;
          v4 = v10;
          do
          {
            *(_DWORD *)(v3 - 16) = *(_DWORD *)(v3 - 12);
            *(_DWORD *)(v3 - 8) = *(_DWORD *)(v3 - 4);
            *(_BYTE *)(v3 + 176) = *(_BYTE *)(v3 + 177);
            v5 = *(_OWORD *)(v3 + 104);
            *(_OWORD *)v3 = *(_OWORD *)(v3 + 88);
            v6 = *(_OWORD *)(v3 + 120);
            *(_OWORD *)(v3 + 16) = v5;
            v7 = *(_OWORD *)(v3 + 136);
            *(_OWORD *)(v3 + 32) = v6;
            v8 = *(_OWORD *)(v3 + 152);
            *(_OWORD *)(v3 + 48) = v7;
            *(_QWORD *)&v7 = *(_QWORD *)(v3 + 168);
            *(_OWORD *)(v3 + 64) = v8;
            *(_QWORD *)(v3 + 80) = v7;
            v3 += 200LL;
            --v4;
          }
          while ( v4 );
        }
      }
    }
  }
  return 0LL;
}
