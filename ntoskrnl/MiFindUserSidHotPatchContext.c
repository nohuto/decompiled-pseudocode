/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x140A3420C
 * Callers:
 *     MiFindProcessImageHotPatchRecord @ 0x140A3404C (MiFindProcessImageHotPatchRecord.c)
 *     MiQueryLoadedPatches @ 0x140A38650 (MiQueryLoadedPatches.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3940C (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlHashBytes2 @ 0x140411A14 (RtlHashBytes2.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140A33974 (MiCompareUserSidHotPatchNodes.c)
 */

_QWORD *__fastcall MiFindUserSidHotPatchContext(void *a1)
{
  _QWORD *v1; // rbx
  ULONG v4; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  int v7; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)qword_140C694A8;
  if ( !qword_140C694A8 )
    return 0LL;
  v4 = RtlLengthSid(a1);
  v8[0] = RtlHashBytes2((const unsigned __int8 *)a1, v4, v5, v6);
  v8[1] = a1;
  while ( v1 )
  {
    v7 = MiCompareUserSidHotPatchNodes(v8, (__int64)v1);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        return v1;
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      v1 = (_QWORD *)*v1;
    }
  }
  return v1;
}
