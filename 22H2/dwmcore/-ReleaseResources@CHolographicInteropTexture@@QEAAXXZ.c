/*
 * XREFs of ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x180259664
 * Callers:
 *     ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x180253E00 (-ReleaseInteropTextures@CHolographicManager@@QEAAXXZ.c)
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180258A20 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x180258BAC (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x180259474 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094D90 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E7884 (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseResources(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 i; // r14
  __int64 j; // r15
  _QWORD *Ptr; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rcx
  char *v10; // rdi

  v1 = this + 49;
  AcquireSRWLockExclusive(this + 49);
  for ( i = 0LL; (unsigned int)i < LODWORD(this[29].Ptr); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2 )
    {
      std::_Xout_of_range("invalid array<T, N> subscript");
      __debugbreak();
      JUMPOUT(0x180259804LL);
    }
    if ( this[i + 24].Ptr )
    {
      for ( j = 0LL; (unsigned int)j < HIDWORD(this[28].Ptr); j = (unsigned int)(j + 1) )
      {
        _mm_lfence();
        Ptr = this[i + 24].Ptr;
        v6 = 96 * j;
        v7 = Ptr[12 * j];
        if ( v7 )
        {
          v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          Ptr[(unsigned __int64)v6 / 8] = 0LL;
        }
        _mm_lfence();
        if ( *(_QWORD *)((char *)this[i + 24].Ptr + v6 + 8) )
        {
          _mm_lfence();
          CloseHandle(*(HANDLE *)((char *)this[i + 24].Ptr + v6 + 8));
          *(_QWORD *)((char *)this[i + 24].Ptr + v6 + 8) = 0LL;
        }
      }
      _mm_lfence();
      v9 = (char *)this[i + 24].Ptr;
      if ( v9 )
      {
        v10 = v9 - 8;
        `vector destructor iterator'(
          v9,
          96LL,
          *((_QWORD *)v9 - 1),
          (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::~RenderBuffer);
        operator delete[](v10);
      }
      this[i + 24].Ptr = 0LL;
    }
  }
  HIDWORD(this[28].Ptr) = 0;
  BYTE1(this[28].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
