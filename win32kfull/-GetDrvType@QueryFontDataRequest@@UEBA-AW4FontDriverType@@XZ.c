/*
 * XREFs of ?GetDrvType@QueryFontDataRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C0126110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryFontDataRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) + 8LL);
}
