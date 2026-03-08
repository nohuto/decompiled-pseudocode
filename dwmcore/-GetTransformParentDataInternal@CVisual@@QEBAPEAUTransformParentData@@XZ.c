/*
 * XREFs of ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800F66E8
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800F6550 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     <none>
 */

struct TransformParentData *__fastcall CVisual::GetTransformParentDataInternal(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x1000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 8 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (__int64)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(struct TransformParentData **)v5;
}
