/*
 * XREFs of ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1800152F0
 * Callers:
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1800150E0 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802AC358 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x180015768 (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x180015944 (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 */

void __fastcall CTrimPathOperation::TrimToEndAt(CTrimPathOperation *this, const struct Path::Segment *a2, float a3)
{
  const struct Path::Segment *v3; // rdi
  struct Path::Segment *v5; // rax
  bool v6; // al
  char v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+51h] [rbp+9h]
  int v9; // [rsp+54h] [rbp+Ch]

  v3 = a2;
  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
  {
    v5 = CTrimPathOperation::InterpolateSegment(this, a2, 0.0, a3, 0LL);
    *((float *)v5 + 1) = a3 * *((float *)v3 + 1);
    CTrimPathOperation::AppendSegment(this, v5);
  }
  LOBYTE(a2) = 1;
  Path::Segment::Segment(&v7, a2);
  v8 = 0;
  v9 = 0;
  CTrimPathOperation::AppendSegment(this, (const struct Path::Segment *)&v7);
  v6 = *((_BYTE *)this + 396) == 0;
  *((_BYTE *)this + 397) = 0;
  ++*((_DWORD *)this + 8);
  *((_BYTE *)this + 396) = v6;
}
