/*
 * XREFs of ?GetPixelFormatInfo@CBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800E2B8C
 * Callers:
 *     ?GetPixelFormatInfo@CBitmapResource@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1801183D0 (-GetPixelFormatInfo@CBitmapResource@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v3 = *(_QWORD *)(a1 - 32);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL));
    (**v4)(v4, a2);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
