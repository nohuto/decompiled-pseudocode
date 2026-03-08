/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1802A6068
 * Callers:
 *     ?Render@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18011D690 (-Render@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180129E50 (McTemplateU0xx_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x180253640 (McTemplateU0xxx_EventWriteTransfer.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x180289FD8 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802A2158 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?PostInteropTextureUpdate@CHolographicManager@@QEAAXIPEAX0@Z @ 0x1802A2574 (-PostInteropTextureUpdate@CHolographicManager@@QEAAXIPEAX0@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A6564 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x1802A6850 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7288 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(
        CHolographicInteropTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  DWORD v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int i; // edi
  struct CHolographicInteropTexture *v15; // rax
  unsigned int v16; // r9d
  struct CHolographicInteropTexture *v17; // r14
  unsigned int v18; // ebp
  unsigned int v19; // r15d
  void *v20; // r9
  void *v21; // r8
  CHolographicManager *v22; // rcx
  __int64 v23; // r8
  CD3DDevice *v24; // rcx
  unsigned int v25; // edi
  CHolographicInteropTexture *TextureAtIndex; // rax
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-58h] BYREF

  LODWORD(v4) = 0;
  v5 = qword_1803E7788 + 1;
  *a4 = 0;
  qword_1803E7788 = v5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xx_EventWriteTransfer(
      (__int64)this,
      (__int64)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER,
      v5,
      qword_1803E7790);
  v9 = (_QWORD *)*((_QWORD *)this - 19);
  if ( (unsigned int)((__int64)(v9[19] - v9[18]) >> 3) )
  {
    v10 = v9[5];
    if ( v10 )
    {
      if ( !*(_BYTE *)(v10 + 216) )
      {
        v11 = WaitForSingleObject(*((HANDLE *)this - 7), 0xAu);
        v13 = *((_QWORD *)this - 19);
        if ( v11 )
        {
          v25 = 0;
          for ( LODWORD(v4) = (__int64)(*(_QWORD *)(v13 + 152) - *(_QWORD *)(v13 + 144)) >> 3; v25 < (unsigned int)v4; ++v25 )
          {
            TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this - 19), v25);
            if ( TextureAtIndex )
              CHolographicInteropTexture::CacheDirtyRegion(TextureAtIndex);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McTemplateU0xxx_EventWriteTransfer(
              v13,
              &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
              qword_1803E7788,
              qword_1803E7790,
              0LL);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 38) + 656LL) + 32LL))(
            *(_QWORD *)(*((_QWORD *)this - 38) + 656LL),
            0LL,
            0x8000LL);
        }
        else
        {
          v4 = (__int64)(*(_QWORD *)(v13 + 152) - *(_QWORD *)(v13 + 144)) >> 3;
          *a4 = (_DWORD)v4 != 0;
          for ( i = 0; i < (unsigned int)v4; ++i )
          {
            v15 = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this - 19), i);
            v17 = v15;
            if ( v15 && *((_BYTE *)v15 + 232) )
            {
              v18 = (*(_QWORD *)(*((_QWORD *)this - 38) + 272LL) != 0LL) + 1;
              v19 = 0;
              do
                CHolographicInteropTarget::RenderTexture(
                  (CHolographicInteropTarget *)((char *)this - 320),
                  a2,
                  v17,
                  v16,
                  v19++);
              while ( v19 < v18 );
            }
          }
          v20 = (void *)*((_QWORD *)this - 7);
          v21 = (void *)*((_QWORD *)this - 8);
          v22 = (CHolographicManager *)*((_QWORD *)this - 19);
          ++qword_1803E7790;
          CHolographicManager::PostInteropTextureUpdate(v22, v12, v21, v20);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED,
              v23,
              1u,
              &v28);
          v24 = (CD3DDevice *)*((_QWORD *)this - 17);
          if ( v24 )
            CD3DDevice::EnqueueSetEvent(v24, *((void **)this - 8));
        }
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0xxxx_EventWriteTransfer(
      v4,
      (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
      qword_1803E7788,
      qword_1803E7790,
      qword_1803E7788 - qword_1803E7790,
      v4);
  return 0LL;
}
