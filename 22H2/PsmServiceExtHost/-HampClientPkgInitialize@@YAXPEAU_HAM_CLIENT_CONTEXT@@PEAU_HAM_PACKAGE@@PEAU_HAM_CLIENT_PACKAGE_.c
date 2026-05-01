/*
 * XREFs of ?HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180081298
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180080FCC (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180027654 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 */

void __fastcall HampClientPkgInitialize(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_PACKAGE *a2,
        struct _HAM_CLIENT_PACKAGE_CONTEXT *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10

  *((_QWORD *)a3 + 6) = 0LL;
  *((_QWORD *)a3 + 7) = 0LL;
  *((_QWORD *)a3 + 8) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 56;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 5) = a1;
  v3 = HamObjectIdGenerate(7);
  *(_QWORD *)(v4 + 48) = v3;
  if ( v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), (unsigned int)v6) <= v6 )
    __fastfail(v6 + 13);
  *(_QWORD *)(v4 + 56) = v5;
}
