/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x140738F48
 * Callers:
 *     CmInitSiloNamespace @ 0x1407388F8 (CmInitSiloNamespace.c)
 *     CmInitServerSiloState @ 0x140816884 (CmInitServerSiloState.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpLockKcbStackExclusive @ 0x1406B7DF8 (CmpLockKcbStackExclusive.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rbx
  _QWORD *v7; // rbx
  int KeyBody; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  signed __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+68h] [rbp-A0h]
  _OWORD v23[19]; // [rsp+78h] [rbp-90h] BYREF

  LOBYTE(v19) = 0;
  *(_OWORD *)v21 = 0LL;
  WORD1(v21[0]) = -1;
  v22 = 0LL;
  memset(v23, 0, 0x128uLL);
  LODWORD(v23[6]) = -1;
  *((_QWORD *)&v23[9] + 1) = &v23[9];
  *(_QWORD *)&v23[9] = &v23[9];
  memset((char *)&v23[13] + 8, 0, 0x50uLL);
  v6 = 0LL;
  v20 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry(v3, v2, v4, v5);
  v7 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb(v21, *((_QWORD *)CmpRegistryRootObject + 1));
  CmpLockKcbStackExclusive((__int64)v21);
  KeyBody = CmpCreateKeyBody(v7[1], 3, (__int64)v21, (__int64)&v20, (__int64)&v19);
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcbStack(v21);
    CmpUnlockRegistry(v10, v9, v11, v12);
    v13 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v20, 0LL);
    v6 = (void *)(v20 & -(__int64)(v13 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  CmpUnlockKcbStack(v21);
  CmpUnlockRegistry(v16, v15, v17, v18);
  v6 = (void *)v20;
LABEL_5:
  if ( *((_QWORD *)&v22 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v22 + 1));
  CmpCleanupParseContext(v23, 0LL);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)KeyBody;
}
