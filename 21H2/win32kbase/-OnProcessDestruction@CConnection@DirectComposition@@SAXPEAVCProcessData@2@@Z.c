/*
 * XREFs of ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00951F4
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00953E0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C02135BC (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 */

void __fastcall DirectComposition::CConnection::OnProcessDestruction(
        struct DirectComposition::CProcessData *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edx
  struct HDCOMPOSITIONCONNECTION__ *v11; // rcx
  struct _ERESOURCE *v12; // rcx
  char *v13; // rdx
  struct tagRECT v14; // [rsp+20h] [rbp-28h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1, a2, a3, a4);
  if ( DefaultConnection )
  {
    if ( *((_QWORD *)DefaultConnection + 33) == PsGetCurrentProcess(v6, v5, v8, v9) )
    {
      v14 = 0LL;
      DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, 0LL, &v14);
    }
    DirectComposition::CConnection::Release(DefaultConnection, v10);
  }
  v11 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)a1 + 2);
  if ( v11 )
    DirectComposition::CConnection::DestroyHandle(v11);
  v12 = (struct _ERESOURCE *)*((_QWORD *)a1 + 4);
  if ( v12 )
  {
    ExDeleteResourceLite(v12);
    v13 = (char *)*((_QWORD *)a1 + 4);
    if ( v13 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v13);
  }
}
