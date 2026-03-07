__int64 __fastcall MiUnapplyDriverHotPatch(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  __int64 *v6; // r14
  __int64 v7; // rcx
  void *v8; // rdi
  SIZE_T v9; // rbx
  unsigned __int64 SessionVm; // rax
  __int64 v11; // r15
  PVOID Pool; // rax
  _DWORD v14[4]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v15[14]; // [rsp+30h] [rbp-79h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-9h] BYREF

  v14[0] = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v15, 0, 0x68uLL);
  v4 = *(_DWORD *)(a1 + 64);
  v15[0] = a1;
  v5 = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  LODWORD(v15[3]) = v5;
  LODWORD(v9) = VslDetermineHotPatchUndoTableSize(v7, v14);
  if ( (v9 & 0x80000000) == 0LL )
  {
    v9 = v14[0];
    if ( v14[0] )
    {
      if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
      {
        KeStackAttachProcess((PRKPROCESS)*(&xmmword_140C694C8 + 1), &ApcState);
        v6 = MiAttachToSessionForBaseImage(a1);
        SessionVm = MiGetSessionVm();
      }
      else
      {
        SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
      }
      v11 = SessionVm;
      Pool = MiAllocatePool(256, v9, 0x54555048u);
      v8 = Pool;
      if ( Pool )
      {
        LODWORD(v9) = VslObtainHotPatchUndoTable(*(PVOID *)(a1 + 48), (__int64)Pool, v9);
        if ( (v9 & 0x80000000) == 0LL )
        {
          LODWORD(v9) = MiPrepareDriverPatchState((__int64)v15, v11);
          if ( (v9 & 0x80000000) == 0LL )
          {
            LODWORD(v9) = MiIdentifyImageDiscardablePages(v15);
            if ( (v9 & 0x80000000) == 0LL )
            {
              LODWORD(v9) = MiLockHotPatchUndoPages(v15, (int)v8);
              if ( (v9 & 0x80000000) == 0LL )
                LODWORD(v9) = VslRevertHotPatch(*(_QWORD *)(a1 + 48), 0, 0);
            }
          }
        }
      }
      else
      {
        LODWORD(v9) = -1073741670;
      }
    }
  }
  MiUnlockDriverPages(v15);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v6 )
  {
    MiDetachSessionGlobal((__int64)(&xmmword_140C694D8 + 1));
    MiDereferenceSessionGlobal(v6);
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  }
  if ( (v9 & 0x80000000) == 0LL )
    *(_QWORD *)(a2 + 120) = 0LL;
  return (unsigned int)v9;
}
