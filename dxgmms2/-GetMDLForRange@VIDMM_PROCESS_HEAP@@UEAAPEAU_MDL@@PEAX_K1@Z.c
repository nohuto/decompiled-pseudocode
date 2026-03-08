/*
 * XREFs of ?GetMDLForRange@VIDMM_PROCESS_HEAP@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C0104D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _MDL *__fastcall VIDMM_PROCESS_HEAP::GetMDLForRange(VIDMM_PROCESS_HEAP *this, _QWORD *a2)
{
  struct _MDL *result; // rax

  result = (struct _MDL *)a2[13];
  if ( result )
    return *(struct _MDL **)&result->Size;
  return result;
}
