/*
 * XREFs of CLIPOBJ_GetRgn @ 0x1C0268090
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0029D50 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 */

HANDLE __stdcall CLIPOBJ_GetRgn(CLIPOBJ *pco)
{
  struct RGNOBJ *v1; // rdi
  struct HOBJ__ *v2; // rbx
  struct OBJECT *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct RGNOBJ *)((unsigned __int64)&pco[2].rclBounds.top & -(__int64)(pco != 0LL));
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v4);
  v2 = 0LL;
  if ( !v4 || !RGNOBJ::bCopy((RGNOBJ *)&v4, v1) || (v2 = RGNOBJ::hrgnAssociate(&v4)) == 0LL )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  return v2;
}
