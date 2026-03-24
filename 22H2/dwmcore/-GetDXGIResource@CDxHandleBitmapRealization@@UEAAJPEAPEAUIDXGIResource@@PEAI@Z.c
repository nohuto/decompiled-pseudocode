/*
 * XREFs of ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x180264590
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800C3D84 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDXGIResource(
        CDxHandleBitmapRealization *this,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  CD2DBitmap *v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  *a2 = 0LL;
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 41) + 56LL))((char *)this - 328);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x110u, 0LL);
  }
  else
  {
    v9 = (CD2DBitmap *)*((_QWORD *)this + 2);
    *a2 = 0LL;
    v10 = CD2DBitmap::EnsureBitmap(v9);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x164u, 0LL);
    }
    else
    {
      v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))v9 + 15))(
              *((_QWORD *)v9 + 15),
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              a2);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x166u, 0LL);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v8, 0x112u, 0LL);
    }
    else if ( a3 )
    {
      *a3 = *(_DWORD *)(*((_QWORD *)this + 2) + 240LL);
    }
  }
  return (unsigned int)v8;
}
