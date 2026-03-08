/*
 * XREFs of ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800F5424
 * Callers:
 *     ?HitTest@CMaskBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180119F30 (-HitTest@CMaskBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::HitTest(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this - 4);
  if ( v7 )
  {
    v10 = *(int *)(*(_QWORD *)(v7 + 64) + 8LL) + v7 + 64;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x9Au, 0LL);
    }
    else if ( *((_QWORD *)this - 5) )
    {
      if ( *a4 )
      {
        *a4 = 0;
        v13 = *((_QWORD *)this - 5) + 64LL + *(int *)(*(_QWORD *)(*((_QWORD *)this - 5) + 64LL) + 8LL);
        v14 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v13 + 24LL))(
                v13,
                a2,
                a3,
                a4);
        v4 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xA0u, 0LL);
      }
    }
  }
  return v4;
}
