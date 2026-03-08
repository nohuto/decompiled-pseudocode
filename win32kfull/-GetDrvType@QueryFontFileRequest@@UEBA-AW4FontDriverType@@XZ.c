/*
 * XREFs of ?GetDrvType@QueryFontFileRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C01260D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryFontFileRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 40) + 8LL);
}
