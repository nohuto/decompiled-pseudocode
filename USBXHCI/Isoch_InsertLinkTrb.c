/*
 * XREFs of Isoch_InsertLinkTrb @ 0x1C00445F4
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     TR_InitializeLinkTrb @ 0x1C0007F3C (TR_InitializeLinkTrb.c)
 */

char __fastcall Isoch_InsertLinkTrb(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v4; // rax
  _QWORD *v6; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v16 = 0LL;
  v4 = a2 + 1;
  v6 = (_QWORD *)a2[1];
  if ( v6 == a2 + 1 )
    return 0;
  if ( (_QWORD *)v6[1] != v4 )
    goto LABEL_7;
  v9 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 )
    goto LABEL_7;
  *v4 = v9;
  *(_QWORD *)(v9 + 8) = v4;
  v6[1] = v6;
  *v6 = v6;
  TR_InitializeLinkTrb(a1, a3, (__int64)&v16, a4);
  v10 = v6[3];
  v11 = 2LL * *(unsigned int *)(a1 + 192);
  v12 = *(_QWORD *)(a1 + 184);
  HIDWORD(v16) &= ~2u;
  *(_QWORD *)&v16 = v10;
  *(_OWORD *)(v12 + 8 * v11) = v16;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v13 = (_QWORD *)a2[4];
  v14 = *(_QWORD **)(a1 + 176);
  if ( (_QWORD *)*v13 != a2 + 3 )
LABEL_7:
    __fastfail(3u);
  *v14 = a2 + 3;
  v14[1] = v13;
  *v13 = v14;
  a2[4] = v14;
  *(_QWORD *)(a1 + 176) = v6;
  v15 = v6[2];
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = v15;
  a2[12] = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1;
}
