/*
 * XREFs of AlpcpCaptureViewAttribute32 @ 0x1409764A0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1407CAAD0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x140714E74 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute32(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  LODWORD(v5) = *a2;
  *((_QWORD *)&v5 + 1) = (unsigned int)a2[1];
  v6 = (unsigned int)a2[2];
  v7 = (unsigned int)a2[3];
  return AlpcpCaptureViewAttributeInternal(a1, (__int64)&v5, a3, a4);
}
