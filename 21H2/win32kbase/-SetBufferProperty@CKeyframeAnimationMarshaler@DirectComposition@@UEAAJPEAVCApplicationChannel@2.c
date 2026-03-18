/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A8E90
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A8F60 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        char *a4,
        NSInstrumentation::CLeakTrackingAllocator *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  LARGE_INTEGER v10; // rax
  _OWORD *v12; // rax
  unsigned __int64 v13; // rsi
  __int64 Quota; // rax
  __int64 v15; // r13
  int *v16; // r12
  int v17; // ecx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  DirectComposition::CResourceMarshaler *v21; // r15
  int v22; // eax
  unsigned int v23; // [rsp+70h] [rbp+18h]

  v6 = 0;
  *a6 = 0;
  if ( a3 != 23 )
  {
    if ( a3 == 32 )
    {
      if ( !a5 )
        return (unsigned int)-1073741811;
      v13 = (unsigned __int64)a5 / 0xC;
      if ( a5 != (NSInstrumentation::CLeakTrackingAllocator *)(12 * ((unsigned __int64)a5 / 0xC))
        || this[20].QuadPart
        || this[32].HighPart )
      {
        return (unsigned int)-1073741811;
      }
      Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a5, 260LL, 16LL * (unsigned int)v13, 1718305604);
      if ( !Quota )
        return (unsigned int)-1073741801;
      this[20].QuadPart = Quota;
      v23 = 0;
      if ( !(_DWORD)v13 )
      {
LABEL_26:
        *a6 = 1;
        this[2].LowPart &= ~0x20000u;
        return v6;
      }
      v15 = 0LL;
      v16 = (int *)(a4 + 8);
      while ( 1 )
      {
        v17 = *(v16 - 2);
        v18 = (unsigned int)(v17 - 1);
        if ( !v17 )
          break;
        if ( v18 >= *((_QWORD *)a2 + 10) )
          break;
        _mm_lfence();
        v19 = *((_QWORD *)a2 + 7);
        v20 = v18 * *((_QWORD *)a2 + 11);
        v21 = *(DirectComposition::CResourceMarshaler **)(v20 + v19);
        if ( !v21 || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*(_QWORD *)(v20 + v19)) != 168 )
          break;
        DirectComposition::CResourceMarshaler::AddRef(v21);
        ++v23;
        *(_QWORD *)(this[20].QuadPart + v15) = v21;
        *(_DWORD *)(this[20].QuadPart + v15 + 8) = *(v16 - 1);
        v22 = *v16;
        v16 += 3;
        *(_DWORD *)(this[20].QuadPart + v15 + 12) = v22;
        v15 += 16LL;
        ++this[32].HighPart;
        if ( v23 >= (unsigned int)v13 )
          goto LABEL_26;
      }
    }
    else
    {
      if ( a3 != 35 )
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                               (DirectComposition::CBaseExpressionMarshaler *)this,
                               a2,
                               a3,
                               a4,
                               (unsigned __int64)a5,
                               a6);
      if ( a5 == (NSInstrumentation::CLeakTrackingAllocator *)16 )
      {
        if ( this[22].QuadPart )
          return (unsigned int)-1073741790;
        v12 = (_OWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                          (NSInstrumentation::CLeakTrackingAllocator *)this,
                          260LL,
                          16LL,
                          1936409412);
        this[22].QuadPart = (LONGLONG)v12;
        if ( v12 )
        {
          *v12 = *(_OWORD *)a4;
          *a6 = 1;
          this[2].LowPart &= ~0x40000u;
          return v6;
        }
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a5 != (NSInstrumentation::CLeakTrackingAllocator *)8 )
    return (unsigned int)-1073741811;
  this[25] = KeQueryPerformanceCounter(0LL);
  v10 = *(LARGE_INTEGER *)a4;
  BYTE4(this[39].QuadPart) &= ~4u;
  this[26] = v10;
  *a6 = 1;
  this[2].LowPart &= ~0x2000u;
  return v6;
}
