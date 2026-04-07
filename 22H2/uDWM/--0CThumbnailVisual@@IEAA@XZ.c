/*
 * XREFs of ??0CThumbnailVisual@@IEAA@XZ @ 0x18002B4C4
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18000D6A0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180025268 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::CThumbnailVisual(CThumbnailVisual *this)
{
  __int64 v1; // rcx
  CThumbnailVisual *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_OWORD *)(v1 + 288) = 0LL;
  *(_OWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_DWORD *)(v1 + 328) = 0;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_BYTE *)(v1 + 344) = 0;
  *(_QWORD *)(v1 + 348) = 0LL;
  *(_QWORD *)v1 = &CThumbnailVisual::`vftable'{for `CRenderDataVisual'};
  *(_BYTE *)(v1 + 356) = 0;
  *(_QWORD *)(v1 + 280) = &CThumbnailVisual::`vftable'{for `IAnimatedVisual'};
  *(_QWORD *)(v1 + 360) = &CThumbnailVisual::`vftable';
  result = (CThumbnailVisual *)v1;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_QWORD *)(v1 + 448) = 0LL;
  *(_QWORD *)(v1 + 456) = 0LL;
  *(_QWORD *)(v1 + 464) = 0LL;
  *(_BYTE *)(v1 + 472) = 1;
  *(_DWORD *)(v1 + 496) = 0;
  *(_QWORD *)(v1 + 552) = 0LL;
  *(_QWORD *)(v1 + 560) = 0LL;
  return result;
}
