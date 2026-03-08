/*
 * XREFs of ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800D3E74
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18001539C (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x1800166BC (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800D3ADC (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x1800D3D9C (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802ABE0C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800F1F18 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 */

_QWORD *__fastcall Path::SegmentCollection::const_iterator::operator++(_BYTE **a1)
{
  _QWORD *v1; // rbx

  v1 = a1;
  LOBYTE(a1) = **a1;
  *v1 += (unsigned int)Path::Segment::GetSize(a1);
  return v1;
}
