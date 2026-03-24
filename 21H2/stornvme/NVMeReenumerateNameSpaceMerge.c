/*
 * XREFs of NVMeReenumerateNameSpaceMerge @ 0x1C0007138
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     memset @ 0x1C0008040 (memset.c)
 *     NVMeIsLunActive @ 0x1C0015204 (NVMeIsLunActive.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceMerge(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // r9
  unsigned int v8; // edi
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // r8
  unsigned int v16; // r8d
  __int64 v17; // r10
  unsigned int v18; // ecx
  __int64 v19; // r9
  __int64 *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v7 = 255LL;
  do
  {
    v8 = *(_DWORD *)(v4 + 4 * v6 + 2048);
    if ( !v8 )
      break;
    if ( v8 <= (unsigned int)v3 )
    {
      v9 = v8 - 1;
      v10 = *(_QWORD *)(v4 + 8 * v9 + 8);
      v11 = *(_QWORD *)(a1 + 8 * v9 + 1736);
      if ( v10 && (a2 = *(unsigned int *)(v10 + 20), (a2 & 8) != 0) )
      {
        a2 = (unsigned int)a2 & 0xFFFFFFF7;
        LODWORD(a2) = a2 | 0x80;
        *(_BYTE *)(v10 + 10) = v8 - 1;
        *(_DWORD *)(v10 + 20) = a2;
        if ( v11 )
        {
          *(_OWORD *)v11 = *(_OWORD *)v10;
          *(_OWORD *)(v11 + 16) = *(_OWORD *)(v10 + 16);
          *(_OWORD *)(v11 + 32) = *(_OWORD *)(v10 + 32);
          *(_OWORD *)(v11 + 48) = *(_OWORD *)(v10 + 48);
          *(_OWORD *)(v11 + 64) = *(_OWORD *)(v10 + 64);
          *(_OWORD *)(v11 + 80) = *(_OWORD *)(v10 + 80);
          *(_QWORD *)(v11 + 96) = *(_QWORD *)(v10 + 96);
          StorPortExtendedFunction(1LL, a1, v10, 255LL);
          *(_QWORD *)(v4 + 8 * v9 + 8) = 0LL;
        }
        else
        {
          *(_QWORD *)(a1 + 8 * v9 + 1736) = v10;
        }
        if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 208) )
        {
          v12 = (unsigned __int16)v8;
          if ( (unsigned __int16)v8 >= 0xFFu )
            v12 = 255;
          *(_DWORD *)(a1 + 208) = v12;
        }
      }
      else if ( v11 && (*(_DWORD *)(v11 + 20) & 0x20) != 0 )
      {
        memset((void *)v11, 0, 0x68uLL);
      }
      else if ( v10 )
      {
        v13 = *(_DWORD *)(v10 + 20);
        if ( (v13 & 0x10) != 0 )
        {
          *(_DWORD *)(v10 + 20) = v13 & 0xFFFFFFEF;
          *(_BYTE *)(v10 + 10) = v8 - 1;
          *(_OWORD *)v11 = *(_OWORD *)v10;
          *(_OWORD *)(v11 + 16) = *(_OWORD *)(v10 + 16);
          *(_OWORD *)(v11 + 32) = *(_OWORD *)(v10 + 32);
          *(_OWORD *)(v11 + 48) = *(_OWORD *)(v10 + 48);
          *(_OWORD *)(v11 + 64) = *(_OWORD *)(v10 + 64);
          *(_OWORD *)(v11 + 80) = *(_OWORD *)(v10 + 80);
          *(_QWORD *)(v11 + 96) = *(_QWORD *)(v10 + 96);
          StorPortExtendedFunction(1LL, a1, v10, 255LL);
          *(_QWORD *)(v4 + 8 * v9 + 8) = 0LL;
        }
      }
    }
    v6 = (unsigned int)(v6 + 1);
    v7 = 255LL;
  }
  while ( (unsigned int)v6 < 0x400 );
  result = *(unsigned int *)(a1 + 208);
  v15 = 0LL;
  if ( (_DWORD)result )
  {
    v7 = a1 + 1736;
    do
    {
      result = NVMeIsLunActive(*(_QWORD *)v7, a2, v15);
      v18 = v16 + 1;
      v7 = v19 + 8;
      if ( !(_BYTE)result )
        v18 = v16;
      v15 = v18;
    }
    while ( v17 != 1 );
  }
  *(_DWORD *)(a1 + 196) = v15;
  if ( (_DWORD)v3 )
  {
    v20 = (__int64 *)(v4 + 8);
    v21 = v3;
    do
    {
      v22 = *v20;
      if ( *v20 )
      {
        result = *(unsigned int *)(v22 + 20);
        if ( (result & 0x80u) == 0LL )
          result = StorPortExtendedFunction(1LL, a1, v22, v7);
      }
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  return result;
}
