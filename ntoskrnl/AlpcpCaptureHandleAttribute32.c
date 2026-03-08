/*
 * XREFs of AlpcpCaptureHandleAttribute32 @ 0x140977C14
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1407CAAD0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureHandleAttributeInternal @ 0x140710ED0 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute32(_DWORD *a1, __int64 a2)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v3 = 0LL;
  v4 = 0;
  LODWORD(v3) = *a1;
  *((_QWORD *)&v3 + 1) = (int)a1[1];
  v4 = a1[2];
  v5 = a1[3];
  return AlpcpCaptureHandleAttributeInternal((__int64)&v3, a2);
}
