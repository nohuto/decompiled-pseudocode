/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00C3B70
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C00C3B10 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C00C48B8 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??1?$AutoReleasePtr@U_FD_GLYPHSET@@$1?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z@@QEAA@XZ @ 0x1C030838C (--1-$AutoReleasePtr@U_FD_GLYPHSET@@$1-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z@@QEA.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  __int64 v1; // rsi
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdi
  __int64 v5; // r15
  __int64 *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  _DWORD *v9; // rax
  _DWORD *v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned int v12; // r9d
  unsigned int v13; // r11d
  unsigned __int16 *v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // r10d
  unsigned __int64 v17; // rax
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v19; // [rsp+78h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 11);
  if ( v1 )
  {
    LODWORD(v19) = 0;
    v18 = 0;
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, (unsigned int *)&v19, &v18) )
    {
      v3 = v18;
      v4 = v1 + 16 * (v18 + 1LL);
      if ( v4 >= v1 + 16 )
      {
        v5 = (unsigned int)v19;
        if ( (unsigned int)v19 >= 16 * ((unsigned __int64)v18 + 1) )
        {
          v6 = (__int64 *)*((_QWORD *)this + 8);
          LOBYTE(v18) = 0;
          v7 = *v6;
          v8 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *))this)(this);
          v9 = (_DWORD *)UmfdAllocation::ObtainKernelmodeAllocation(
                           v8,
                           v7,
                           v1,
                           (unsigned int)v5,
                           &v18,
                           QueryFontTreeRequest::TryGlyphSetHasSameContent);
          v19 = v9;
          v10 = v9;
          if ( !v9 )
            goto LABEL_21;
          if ( !(_BYTE)v18 )
            goto LABEL_7;
          *v9 = v5;
          v11 = v5 + v1;
          v9[3] = v3;
          v12 = 0;
          v13 = 0;
          if ( v3 )
          {
            v14 = (unsigned __int16 *)v9 + 9;
            do
            {
              v15 = *(_QWORD *)(v14 + 3);
              v16 = *v14;
              if ( v15 )
              {
                if ( !(_WORD)v16 )
                  goto LABEL_21;
                if ( v15 < v4 )
                  goto LABEL_21;
                if ( v15 >= v11 )
                  goto LABEL_21;
                v17 = v15 + 4LL * *v14;
                if ( v17 < v15 )
                  goto LABEL_21;
                if ( v17 > v11 )
                  goto LABEL_21;
                *(_QWORD *)(v14 + 3) = (char *)v10 + v15 - v1;
                if ( v12 + v16 < v12 )
                  goto LABEL_21;
                v12 += v16;
              }
              else if ( (_WORD)v16 )
              {
                goto LABEL_21;
              }
              ++v13;
              v14 += 8;
            }
            while ( v13 < v3 );
          }
          if ( v12 == v10[2] )
LABEL_7:
            *((_QWORD *)this + 9) = v10;
          else
LABEL_21:
            AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>::~AutoReleasePtr<_FD_GLYPHSET,&public: static void UmfdAllocation::ReleaseKernelmodeAllocation(void *)>(
              &v19,
              v10);
        }
      }
    }
  }
}
