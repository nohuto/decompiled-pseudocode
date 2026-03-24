/*
 * XREFs of ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C0019C7C
 * Callers:
 *     EngHTBlt @ 0x1C0019F38 (EngHTBlt.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C011D6A4 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C01207DC (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall bSetHTSrcSurfInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r15d
  char v8; // si
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r9
  char v13; // al
  __int64 result; // rax
  _DWORD *v15; // rdx
  int v16; // ecx
  __int64 v17; // r9
  _DWORD *v18; // rbx
  __int128 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF

  v22 = a2;
  v6 = *(_DWORD *)(a2 + 24) & 2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      v9 = 2;
      goto LABEL_19;
    case 2:
      v9 = 16;
      goto LABEL_19;
    case 3:
      v9 = 256;
LABEL_19:
      v8 = 4;
      goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 72) != 4 )
  {
    if ( *(_DWORD *)(a1 + 72) == 5 )
    {
      v8 = 3;
      v9 = 0;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(a1 + 72) != 6 )
      return 0LL;
    v9 = 3;
    v6 = 1;
    goto LABEL_19;
  }
  v8 = 2;
  v9 = 3;
  v6 = 1;
LABEL_7:
  BYTE10(v19) = *(_BYTE *)(a1 + 72);
  HIDWORD(v19) = *(_DWORD *)(a1 + 32);
  LODWORD(v20) = *(_DWORD *)(a1 + 36);
  DWORD1(v20) = *(_DWORD *)(a1 + 64);
  *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v19 = a1;
  BYTE11(v19) = 4;
  WORD4(v19) = (*(_BYTE *)(a1 + 78) & 1) != 0;
  v10 = 3;
  if ( !v6 )
    v10 = *(_DWORD *)(a2 + 28);
  if ( v10 <= v9 )
    v9 = v10;
  v11 = AllocThreadBufferWithTag(4 * v9 + 24, 1668573255LL, 0LL, 4LL);
  v21 = v11;
  v12 = v11;
  if ( !v11 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  *(_BYTE *)v11 = 0;
  *(_BYTE *)(v11 + 3) = 0;
  *(_QWORD *)(v11 + 16) = v11 + 24;
  *(_DWORD *)(v11 + 4) = 0;
  v13 = 0;
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    v13 = 4;
  *(_BYTE *)(v12 + 3) = v13;
  *(_BYTE *)(v12 + 2) = v8;
  if ( v6 )
  {
    v15 = *(_DWORD **)(v12 + 16);
    *(_BYTE *)(v12 + 1) = 0;
    *(_DWORD *)(v12 + 8) = 3;
    if ( (*(_DWORD *)(a2 + 24) & 2) != 0 )
    {
      *v15 = **(_DWORD **)(a2 + 112);
      v15[1] = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL);
      v16 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 8LL);
    }
    else
    {
      v15[1] = 65280;
      if ( (*(_DWORD *)(a2 + 24) & 8) != 0 )
      {
        *v15 = 16711680;
        v16 = 255;
      }
      else
      {
        *v15 = 255;
        v16 = 16711680;
      }
    }
    v15[2] = v16;
  }
  else
  {
    *(_BYTE *)(v12 + 1) = 1;
    *(_DWORD *)(v12 + 4) = 255;
    *(_DWORD *)(v12 + 8) = v9;
    if ( v9 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v22) && a4 && (*(_DWORD *)(a4 + 76) & 0x100) != 0 )
      {
        v18 = *(_DWORD **)(v17 + 16);
        *v18 = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 28));
        v18[1] = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 32));
      }
      else
      {
        XEPALOBJ::ulGetEntries((XEPALOBJ *)&v22, 0, v9, *(struct tagPALETTEENTRY **)(v17 + 16), 0);
      }
    }
  }
  result = 1LL;
  *(_OWORD *)a3 = v19;
  *(_OWORD *)(a3 + 16) = v20;
  *(_QWORD *)(a3 + 32) = v21;
  return result;
}
