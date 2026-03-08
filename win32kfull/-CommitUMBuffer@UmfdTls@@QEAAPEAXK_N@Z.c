/*
 * XREFs of ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011D480 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011D740 (-CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011E3A0 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011E800 (-CreateUsermodeParameters@QueryFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011E870 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011EC60 (-CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011F230 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0122540 (-CreateUsermodeParameters@QueryFontTreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0152630 (-CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308940 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308A60 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308BE0 (-CreateUsermodeParameters@FreeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308C40 (-CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308CB0 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308D30 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308E90 (-CreateUsermodeParameters@TrueTypeFreeGlyphsetRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308EF0 (-CreateUsermodeParameters@UnloadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x1C00F0C48 (-AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C0309050 (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 */

void *__fastcall UmfdTls::CommitUMBuffer(UmfdUMBuffer **this, unsigned int a2, char a3)
{
  ULONG_PTR v4; // rsi
  UmfdUMBuffer *v5; // rdi
  __int64 v6; // rdx
  void *v7; // rbx
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // eax
  char v12; // al
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v5 = *this;
  if ( a2 > *((_DWORD *)*this + 9) )
  {
    if ( UmfdUMBuffer::AllocTemporaryBuffer(*this, a2) )
    {
      v7 = (void *)*((_QWORD *)v5 + 1);
      goto LABEL_6;
    }
    goto LABEL_21;
  }
  if ( *((_QWORD *)v5 + 1) )
  {
    BaseAddress = (PVOID)*((_QWORD *)v5 + 1);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    *((_QWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 4) = 0;
  }
  v6 = *((unsigned int *)v5 + 8);
  if ( (unsigned int)v4 <= (unsigned int)v6 )
    goto LABEL_5;
  v14 = 0;
  if ( !UmfdUMBuffer::AlignSizeTo(v4, v6, &v14) )
    goto LABEL_21;
  if ( v14 < v9 || v14 < (unsigned int)v4 || v14 > *((_DWORD *)v5 + 9) )
  {
    v12 = 0;
  }
  else
  {
    RegionSize = v14;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 3, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      goto LABEL_21;
    v10 = RegionSize;
    if ( RegionSize < v4 )
      goto LABEL_21;
    if ( RegionSize > 0xFFFFFFFF )
    {
      v11 = -2147024362;
      v10 = -1;
    }
    else
    {
      v11 = 0;
    }
    *((_DWORD *)v5 + 8) = v10;
    if ( v11 < 0 )
      goto LABEL_21;
    v12 = 1;
  }
  if ( !v12 )
  {
LABEL_21:
    v7 = 0LL;
    goto LABEL_6;
  }
LABEL_5:
  v7 = (void *)*((_QWORD *)v5 + 3);
LABEL_6:
  *(_QWORD *)v5 = v7;
  if ( v7 && a3 )
    memset_0(v7, 0, v4);
  return v7;
}
