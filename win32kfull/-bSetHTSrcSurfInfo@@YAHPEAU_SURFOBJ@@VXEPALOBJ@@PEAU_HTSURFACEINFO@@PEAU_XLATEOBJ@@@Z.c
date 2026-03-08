/*
 * XREFs of ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C02E0688
 * Callers:
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C007CAB0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C00E4E24 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall bSetHTSrcSurfInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r15d
  unsigned int v8; // esi
  char v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  char v14; // al
  int v15; // ecx
  int v16; // r8d
  __int64 result; // rax
  __int128 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF

  v21 = a2;
  v7 = *(_DWORD *)(a2 + 24) & 2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      v8 = 2;
      break;
    case 2:
      v8 = 16;
      break;
    case 3:
      v8 = 256;
      break;
    case 4:
      v9 = 2;
      v8 = 3;
      v7 = 1;
      goto LABEL_14;
    case 5:
      v9 = 3;
      v8 = 0;
      goto LABEL_14;
    case 6:
      v8 = 3;
      v7 = 1;
      break;
    default:
      return 0LL;
  }
  v9 = 4;
LABEL_14:
  BYTE10(v18) = *(_BYTE *)(a1 + 72);
  HIDWORD(v18) = *(_DWORD *)(a1 + 32);
  LODWORD(v19) = *(_DWORD *)(a1 + 36);
  DWORD1(v19) = *(_DWORD *)(a1 + 64);
  *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v18 = a1;
  BYTE11(v18) = 4;
  WORD4(v18) = (*(_BYTE *)(a1 + 78) & 1) != 0;
  v10 = 3;
  if ( !v7 )
    v10 = *(_DWORD *)(a2 + 28);
  if ( v10 <= v8 )
    v8 = v10;
  v11 = AllocThreadBufferWithTag(4 * v8 + 24, 1668573255LL, 0LL);
  v20 = v11;
  v12 = v11;
  if ( !v11 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  *(_BYTE *)(v11 + 3) = 0;
  v13 = v11 + 24;
  *(_QWORD *)(v11 + 16) = v11 + 24;
  *(_BYTE *)v11 = 0;
  *(_DWORD *)(v11 + 4) = 0;
  v14 = 0;
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    v14 = 4;
  *(_BYTE *)(v12 + 3) = v14;
  *(_BYTE *)(v12 + 2) = v9;
  if ( v7 )
  {
    *(_BYTE *)(v12 + 1) = 0;
    *(_DWORD *)(v12 + 8) = 3;
    if ( (*(_DWORD *)(a2 + 24) & 2) != 0 )
    {
      *(_DWORD *)v13 = **(_DWORD **)(a2 + 112);
      *(_DWORD *)(v13 + 4) = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL);
      v15 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 8LL);
    }
    else
    {
      *(_DWORD *)(v13 + 4) = 65280;
      if ( (*(_DWORD *)(a2 + 24) & 8) != 0 )
      {
        *(_DWORD *)v13 = 16711680;
        v15 = 255;
      }
      else
      {
        *(_DWORD *)v13 = 255;
        v15 = 16711680;
      }
    }
    *(_DWORD *)(v13 + 8) = v15;
  }
  else
  {
    *(_BYTE *)(v12 + 1) = 1;
    *(_DWORD *)(v12 + 4) = 255;
    *(_DWORD *)(v12 + 8) = v8;
    if ( v8 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v21) && a4 && (*(_DWORD *)(a4 + 76) & 0x100) != 0 )
      {
        *(_DWORD *)v13 = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 28));
        *(_DWORD *)(v13 + 4) = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 32));
      }
      else
      {
        XEPALOBJ::ulGetEntries((XEPALOBJ *)&v21, 0, v8, (struct tagPALETTEENTRY *)v13, v16);
      }
    }
  }
  result = 1LL;
  *(_OWORD *)a3 = v18;
  *(_OWORD *)(a3 + 16) = v19;
  *(_QWORD *)(a3 + 32) = v20;
  return result;
}
