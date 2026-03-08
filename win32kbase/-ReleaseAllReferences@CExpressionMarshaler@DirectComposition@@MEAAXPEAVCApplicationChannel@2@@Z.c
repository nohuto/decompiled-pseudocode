/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0064FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0061BB0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?RemoveObject@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@QEAAPEAVCWeakReferenceBase@2@PEAVCResourceMarshaler@2@@Z @ 0x1C006A05C (-RemoveObject@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _DWORD *v4; // rdi
  __int64 i; // rsi
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rbp
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this + 25;
  if ( this[24] )
  {
    for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
    {
      v6 = *((_QWORD *)this[24] + i);
      v7 = (*(_DWORD *)(v6 + 8))-- == 1;
      v8 = *(_QWORD *)(v6 + 16);
      if ( v7 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v6);
        if ( v8 )
        {
          DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::RemoveObject((PRTL_GENERIC_TABLE)((char *)a2 + 264));
          *(_DWORD *)(v8 + 16) &= ~4u;
        }
      }
    }
    v9 = this[24];
    if ( v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    this[24] = 0LL;
  }
  *v4 = 0;
  *((_DWORD *)this + 51) = 0;
  v10 = this[26];
  if ( v10 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
    this[26] = 0LL;
  }
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  v11 = this[16];
  if ( v11 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
    this[16] = 0LL;
  }
  v12 = this[19];
  if ( v12 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
    this[19] = 0LL;
  }
}
