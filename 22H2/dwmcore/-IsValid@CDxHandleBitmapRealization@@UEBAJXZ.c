/*
 * XREFs of ?IsValid@CDxHandleBitmapRealization@@UEBAJXZ @ 0x1802B1280
 * Callers:
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBAJXZ @ 0x180122520 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBAJXZ @ 0x180122540 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBAJXZ.c)
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBAJXZ @ 0x180122B80 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBAJXZ.c)
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBAJXZ @ 0x180122E00 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::IsValid(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall ***v2)(_QWORD); // rcx
  unsigned int v3; // ebx

  v1 = *((_QWORD *)this - 14);
  if ( v1 )
  {
    v2 = (__int64 (__fastcall ***)(_QWORD))(v1 + 16 + *(int *)(*(_QWORD *)(v1 + 16) + 8LL));
    return (unsigned int)(**v2)(v2);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x5Fu, 0LL);
  }
  return v3;
}
