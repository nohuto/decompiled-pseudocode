/*
 * XREFs of ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00021A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetReferenceArrayProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  struct DirectComposition::CResourceMarshaler **v7; // r12
  int v10; // edx
  unsigned int v11; // ecx
  struct DirectComposition::CResourceMarshaler *v12; // rax
  __int64 i; // rax
  struct DirectComposition::CResourceMarshaler **v14; // r15
  unsigned int v15; // edi
  __int64 v16; // r14
  unsigned int v17; // r13d
  struct DirectComposition::CResourceMarshaler *v18; // rcx

  v6 = 0;
  v7 = a4;
  *a6 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  v10 = a5;
  if ( a5 )
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
  }
  v11 = 0;
LABEL_5:
  if ( v11 < a5 )
  {
    v12 = a4[v11];
    if ( v12 )
    {
      for ( i = *((unsigned int *)v12 + 9); (unsigned int)i < 0xCE; LODWORD(i) = dword_1C02934F0[i] )
      {
        if ( (_DWORD)i == 196 )
        {
          ++v11;
          goto LABEL_5;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
    v14 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
  else
    v14 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 7);
  v15 = 0;
  v16 = a3 != 0 ? 0x10 : 0;
  if ( v14 )
  {
    v17 = 0;
    if ( *(_DWORD *)((char *)this + v16 + 64) )
    {
      do
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v14[v17++]);
      while ( v17 < *(_DWORD *)((char *)this + v16 + 64) );
      v7 = a4;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    v10 = a5;
    *(_DWORD *)((char *)this + v16 + 64) = 0;
    *((_DWORD *)this + 4) |= a3 != 0 ? 64 : 32;
  }
  *(_QWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 56) = v7;
  *(_DWORD *)((char *)this + v16 + 64) = v10;
  *(_DWORD *)((char *)this + (a3 != 0 ? 84LL : 68LL)) = 0;
  *a6 = 1;
  if ( *(_DWORD *)((char *)this + v16 + 64) )
  {
    do
    {
      v18 = v7[v6];
      if ( (*((_QWORD *)v18 + 3))++ == -1LL )
        KeBugCheck(0xC01E0103);
      ++v6;
    }
    while ( v6 < *(_DWORD *)((char *)this + v16 + 64) );
  }
  return v15;
}
