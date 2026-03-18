/*
 * XREFs of ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00335E4
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00338F8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0032288 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C0086918 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00C38D8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CConnection::OnProcessDestruction(struct DirectComposition::CProcessData *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rbx
  __int64 v5; // r8
  unsigned int v6; // edx
  struct HDCOMPOSITIONCONNECTION__ *v7; // rcx
  struct _ERESOURCE *v8; // rcx
  void *v9; // rdx
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1);
  if ( DefaultConnection )
  {
    if ( *((_QWORD *)DefaultConnection + 34) == PsGetCurrentProcess(v3, v2, v5) )
    {
      v10 = 0LL;
      DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, 0LL, &v10);
    }
    DirectComposition::CConnection::Release(DefaultConnection, v6);
  }
  v7 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)a1 + 2);
  if ( v7 )
    DirectComposition::CConnection::DestroyHandle(v7);
  v8 = (struct _ERESOURCE *)*((_QWORD *)a1 + 4);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    v9 = (void *)*((_QWORD *)a1 + 4);
    if ( v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
  }
}
