/*
 * XREFs of MiCompareUserSidHotPatchNodes @ 0x140A33974
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x140A3420C (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140A35638 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

__int64 __fastcall MiCompareUserSidHotPatchNodes(_QWORD *a1, __int64 a2)
{
  void *v3; // rbp
  void *v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 result; // rax

  if ( *a1 < *(_QWORD *)(a2 + 32) )
    return 0xFFFFFFFFLL;
  if ( *a1 > *(_QWORD *)(a2 + 32) )
    return 1LL;
  v3 = (void *)a1[1];
  v4 = (void *)(a2 + 40);
  v5 = RtlLengthSid(v3);
  v6 = RtlLengthSid(v4);
  if ( v5 < v6 )
    return 0xFFFFFFFFLL;
  if ( v5 > v6 )
    return 1LL;
  v7 = RtlCompareMemory(v3, v4, v5);
  if ( v7 == v5 )
    return 0LL;
  v8 = v7;
  result = 1LL;
  if ( *(_BYTE *)(v8 + a1[1]) < *((_BYTE *)v4 + v8) )
    return 0xFFFFFFFFLL;
  return result;
}
