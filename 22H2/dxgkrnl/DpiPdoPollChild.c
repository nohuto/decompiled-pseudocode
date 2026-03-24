/*
 * XREFs of DpiPdoPollChild @ 0x1C02D970C
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C01791A0 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0021164 (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall DpiPdoPollChild(__int64 a1, int a2, int a3, char a4, char a5)
{
  struct _IO_REMOVE_LOCK *v5; // r15
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rax
  _QWORD *v18; // rax

  v5 = *(struct _IO_REMOVE_LOCK **)(a1 + 64);
  v10 = ExAllocateFromNPagedLookasideList(&stru_1C00B2C00);
  v15 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = 1953656900;
    *((_DWORD *)v10 + 5) = 10;
    v10[3] = a1;
    *((_DWORD *)v10 + 8) = a2;
    *((_DWORD *)v10 + 9) = a3;
    *((_BYTE *)v10 + 40) = a4;
    *((_BYTE *)v10 + 41) = a5;
    *((_BYTE *)v10 + 42) = 1;
    v16 = IoAcquireRemoveLockEx(v5 + 2, v10, File, 1u, 0x20u);
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v18 = (_QWORD *)qword_1C00B2DA8;
    if ( *(PVOID **)qword_1C00B2DA8 != &Entry )
      __fastfail(3u);
    *v15 = &Entry;
    v15[1] = v18;
    *v18 = v15;
    qword_1C00B2DA8 = (__int64)v15;
    KeReleaseMutex((PRKMUTEX)P, 0);
    KeSetTimer(&stru_1C00B2D10, (LARGE_INTEGER)-3000000LL, &stru_1C00B2D50);
  }
  else
  {
    v16 = -1073741670;
    v17 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v17);
  }
  return v16;
}
