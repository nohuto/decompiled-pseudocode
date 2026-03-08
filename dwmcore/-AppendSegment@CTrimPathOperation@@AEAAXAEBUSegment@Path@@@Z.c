/*
 * XREFs of ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x180015768
 * Callers:
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1800152F0 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18001560C (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802AC358 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800AB5B0 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800F1F18 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CTrimPathOperation::AppendSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  CTrimPathOperation *v2; // rdi
  unsigned int Size; // eax
  gsl::details *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  char v10; // [rsp+88h] [rbp+10h] BYREF

  v2 = this;
  LOBYTE(this) = *(_BYTE *)a2;
  Size = Path::Segment::GetSize(this);
  gsl::details::extent_type<-1>::extent_type<-1>(v8, Size);
  v6 = v8[0];
  if ( v8[0] == -1LL )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x1800157EELL);
  }
  v7 = *((_QWORD *)v2 + 1);
  v8[0] = a2;
  v8[1] = (char *)a2 + v6;
  v8[2] = (char *)a2 + v6;
  v9[1] = (char *)a2 + v6;
  v9[0] = a2;
  v9[2] = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
    (_DWORD)v2,
    (unsigned int)&v10,
    v7,
    (unsigned int)v9,
    (__int64)v8);
}
