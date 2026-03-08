/*
 * XREFs of MiCombineWithStandbyExisting @ 0x14029F020
 * Callers:
 *     MiConvertStandbyToProto @ 0x14029ED24 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiWriteRepurposedTransitionPte @ 0x14029EC64 (MiWriteRepurposedTransitionPte.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14029ECE8 (MiUnlockNestedProtoPoolPage.c)
 *     MiStandbyPageStillCombineCandidate @ 0x14029F354 (MiStandbyPageStillCombineCandidate.c)
 *     MiRecheckCombineVm @ 0x14029F408 (MiRecheckCombineVm.c)
 *     MiTryLockLeafPage @ 0x1402A29B8 (MiTryLockLeafPage.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiMapSinglePage @ 0x14034A868 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x14034B140 (MiConfirmCombinePageContents.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiCombineWithStandbyExisting(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  ULONG_PTR v5; // rbp
  unsigned __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 result; // rax
  unsigned int v19; // ebx
  __int64 v20; // [rsp+20h] [rbp-58h]
  unsigned int v22; // [rsp+88h] [rbp+10h]
  __int64 v23; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  v23 = 0LL;
  v4 = a1[14];
  v20 = *a1;
  v22 = *((_DWORD *)a1 + 35);
  v5 = a1[8];
  v6 = (unsigned __int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = a3 + 32;
  v8 = (*(_QWORD *)(a3 + 48) >> 55) & 0x1FLL;
  v24 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v4 + 174));
  v9 = MiLockProtoPoolPage(a3 + 32, 0LL);
  v10 = v9;
  if ( v9 )
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      v11 = *v6;
      if ( (*(_BYTE *)a1[9] & 1) != 0 && (v11 & 0x400) == 0 && (v11 & 0x800) != 0 )
      {
        if ( qword_140C657C0 && (v11 & 0x10) == 0 )
          v11 &= ~qword_140C657C0;
        if ( ((v11 >> 12) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4)
          && (unsigned int)MiStandbyPageStillCombineCandidate(v5, v24, v6, (unsigned int)v8)
          && (unsigned int)MiRecheckCombineVm(v20, v22, v5, v4) )
        {
          MiTryLockLeafPage(v7, 1LL, &v23);
          v12 = v23;
          if ( v23 )
          {
            v13 = a1[12] + 4096;
            v14 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
            MiMapSinglePage(v13, 0xAAAAAAAAAAAAAAABuLL * ((v23 + 0x220000000000LL) >> 4), 3221225488LL, 0LL);
            v15 = MiConfirmCombinePageContents(a1, 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4), v14);
            *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
            if ( v15 )
            {
              if ( (MiUnlinkPageFromListEx(v5, 0LL) & 3) == 0 )
              {
                *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
                MiGetPfnPriority(v5);
                MiUpdatePfnPriority(v12);
                _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockNestedProtoPoolPage(v10);
                v16 = MiSwizzleInvalidPte((v7 << 16) | 0x400);
                MiWriteRepurposedTransitionPte(v5, v16 | 0x800);
                v17 = *(_QWORD *)(v5 + 40);
                *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
                MiPfnReferenceCountIsZero(v5, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4));
                _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiLockAndDecrementShareCount(48 * (v17 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 0);
                ++*(_QWORD *)a1[13];
                return 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v10);
              MiDiscardTransitionPteEx(v5, 0LL);
              goto LABEL_24;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v19 = -1073741800;
          }
          else
          {
            v19 = -1073741739;
          }
          MiUnlockNestedProtoPoolPage(v10);
          result = v19;
LABEL_18:
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return result;
        }
      }
      MiUnlockNestedProtoPoolPage(v10);
LABEL_24:
      result = 3221225496LL;
      goto LABEL_18;
    }
    MiUnlockProtoPoolPage(v9, 0x11u);
  }
  return 3221225557LL;
}
