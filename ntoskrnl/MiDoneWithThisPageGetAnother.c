/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x1406619A4
 * Callers:
 *     MiUpdateForkMaps @ 0x140662E50 (MiUpdateForkMaps.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiFinishLastForkPageTable @ 0x140661F1C (MiFinishLastForkPageTable.c)
 */

_QWORD *__fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v9; // eax
  unsigned int v10; // ebp
  _QWORD *v11; // r15
  volatile LONG *SharedVm; // rbx
  KIRQL v13; // al
  __int64 Page; // rax
  _QWORD *result; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2 + 1664;
  v5 = *a1;
  v16 = 0LL;
  if ( v5 != -1 )
    MiFinishLastForkPageTable(a1, v5);
  MiInitializePageColorBase(v4, 0, (__int64)&v16);
  v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v16, 1u);
  v10 = HIDWORD(v16) | v9 & DWORD2(v16);
  v11 = *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  while ( 1 )
  {
    Page = MiGetPage((__int64)v11, v10, 0x302u);
    *a1 = Page;
    if ( Page != -1 )
      break;
    MiUnlockWorkingSetExclusive(v4, a4);
    MiWaitForFreePage(v11);
    SharedVm = (volatile LONG *)MiGetSharedVm(v4);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    a4 = v13;
  }
  result = (_QWORD *)(48 * Page - 0x220000000000LL);
  result[2] &= 0xFFFFFFFFFC00FFFFuLL;
  *result &= 0xFFFFFFFFFFFFC00FuLL;
  return result;
}
