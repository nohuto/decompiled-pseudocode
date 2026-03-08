/*
 * XREFs of MiApplySingleSessionPatch @ 0x140A333E0
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiUnlockDriverPages @ 0x14087313C (MiUnlockDriverPages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A34ABC (MiIdentifyPatchImageDataPages.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 */

__int64 __fastcall MiApplySingleSessionPatch(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD v9[8]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v10[14]; // [rsp+78h] [rbp-19h] BYREF

  memset(v10, 0, 0x68uLL);
  v4 = *(_DWORD *)(a1 + 64);
  v5 = *a2;
  v10[0] = a1;
  LODWORD(v10[3]) = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  v10[2] = *(_QWORD *)(v5 + 16);
  memset(v9, 0, sizeof(v9));
  v6 = *(_QWORD *)(a1 + 112);
  v9[1] = v10;
  v9[0] = v5;
  v9[2] = MiSectionControlArea(v6);
  v7 = MiIdentifyPatchImageDataPages(v9, 0LL);
  if ( v7 >= 0 )
  {
    v7 = MiMapAndApplyPatchInSession(a1, a2[1], v9);
    if ( v7 >= 0 )
      v7 = 0;
  }
  MiUnlockDriverPages(v10);
  MiLogHotPatchOperationStatus(*(_DWORD *)(*(_QWORD *)*a2 + 120LL), *(_DWORD *)(*(_QWORD *)*a2 + 156LL), a1 + 72, v7, 3);
  if ( v7 >= 0 )
    return 1LL;
  *((_DWORD *)a2 + 4) = v7;
  return 0LL;
}
