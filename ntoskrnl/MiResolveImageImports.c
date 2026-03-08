/*
 * XREFs of MiResolveImageImports @ 0x14076F7A4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSetImageProtection @ 0x1402E3BB8 (MiSetImageProtection.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MmDecodeExportSection @ 0x14035D424 (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14035D5C0 (MmEncodeExportSection.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A2D7CC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiResolveImageImports(__int64 a1, __int64 a2, int a3, int a4, int a5, _BYTE *a6)
{
  __int64 v6; // r12
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned int *v13; // rbx
  unsigned __int64 v14; // r15
  int v15; // esi
  int v16; // ebp
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  int i; // esi
  unsigned int *j; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rax
  int v25; // r8d
  int v26; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v6 = *(_QWORD *)(a1 + 48);
  v27 = 0;
  v26 = 0;
  v10 = 0;
  LOBYTE(a2) = 1;
  v11 = RtlImageDirectoryEntryToData(v6, a2, 12, (int)&v27);
  v13 = 0LL;
  v14 = v11;
  if ( !v11 || (v15 = v27) == 0 )
  {
    v14 = 0LL;
    v15 = 0;
    LOBYTE(v12) = 1;
    v13 = (unsigned int *)RtlImageDirectoryEntryToData(v6, v12, 1, (int)&v26);
    if ( !v13 )
      return 0LL;
    do
    {
      v18 = *v13;
      if ( !(_DWORD)v18 )
        break;
      v19 = (_QWORD *)(v6 + v18);
      v20 = v6 + v13[4];
      for ( i = 0; *v19; ++i )
        ++v19;
      v15 = 8 * i;
      v27 = v15;
      if ( !(unsigned int)MiSetImageProtection(a1, v20, v15) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140C65490 = 193;
        return 3221225595LL;
      }
      ++v10;
      v13 += 5;
    }
    while ( v13 );
    if ( !v10 )
      return 0LL;
    goto LABEL_5;
  }
  if ( (unsigned int)MiSetImageProtection(a1, v11, v27) )
  {
    v10 = 1;
LABEL_5:
    *(_DWORD *)(a1 + 104) |= 0x1000u;
    MmDecodeExportSection();
    v16 = MiResolveImageReferences(a1, a4, a3, v28, a5);
    MmEncodeExportSection();
    if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
    {
      if ( v14 )
      {
        MiSetImageProtection(a1, v14, v15);
      }
      else
      {
        for ( j = &v13[-5 * v10]; j; j += 5 )
        {
          v23 = *j;
          if ( !(_DWORD)v23 )
            break;
          v24 = (_QWORD *)(v6 + v23);
          v25 = 0;
          while ( *v24 )
          {
            ++v24;
            ++v25;
          }
          MiSetImageProtection(a1, v6 + j[4], 8 * v25);
        }
      }
    }
    *(_DWORD *)(a1 + 104) &= ~0x1000u;
    if ( v16 < 0 )
      *a6 = 1;
    return (unsigned int)v16;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140C65490 = 192;
  return 3221225595LL;
}
