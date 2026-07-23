/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x140A71758
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SepInitializeDebugOptions @ 0x140A717F8 (SepInitializeDebugOptions.c)
 *     SeSecureBootRegisterPolicy @ 0x140A7184C (SeSecureBootRegisterPolicy.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = 0;
  v6 = 0;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3
    || (v2 = *(_QWORD *)(v3 + 2872)) == 0
    || (v4 = *(unsigned int *)(v2 + 64), !(_DWORD)v4)
    || (v1 = SeSecureBootRegisterPolicy(*(unsigned int *)(v2 + 60) + v2 + 72, v4), v1 >= 0) )
  {
    SepInitializeDebugOptions();
    if ( qword_140C1DB40 )
    {
      v1 = qword_140C1DB40(v2, &v7, &v6);
      if ( v1 >= 0 )
      {
        SeCiStateElements = v7;
        SeCiStateElementCount = v6;
      }
    }
  }
  return (unsigned int)v1;
}
