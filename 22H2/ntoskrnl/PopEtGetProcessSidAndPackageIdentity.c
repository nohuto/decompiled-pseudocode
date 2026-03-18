/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1407B366C
 * Callers:
 *     PopEtGetProcessAppId @ 0x1407B16E0 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140225FB0 (RtlQueryPackageIdentity.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     SeQueryUserSidToken @ 0x140714EB0 (SeQueryUserSidToken.c)
 *     PsQueryProcessAttributesByToken @ 0x14071DEF0 (PsQueryProcessAttributesByToken.c)
 */

signed __int64 __fastcall PopEtGetProcessSidAndPackageIdentity(__int64 a1, _DWORD *a2, __int64 a3)
{
  ULONG_PTR v6; // rsi
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  LOBYTE(v8) = 0;
  v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  PsQueryProcessAttributesByToken(v6, (bool *)&v8, (bool *)&v9);
  if ( (_BYTE)v8 )
  {
    v8 = 256LL;
    v9 = 132LL;
    if ( (int)RtlQueryPackageIdentity(v6, (int)a3 + 4, (int)&v8, (int)a3 + 260, (__int64)&v9, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (v8 >> 1) - 1;
      *(_WORD *)(a3 + 2) = (v9 >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken(v6, a2, 0x44u, (ULONG *)&v8) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v6, 0x746C6644u);
}
