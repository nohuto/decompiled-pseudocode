/*
 * XREFs of MiUnlinkProtectedStandbyPfn @ 0x14032F4F0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkStandbyPage @ 0x140464E9A (MiUnlinkStandbyPage.c)
 * Callees:
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiDecayNodeNowEmpty @ 0x1402D6BC0 (MiDecayNodeNowEmpty.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

void __fastcall MiUnlinkProtectedStandbyPfn(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // rbx
  BOOL v4; // edi
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r9
  signed __int64 v10; // rdx
  signed __int64 v11; // r8
  signed __int64 v12; // rdx

  v1 = *a1 & 0xFFFFFFFFFFLL;
  v2 = qword_140C67DE0;
  v3 = a1[3] & 0xFFFFFFFFFFLL;
  v4 = 0;
  if ( v3 >= qword_140C67DE0 && v3 < qword_140C67DE0 + 2048 )
    v4 = v1 == v3;
  v5 = 0xFFFFDE0000000000uLL;
  v6 = 0xFFFFFF0000000000uLL;
  if ( v3 < qword_140C67DE0 || v3 >= qword_140C67DE0 + 2048 )
  {
    *(_QWORD *)(48 * v3 - 0x220000000000LL) = v1 | *(_QWORD *)(48 * v3 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
  }
  else
  {
    v7 = MiSwizzleInvalidPte((v1 << 12) | 0x880);
    *(_QWORD *)(v8 + 16) = v7;
  }
  v9 = v5 + 48 * v1;
  if ( v1 < v2 || v1 >= v2 + 2048 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), v3 | v6 & v10, v10);
    if ( v10 != v11 )
    {
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), v3 | v6 & v11, v11);
      }
      while ( v12 != v11 );
    }
  }
  else
  {
    MiSetPfnPteFrame(v9, v3);
  }
  if ( v4 )
    MiDecayNodeNowEmpty(v3);
}
