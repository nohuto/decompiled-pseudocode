/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x1800F25C0
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1800C2C40 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 32);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 208LL))(v1);
  else
    return 0;
}
