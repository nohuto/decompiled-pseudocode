/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00D1F60
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C00D1EF0 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C009F5AC (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00D20EC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C00D2638 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r13
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  __int64 (__fastcall **v9)(QueryFontTreeRequest *); // rax
  _QWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // r10d
  unsigned __int16 *v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // r9d
  unsigned __int64 v18; // r11
  __int64 v19; // [rsp+38h] [rbp-30h]
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    v5 = 0;
    v21 = 0;
    v20 = 0;
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v21, &v20) )
    {
      v6 = v20;
      v7 = v3 + 16 * (v20 + 1LL);
      if ( v7 >= v3 + 16 )
      {
        v19 = v1;
        v8 = v21;
        if ( v21 >= 16 * ((unsigned __int64)v20 + 1) )
        {
          v9 = *(__int64 (__fastcall ***)(QueryFontTreeRequest *))this;
          v10 = (_QWORD *)*((_QWORD *)this + 8);
          LOBYTE(v20) = 0;
          v11 = (*v9)(this);
          v12 = UmfdAllocation::ObtainKernelmodeAllocation(
                  v11,
                  *v10,
                  v3,
                  (unsigned int)v8,
                  &v20,
                  QueryFontTreeRequest::TryGlyphSetHasSameContent,
                  v2,
                  v19);
          if ( v12 )
          {
            if ( !(_BYTE)v20 )
              goto LABEL_19;
            *(_DWORD *)v12 = v8;
            v13 = v8 + v3;
            *(_DWORD *)(v12 + 12) = v6;
            v14 = 0;
            if ( v6 )
            {
              v15 = (unsigned __int16 *)(v12 + 18);
              do
              {
                v16 = *(_QWORD *)(v15 + 3);
                v17 = *v15;
                if ( v16 )
                {
                  if ( !(_WORD)v17 )
                    goto LABEL_21;
                  if ( v16 < v7 )
                    goto LABEL_21;
                  if ( v16 >= v13 )
                    goto LABEL_21;
                  v18 = v16 + 4LL * *v15;
                  if ( v18 < v16 )
                    goto LABEL_21;
                  if ( v18 > v13 )
                    goto LABEL_21;
                  *(_QWORD *)(v15 + 3) = v12 + v16 - v3;
                  if ( v5 + v17 < v5 )
                    goto LABEL_21;
                  v5 += v17;
                }
                else if ( (_WORD)v17 )
                {
                  goto LABEL_21;
                }
                ++v14;
                v15 += 8;
              }
              while ( v14 < v6 );
            }
            if ( v5 != *(_DWORD *)(v12 + 8) )
LABEL_21:
              UmfdAllocation::ReleaseKernelmodeAllocation((char *)v12);
            else
LABEL_19:
              *((_QWORD *)this + 9) = v12;
          }
        }
      }
    }
  }
}
