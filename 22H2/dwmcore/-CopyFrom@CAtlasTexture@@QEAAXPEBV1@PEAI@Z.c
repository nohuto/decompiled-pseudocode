/*
 * XREFs of ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x18024BFEC
 * Callers:
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x18024BC10 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18024BDBC (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18023D978 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?GetDeviceTexture@CAtlasTexture@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18024B694 (-GetDeviceTexture@CAtlasTexture@@QEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDevice@@XZ @ 0x18024C3F8 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x18024C5B8 (-IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x18024C5E8 (-IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 */

void __fastcall CAtlasTexture::CopyFrom(CAtlasTexture *this, const struct CAtlasTexture *a2, unsigned int *a3)
{
  const struct CAtlasTexture *v3; // rbx
  unsigned int *v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // r14d
  unsigned int v9; // r10d
  unsigned int v10; // r12d
  unsigned int i; // r13d
  int v12; // r10d
  struct CD3DDevice *Device; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct IDeviceTexture *v22; // [rsp+50h] [rbp-28h] BYREF
  struct IDeviceTexture *v23; // [rsp+58h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-14h]
  int v26; // [rsp+68h] [rbp-10h]
  unsigned int v27; // [rsp+6Ch] [rbp-Ch]
  unsigned int v30; // [rsp+D8h] [rbp+60h]

  v23 = 0LL;
  v3 = a2;
  v5 = a3;
  CAtlasTexture::GetDeviceTexture(a2, &v23);
  v22 = 0LL;
  CAtlasTexture::GetDeviceTexture(this, &v22);
  v6 = *((_DWORD *)v3 + 6) + 1;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v7 = *v5;
  v30 = v6;
  v26 = 2048;
  if ( v7 < v6 )
  {
    v8 = v7 != 0;
    while ( 1 )
    {
      if ( CAtlasTexture::IsInUseEntryInRow(v3, v7) )
      {
        while ( v8 < v9 && !CAtlasTexture::IsFreeEntryInRow(this, v8) )
          ++v8;
        v10 = 0;
        for ( i = v7; CAtlasTexture::IsInUseEntryInRow(v3, i) && CAtlasTexture::IsFreeEntryInRow(this, v12 + i); ++i )
          ++v10;
        if ( !v10 )
        {
LABEL_6:
          v5 = a3;
          break;
        }
        v25 = v7;
        v27 = i;
        Device = CAtlasTexture::GetDevice(this);
        v14 = (**(__int64 (__fastcall ***)(struct IDeviceTexture *))v22)(v22);
        v15 = (**(__int64 (__fastcall ***)(struct IDeviceTexture *))v23)(v23);
        CD3DDevice::CopySubresourceRegion((__int64)Device, v15, 0, &v24, v14, 0, 0, v8, 1);
        v3 = a2;
        v16 = v7 == 0;
        if ( v16 < v10 )
        {
          v17 = v7 - v8;
          v18 = v16 + v8;
          v19 = v10 - v16;
          do
          {
            v20 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * (v17 + v18 - 1));
            v21 = v18 - 1;
            *(_DWORD *)(v20 + 16) = v18++;
            *(_QWORD *)v20 = this;
            *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v21) = v20;
            --*((_DWORD *)this + 7);
            --v19;
          }
          while ( v19 );
        }
        v7 = i;
        v8 += v10;
      }
      else
      {
        ++v7;
      }
      if ( v7 >= v30 )
        goto LABEL_6;
    }
  }
  *v5 = v7;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
}
