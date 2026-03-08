/*
 * XREFs of ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1802A5328
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802A96C0 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1802A4EF4 (-CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802A51CC (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

char __fastcall CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(
        CHolographicExclusiveView *this,
        unsigned int a2,
        struct EXCLUSIVE_SURFACE_UPDATE *a3)
{
  char v3; // bl
  int AnalogExclusiveSurfaceUpdates; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rax
  int v13; // edx
  __int16 v14; // cx
  int v15; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-114h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v18; // [rsp+50h] [rbp-F8h]
  unsigned int v19; // [rsp+58h] [rbp-F0h]
  int v20; // [rsp+5Ch] [rbp-ECh]
  HGDIOBJ ho; // [rsp+60h] [rbp-E8h]
  int v22; // [rsp+110h] [rbp-38h]

  v3 = 0;
  v15 = 0;
  v16[0] = 0;
  if ( !*((_BYTE *)this + 81) )
    return 0;
  AnalogExclusiveSurfaceUpdates = NtTokenManagerGetAnalogExclusiveSurfaceUpdates(a2, v17, 1LL, &v15, v16);
  if ( AnalogExclusiveSurfaceUpdates >= 0 )
  {
    if ( v15 )
    {
      if ( v18 == *((_QWORD *)this + 17)
        || (*((_QWORD *)this + 17) = v18,
            CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this),
            v9 = CHolographicExclusiveView::OpenSurfaceHandles(this),
            v9 >= 0) )
      {
        v11 = v20;
        v12 = v19;
        *((_DWORD *)this + 28) = v20;
        *(_QWORD *)a3 = *((_QWORD *)this + v12 + 20);
        if ( v11 )
          v13 = v11 - 1;
        else
          v13 = 0;
        v14 = v22;
        *((_DWORD *)a3 + 2) = v13;
        *((_DWORD *)a3 + 3) = *((_DWORD *)this + 19);
        *((_BYTE *)a3 + 18) = 0;
        *((_BYTE *)a3 + 16) = (v14 & 2) != 0;
        *((_BYTE *)a3 + 17) = v14 & 1;
        *((_BYTE *)a3 + 19) = (v14 & 0x100) == 0;
        if ( (unsigned __int64)ho >= 2 )
          DeleteObject(ho);
        return 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1D9u, 0LL);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, AnalogExclusiveSurfaceUpdates | 0x10000000, 0x1CFu, 0LL);
  }
  return v3;
}
