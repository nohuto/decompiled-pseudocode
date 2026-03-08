/*
 * XREFs of ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C012EF08
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 18);
  if ( a2 )
    *(_QWORD *)(v2 + 192) = a2 + *(a1 - 17) - v2;
  else
    *(_QWORD *)(v2 + 192) = 0LL;
  *a1 = a2;
  return a2;
}
