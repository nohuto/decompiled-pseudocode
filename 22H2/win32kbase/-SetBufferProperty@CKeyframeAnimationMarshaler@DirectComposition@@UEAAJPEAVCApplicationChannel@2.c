/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0030D20
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002C184 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0030DF0 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
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
  DirectComposition::CApplicationChannel *v8; // rbp
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // rsi
  __int64 Quota; // rax
  unsigned int v14; // r13d
  __int64 v15; // r12
  LARGE_INTEGER *v16; // r15
  struct DirectComposition::CResourceMarshaler *v17; // rax
  DirectComposition::CResourceMarshaler *v18; // rbp
  DWORD LowPart; // eax

  v6 = 0;
  v8 = a2;
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
        v14 = 0;
        if ( !(_DWORD)v12 )
        {
LABEL_19:
          *a6 = 1;
          this[2].LowPart &= ~0x20000u;
          return v6;
        }
        v15 = 0LL;
        v16 = a4 + 1;
        while ( 1 )
        {
          v17 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v16[-1].LowPart);
          v18 = v17;
          if ( !v17
            || !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                   *((unsigned int *)v17 + 9),
                                   169LL) )
          {
            break;
          }
          DirectComposition::CResourceMarshaler::AddRef(v18);
          ++v14;
          *(_QWORD *)(v15 + this[19].QuadPart) = v18;
          v8 = a2;
          *(_DWORD *)(this[19].QuadPart + v15 + 8) = v16[-1].HighPart;
          LowPart = v16->LowPart;
          v16 = (LARGE_INTEGER *)((char *)v16 + 12);
          *(_DWORD *)(this[19].QuadPart + v15 + 12) = LowPart;
          v15 += 16LL;
          ++this[30].HighPart;
          if ( v14 >= (unsigned int)v12 )
            goto LABEL_19;
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
