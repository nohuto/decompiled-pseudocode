/*
 * XREFs of ?vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z @ 0x1C007DED4
 * Callers:
 *     ?GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z @ 0x1C007D110 (-GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z.c)
 *     RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___ @ 0x1C007D49C (RGNCOREOBJ--bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C007DD10 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x1C016D660 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 * Callees:
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

void __fastcall RGNCOREOBJ::vCopy(RGNCOREOBJ *this, const struct RGNCOREOBJ *a2)
{
  *(_DWORD *)(*(_QWORD *)this + 24LL) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *(_DWORD *)(*(_QWORD *)a2 + 28LL);
  *(_OWORD *)(*(_QWORD *)this + 32LL) = *(_OWORD *)(*(_QWORD *)a2 + 32LL);
  memmove(
    *(void **)(*(_QWORD *)this + 8LL),
    *(const void **)(*(_QWORD *)a2 + 8LL),
    *(unsigned int *)(*(_QWORD *)a2 + 24LL));
  *(_QWORD *)(*(_QWORD *)this + 16LL) = *(_QWORD *)(*(_QWORD *)this + 8LL)
                                      + *(_DWORD *)(*(_QWORD *)a2 + 16LL)
                                      - *(_DWORD *)(*(_QWORD *)a2 + 8LL);
}
