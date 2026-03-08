/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0069650
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0069720 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        LARGE_INTEGER *a4,
        NSInstrumentation::CLeakTrackingAllocator *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // rsi
  __int64 Quota; // rax
  __int64 v14; // r13
  LARGE_INTEGER *v15; // r12
  DWORD LowPart; // ecx
  unsigned __int64 v17; // rdx
  unsigned int *v18; // r15
  DWORD v19; // eax
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v6 = 0;
  *a6 = 0;
  if ( a3 == 23 )
  {
    if ( a5 == (NSInstrumentation::CLeakTrackingAllocator *)8 )
    {
      this[23] = KeQueryPerformanceCounter(0LL);
      v11 = *a4;
      LOBYTE(this[37].LowPart) &= ~8u;
      this[24] = v11;
      *a6 = 1;
      this[2].LowPart &= ~0x2000u;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 32 )
  {
    if ( a5 )
    {
      v12 = (unsigned __int64)a5 / 0xC;
      if ( a5 == (NSInstrumentation::CLeakTrackingAllocator *)(12 * ((unsigned __int64)a5 / 0xC))
        && !this[19].QuadPart
        && !this[30].HighPart )
      {
        Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                  a5,
                  260LL,
                  16LL * (unsigned int)v12,
                  0x666B4344u);
        if ( !Quota )
          return (unsigned int)-1073741801;
        this[19].QuadPart = Quota;
        v20 = 0;
        if ( !(_DWORD)v12 )
        {
LABEL_21:
          *a6 = 1;
          this[2].LowPart &= ~0x20000u;
          return v6;
        }
        v14 = 0LL;
        v15 = a4 + 1;
        while ( 1 )
        {
          LowPart = v15[-1].LowPart;
          v17 = LowPart - 1;
          if ( !LowPart )
            break;
          if ( v17 >= *((_QWORD *)a2 + 10) )
            break;
          _mm_lfence();
          v18 = *(unsigned int **)(*((_QWORD *)a2 + 11) * v17 + *((_QWORD *)a2 + 7));
          if ( !v18 || !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v18[9], 169LL) )
            break;
          DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v18);
          ++v20;
          *(_QWORD *)(this[19].QuadPart + v14) = v18;
          *(_DWORD *)(this[19].QuadPart + v14 + 8) = v15[-1].HighPart;
          v19 = v15->LowPart;
          v15 = (LARGE_INTEGER *)((char *)v15 + 12);
          *(_DWORD *)(this[19].QuadPart + v14 + 12) = v19;
          v14 += 16LL;
          ++this[30].HighPart;
          if ( v20 >= (unsigned int)v12 )
            goto LABEL_21;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                         (DirectComposition::CBaseExpressionMarshaler *)this,
                         a2,
                         a3,
                         a4,
                         (unsigned __int64)a5,
                         a6);
}
