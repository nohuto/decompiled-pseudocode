/*
 * XREFs of ?CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEAAXXZ @ 0x1800868A4
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180086CF0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     <none>
 */

void __fastcall COcclusionContext::CheckOverlayCandidateCollectionEnabled(COcclusionContext *this)
{
  __int64 *v2; // r9
  __int64 *v3; // r11
  bool v4; // cl
  char v5; // r8
  bool v6; // al
  __int64 v7; // r10

  *(_WORD *)((char *)this + 1205) = 0;
  v2 = (__int64 *)*((_QWORD *)this + 193);
  v3 = &v2[*((_QWORD *)this + 192)];
  if ( v2 == v3 )
    goto LABEL_12;
  v4 = 0;
  v5 = 1;
  v6 = 0;
  do
  {
    v7 = *v2;
    v4 = v4 || *(_BYTE *)(v7 + 11302);
    *((_BYTE *)this + 1205) = v4;
    v6 = v6 || *(_BYTE *)(v7 + 11303);
    ++v2;
    *((_BYTE *)this + 1206) = v6;
  }
  while ( v2 != v3 );
  if ( !v6 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 96LL) & 0x8000) == 0 )
LABEL_12:
    v5 = 0;
  *((_BYTE *)this + 1206) = v5;
}
