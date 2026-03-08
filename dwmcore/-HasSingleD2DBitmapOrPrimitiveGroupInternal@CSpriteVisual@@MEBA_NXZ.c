/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x1800DF370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  BOOL v1; // ebx
  __int64 v3; // rcx
  int v4; // eax

  v1 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
    v1 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 17LL) != 0;
  v4 = v1 + 1;
  if ( (**((_DWORD **)this + 29) & 0x10000) == 0 )
    v4 = v1;
  return v4 == 1;
}
