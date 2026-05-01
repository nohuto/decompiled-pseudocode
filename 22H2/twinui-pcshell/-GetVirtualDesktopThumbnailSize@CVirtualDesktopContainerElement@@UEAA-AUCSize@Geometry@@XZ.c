/*
 * XREFs of ?GetVirtualDesktopThumbnailSize@CVirtualDesktopContainerElement@@UEAA?AUCSize@Geometry@@XZ @ 0x18042F6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__fastcall CVirtualDesktopContainerElement::GetVirtualDesktopThumbnailSize(_DWORD *a1, int *a2)
{
  int v2; // eax
  int v4; // r8d

  v2 = a1[28];
  *a2 = 0;
  v4 = a1[11] - a1[9];
  a2[1] = v2;
  *a2 = MulDiv(v2, a1[10] - a1[8], v4);
  return a2;
}
