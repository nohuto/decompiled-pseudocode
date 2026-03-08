/*
 * XREFs of MiApplyHotPatchToDriverDataPages @ 0x140A32268
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     MiSetImageProtection @ 0x1402E3BB8 (MiSetImageProtection.c)
 *     RtlFindNextForwardRunSetEx @ 0x1405A5FA4 (RtlFindNextForwardRunSetEx.c)
 *     RtlApplyHotPatch @ 0x140AAA600 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToDriverDataPages(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebp
  unsigned __int64 i; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 NextForwardRunSet; // rax
  unsigned __int64 v8; // r14
  char v10; // [rsp+28h] [rbp-E0h]
  int v11; // [rsp+38h] [rbp-D0h]
  int v12; // [rsp+68h] [rbp-A0h]
  int v13; // [rsp+A8h] [rbp-60h]
  __int64 v14; // [rsp+B0h] [rbp-58h]
  __int64 v15; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+C0h] [rbp-48h]
  _QWORD v17[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v19; // [rsp+110h] [rbp+8h] BYREF

  v19 = 0LL;
  v17[1] = 0LL;
  v17[0] = MiPatchDataPagesCallback;
  v18 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(**(_QWORD **)a1 + 48LL);
  v3 = RtlApplyHotPatch(
         v2,
         v2,
         0,
         0,
         0LL,
         v10,
         -1LL,
         v11,
         *(_QWORD *)(*(_QWORD *)v18 + 48LL),
         *(_QWORD *)(*(_QWORD *)v18 + 48LL),
         0LL,
         0,
         0LL,
         v12,
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32),
         2,
         34404,
         0LL,
         0LL,
         (__int64)v17,
         v13,
         v14,
         v15,
         v16);
  for ( i = 0LL; ; i = v6 )
  {
    NextForwardRunSet = RtlFindNextForwardRunSetEx((unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 64LL), i, &v19);
    v8 = NextForwardRunSet;
    if ( !NextForwardRunSet )
      break;
    v5 = v19;
    v6 = NextForwardRunSet + v19;
    MiSetImageProtection(
      **(_QWORD **)(a1 + 8),
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 48LL) + (v19 << 12),
      (_DWORD)NextForwardRunSet << 12);
    RtlClearBitsEx(*(_QWORD *)(a1 + 8) + 64LL, v5, v8);
  }
  return v3;
}
