CHolographicInteropTexture *__fastcall CHolographicInteropTexture::CHolographicInteropTexture(
        CHolographicInteropTexture *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  CHolographicInteropTexture *result; // rax

  *((_QWORD *)this + 9) = &CHolographicInteropTexture::`vbtable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResource::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = &IVisualTreeClient::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CHolographicInteropTexture::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 352;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_QWORD *)this + 16) = (char *)this + 144;
  *((_QWORD *)this + 17) = (char *)this + 208;
  *((_QWORD *)this + 42) = (char *)this + 344;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 86) = 0;
  InitializeSRWLock((PSRWLOCK)this + 51);
  result = this;
  *((_DWORD *)this + 62) = 1;
  return result;
}
