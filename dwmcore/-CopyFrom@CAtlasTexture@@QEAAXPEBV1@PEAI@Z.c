/*
 * XREFs of ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1800185F4
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x180018348 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1800FA91C (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1800188BC (-IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1800188EC (-IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18001891C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180045FE0 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z @ 0x1800B78E4 (-GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasTexture::CopyFrom(CAtlasTexture *this, const struct CAtlasTexture *a2, unsigned int *a3)
{
  const struct CAtlasTexture *v3; // rbx
  unsigned int *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // r15d
  unsigned int v11; // eax
  unsigned int i; // r12d
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdi
  void (__fastcall *v20)(__int64, CRegion *); // rbx
  CRegion *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned __int64 v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+54h] [rbp-85h]
  unsigned int v28; // [rsp+5Ch] [rbp-7Dh]
  struct IDeviceTexture *v29; // [rsp+60h] [rbp-79h] BYREF
  struct IDeviceTexture *v30; // [rsp+68h] [rbp-71h] BYREF
  __int64 v31; // [rsp+70h] [rbp-69h] BYREF
  __int64 v32; // [rsp+78h] [rbp-61h]
  const struct CAtlasTexture *v33; // [rsp+80h] [rbp-59h]
  unsigned int *v34; // [rsp+88h] [rbp-51h]
  __int64 v35; // [rsp+90h] [rbp-49h] BYREF
  __int64 v36; // [rsp+98h] [rbp-41h]
  _BYTE v37[80]; // [rsp+A0h] [rbp-39h] BYREF

  v30 = 0LL;
  v3 = a2;
  v33 = a2;
  v34 = a3;
  v5 = a3;
  CAtlasTexture::GetDeviceTexture(a2, &v30);
  v29 = 0LL;
  CAtlasTexture::GetDeviceTexture(this, &v29);
  v6 = *v5;
  v28 = *((_DWORD *)v3 + 6) + 1;
  v31 = 0LL;
  v32 = 2048LL;
  v35 = 0LL;
  v36 = 2048LL;
  if ( v6 < v28 )
  {
    v7 = v6 != 0;
    while ( 1 )
    {
      if ( CAtlasTexture::IsInUseEntryInRow(v3, v6) )
      {
        while ( v7 < v8 && !CAtlasTexture::IsFreeEntryInRow(this, v7) )
          ++v7;
        v10 = v9;
        v11 = v6 - v7;
        for ( i = v7; ; ++i )
        {
          v27 = v11 + i;
          if ( !CAtlasTexture::IsInUseEntryInRow(v3, v11 + i) )
          {
            i = v10 + v7;
            goto LABEL_12;
          }
          if ( !CAtlasTexture::IsFreeEntryInRow(this, i) )
            break;
          v11 = v6 - v7;
          ++v10;
        }
        v13 = v27;
LABEL_12:
        if ( !v10 )
        {
LABEL_18:
          v5 = v34;
          break;
        }
        HIDWORD(v32) = v13;
        v14 = *((_QWORD *)this + 1);
        HIDWORD(v31) = v6;
        HIDWORD(v35) = v7;
        HIDWORD(v36) = i;
        v15 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 8LL);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v17 = (**(__int64 (__fastcall ***)(struct IDeviceTexture *))v29)(v29);
        v18 = (**(__int64 (__fastcall ***)(struct IDeviceTexture *))v30)(v30);
        CD3DDevice::CopySubresourceRegion(v16, v18, 0, (unsigned int)&v31, v17, 0, 0, v7, 1);
        v19 = *((_QWORD *)this + 1) + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 16LL);
        v20 = *(void (__fastcall **)(__int64, CRegion *))(*(_QWORD *)(v19 + 8) + 32LL);
        v21 = CRegion::CRegion((CRegion *)v37, (const struct MilRectU *)&v35);
        v20(v19 + 8, v21);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v37);
        v3 = v33;
        v22 = v6 == 0;
        if ( v22 < v10 )
        {
          v23 = v22 + v7;
          v24 = (__PAIR64__(v10, v6) - 1) >> 32;
          do
          {
            v25 = *(_QWORD *)(*((_QWORD *)v3 + 2) + 8LL * (v23 + v6 - v7 - 1));
            v26 = v23 - 1;
            *(_DWORD *)(v25 + 16) = v23++;
            *(_QWORD *)v25 = this;
            *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v26) = v25;
            --*((_DWORD *)this + 7);
            --v24;
          }
          while ( v24 );
        }
        v6 = v27;
        v7 = i;
      }
      else
      {
        ++v6;
      }
      if ( v6 >= v28 )
        goto LABEL_18;
    }
  }
  *v5 = v6;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v30);
}
