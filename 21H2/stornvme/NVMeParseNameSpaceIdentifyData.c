/*
 * XREFs of NVMeParseNameSpaceIdentifyData @ 0x1C000A984
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C0007F68 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeParseNameSpaceIdentifyData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char *a6)
{
  unsigned int v10; // edi
  unsigned int v11; // esi
  int v12; // edx
  unsigned int v13; // ecx
  __int128 v14; // xmm0
  unsigned int v15; // ecx
  int v16; // ecx
  unsigned int v17; // ebx
  __int64 result; // rax

  memset(a6, 0, 0x1A8uLL);
  a6[64] = *(_BYTE *)(a2 + 26) & 0xF;
  v10 = 0;
  v11 = -1;
  *((_DWORD *)a6 + 12) = *(_DWORD *)(a2 + 4LL * (*(_BYTE *)(a2 + 26) & 0xF) + 128);
  v12 = 1 << a6[50];
  *((_DWORD *)a6 + 13) = v12;
  *((_QWORD *)a6 + 7) = *(_QWORD *)a2;
  a6[65] = *(_BYTE *)(a2 + 24) & 1;
  a6[66] = *(_BYTE *)(a2 + 29) & 7;
  *((_WORD *)a6 + 46) = *(_WORD *)(a2 + 46);
  v13 = *(unsigned __int16 *)(a2 + 100);
  *((_WORD *)a6 + 47) = v13;
  *((_WORD *)a6 + 48) = *(_WORD *)(a2 + 102);
  a6[112] = *(_BYTE *)(a2 + 31);
  *(_QWORD *)(a6 + 84) = *(_QWORD *)(a2 + 120);
  v14 = *(_OWORD *)(a2 + 104);
  *(_DWORD *)a6 = 1;
  a6[10] = a5 - 1;
  *(_OWORD *)(a6 + 68) = v14;
  *((_DWORD *)a6 + 1) = 4;
  *((_WORD *)a6 + 4) = 0;
  *((_DWORD *)a6 + 4) = a5;
  if ( (*(_DWORD *)(a3 + 96) & 4) != 0 )
  {
    if ( a4 )
    {
      v15 = *(_DWORD *)(((unsigned __int64)v13 << 7) + a4 - 116);
      if ( v15 )
        v11 = v15;
    }
  }
  v16 = *(_DWORD *)(a1 + 64);
  v17 = v11;
  if ( (v16 & 0x1000) != 0 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(a2 + 24) & 0x10) == 0 )
  {
LABEL_8:
    *((_QWORD *)a6 + 13) = 0LL;
    result = 0LL;
    *((_DWORD *)a6 + 40) = 0;
    goto LABEL_9;
  }
  if ( (v16 & 0x800) != 0 )
  {
    if ( *(_BYTE *)(a1 + 24) )
    {
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
      v12 = *((_DWORD *)a6 + 13);
    }
  }
  else if ( v12 * ((unsigned int)*(unsigned __int16 *)(a2 + 72) + 1) < 0x8000 )
  {
    if ( *(_BYTE *)(a1 + 24) )
      StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
    goto LABEL_8;
  }
  v11 = v12 * (*(unsigned __int16 *)(a2 + 72) + 1);
  *((_DWORD *)a6 + 26) = v12 * (*(unsigned __int16 *)(a2 + 64) + 1);
  *((_DWORD *)a6 + 27) = v12 * (*(unsigned __int16 *)(a2 + 66) + 1);
  *((_DWORD *)a6 + 40) = *(unsigned __int16 *)(a2 + 68) + 1;
  result = (unsigned int)*(unsigned __int16 *)(a2 + 70) + 1;
  if ( v17 < v11 )
    v11 = v17;
LABEL_9:
  *((_DWORD *)a6 + 41) = result;
  if ( v11 != -1 )
    v10 = v11;
  *((_DWORD *)a6 + 25) = v10;
  return result;
}
