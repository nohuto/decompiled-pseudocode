/*
 * XREFs of ?ReleaseAllReferences@CCompositionCubeMapMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionCubeMapMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx
  __int64 i; // rdi
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
    {
      v6 = *(struct DirectComposition::CResourceMarshaler **)(v4 + 24 * i);
      if ( v6 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
        *(_QWORD *)(*((_QWORD *)this + 7) + 24 * i) = 0LL;
        v4 = *((_QWORD *)this + 7);
      }
    }
  }
  *((_DWORD *)this + 17) = 0;
}
