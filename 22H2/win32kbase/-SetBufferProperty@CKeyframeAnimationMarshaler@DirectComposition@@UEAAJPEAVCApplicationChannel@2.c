/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0095560
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0095630 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D46F4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        LARGE_INTEGER *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  LARGE_INTEGER *v15; // r12
  DWORD LowPart; // ecx
  unsigned __int64 v17; // rdx
  DirectComposition::CResourceMarshaler *v18; // r14
  DWORD v19; // eax
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v6 = 0;
  *a6 = 0;
  if ( a3 == 23 )
  {
    if ( a5 == 8 )
    {
      this[35] = KeQueryPerformanceCounter(0LL);
      v11 = *a4;
      LOBYTE(this[37].LowPart) &= ~2u;
      this[36] = v11;
      *a6 = 1;
      this[2].LowPart &= ~0x1000u;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 32 )
  {
    if ( a5 )
    {
      v12 = a5 / 0xC;
      if ( a5 == 12 * (a5 / 0xC) && !this[26].QuadPart && !this[27].LowPart )
      {
        v13 = Win32AllocPoolWithQuota(16LL * (unsigned int)v12, 0x666B4344u);
        if ( !v13 )
          return (unsigned int)-1073741801;
        this[26].QuadPart = v13;
        v20 = 0;
        if ( !(_DWORD)v12 )
        {
LABEL_23:
          *a6 = 1;
          this[2].LowPart &= ~0x10000u;
          return v6;
        }
        v14 = 0LL;
        v15 = a4 + 1;
        while ( 1 )
        {
          LowPart = v15[-1].LowPart;
          v17 = LowPart - 1;
          if ( LowPart && v17 < *((_QWORD *)a2 + 10) )
          {
            _mm_lfence();
            v18 = *(DirectComposition::CResourceMarshaler **)(v17 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
          }
          else
          {
            v18 = 0LL;
          }
          if ( !v18
            || (*(unsigned int (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)v18 + 8LL))(v18) != 169 )
          {
            break;
          }
          DirectComposition::CResourceMarshaler::AddRef(v18);
          ++v20;
          *(_QWORD *)(this[26].QuadPart + v14) = v18;
          *(_DWORD *)(this[26].QuadPart + v14 + 8) = v15[-1].HighPart;
          v19 = v15->LowPart;
          v15 = (LARGE_INTEGER *)((char *)v15 + 12);
          *(_DWORD *)(this[26].QuadPart + v14 + 12) = v19;
          v14 += 16LL;
          ++this[27].LowPart;
          if ( v20 >= (unsigned int)v12 )
            goto LABEL_23;
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
                         a5,
                         a6);
}
