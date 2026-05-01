/*
 * XREFs of ?SetTransparent@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x1803E06A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x1803DDF58 (CreationThreadDispatcher--RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::SetTransparent(AccessibilityExperienceManager *this, char a2)
{
  __int64 v4; // rbx
  LONG WindowLongW; // r8d
  unsigned int v6; // eax
  LONG v7; // r8d
  char *v8; // [rsp+20h] [rbp-10h] BYREF
  char v9; // [rsp+28h] [rbp-8h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+60h] [rbp+30h] BYREF

  v10 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v10) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v10 + 24LL))(v10, &hWnd) >= 0 )
    {
      WindowLongW = GetWindowLongW(hWnd, -20);
      v6 = WindowLongW & 0xFFF7FFDF;
      v7 = WindowLongW | 0x80020;
      if ( !a2 )
        v7 = v6;
      SetWindowLongW(hWnd, -20, v7);
      v8 = (char *)this - 152;
      v9 = a2;
      CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___(
        *((_QWORD *)this + 18),
        (volatile int *)&v8);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
