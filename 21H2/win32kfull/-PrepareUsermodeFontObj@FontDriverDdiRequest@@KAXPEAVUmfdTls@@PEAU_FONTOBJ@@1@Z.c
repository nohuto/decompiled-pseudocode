/*
 * XREFs of ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C000CC80
 * Callers:
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C710 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C8A0 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C9D0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C013C5A0 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C01409E0 (-CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DC480 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DC670 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FontDriverDdiRequest::PrepareUsermodeFontObj(
        struct UmfdTls *a1,
        struct _FONTOBJ *a2,
        struct _FONTOBJ *a3)
{
  ULONG ulStyleSize; // eax

  a3->iUniq = a2->iUniq;
  a3->iFace = a2->iFace;
  a3->cxMax = a2->cxMax;
  a3->flFontType = a2->flFontType;
  a3->iTTUniq = a2->iTTUniq;
  a3->iFile = *(_QWORD *)a2->iFile;
  a3->sizLogResPpi = a2->sizLogResPpi;
  ulStyleSize = a2->ulStyleSize;
  a3->pvConsumer = 0LL;
  a3->ulStyleSize = ulStyleSize;
  a3->pvProducer = a2->pvProducer;
  *((_QWORD *)a1 + 5) = a2;
}
