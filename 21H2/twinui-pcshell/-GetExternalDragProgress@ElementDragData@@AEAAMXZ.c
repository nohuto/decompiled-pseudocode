/*
 * XREFs of ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x18042D830
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042D258 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x18042D8B4 (-IsExternalDrag@ElementDragData@@AEAA_NXZ.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18042DC50 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall ElementDragData::GetExternalDragProgress(ElementDragData *this)
{
  float v2; // xmm3_4
  float v3; // xmm2_4
  int v4; // r9d
  int v5; // eax
  int v6; // r8d
  int v7; // eax

  if ( (*((_BYTE *)this + 176) & 2) == 0 )
    return 0.0;
  v2 = 0.0;
  v3 = 0.0;
  v4 = abs32(*((_DWORD *)this + 23) - *((_DWORD *)this + 16));
  v5 = *((_DWORD *)this + 40);
  v6 = abs32(HIDWORD(*(_QWORD *)((char *)this + 92)) - *((_DWORD *)this + 17));
  if ( v5 > 0 )
    v3 = (float)v4 / (float)v5;
  v7 = *((_DWORD *)this + 41);
  if ( v7 > 0 )
    v2 = (float)v6 / (float)v7;
  return fmaxf(v3, v2);
}
