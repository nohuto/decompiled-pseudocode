/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x140684B0C
 * Callers:
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14027BF80 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 *     PsReferenceProcessFilePointer @ 0x1406F4310 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(_QWORD *a1, __int64 a2, char a3)
{
  void (__fastcall **ExtensionTable)(_QWORD, _QWORD, _QWORD); // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // r12d
  int v11; // eax
  __int128 v12; // xmm0
  PADAPTER_OBJECT v13; // rcx
  _DMA_OPERATIONS **p_DmaOperations; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int *v17; // rbx
  unsigned int v18; // r14d
  struct _EX_RUNDOWN_REF *v19; // rax
  __int64 v20; // r8
  struct _EX_RUNDOWN_REF *v21; // rsi
  int Count; // eax
  _QWORD *v24; // rcx
  void (__fastcall **v25)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-49h]
  __int64 v26; // [rsp+28h] [rbp-41h]
  void (__fastcall **v27)(_QWORD *, _QWORD, int *); // [rsp+30h] [rbp-39h]
  _OWORD v28[8]; // [rsp+40h] [rbp-29h] BYREF
  char v29; // [rsp+D0h] [rbp+67h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v28, 0, 0x48uLL);
  ExtensionTable = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v25 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  v8 = a1[280];
  v9 = 0;
  v10 = ((unsigned int)PspNotifyEnableMask >> 2) & 1;
  v27 = (void (__fastcall **)(_QWORD *, _QWORD, int *))v7;
  DmaAdapter = 0LL;
  v29 = 0;
  v26 = v8;
  if ( !a3 || (PspNotifyEnableMask & 4) == 0 && !ExtensionTable && !v7 )
  {
    v17 = 0LL;
    goto LABEL_17;
  }
  v11 = 0;
  *(_QWORD *)&v28[0] = 72LL;
  if ( v8 )
    v11 = 2;
  DWORD2(v28[0]) = v11;
  *(_QWORD *)&v28[1] = a1[168];
  v12 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  LODWORD(v28[4]) = 0;
  *(_OWORD *)((char *)&v28[1] + 8) = v12;
  if ( v8 )
  {
    *((_QWORD *)&v28[2] + 1) = 0LL;
    v28[3] = 0LL;
    if ( !a2 )
      goto LABEL_16;
    v24 = *(_QWORD **)(a2 + 456);
    if ( !v24 )
      goto LABEL_16;
    *((_QWORD *)&v28[2] + 1) = *v24;
    *(_QWORD *)&v28[3] = v24[1];
    v16 = v24[2];
  }
  else
  {
    if ( a2 && (v13 = *(PADAPTER_OBJECT *)(a2 + 176)) != 0LL )
    {
      DmaAdapter = *(PADAPTER_OBJECT *)(a2 + 176);
    }
    else
    {
      v29 = 1;
      PsReferenceProcessFilePointer(a1, &DmaAdapter);
      v13 = DmaAdapter;
    }
    *((_QWORD *)&v28[2] + 1) = v13;
    if ( a2 && (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
    {
      DWORD2(v28[0]) |= 1u;
      p_DmaOperations = (_DMA_OPERATIONS **)(a2 + 232);
    }
    else
    {
      p_DmaOperations = &v13[5].DmaOperations;
    }
    *(_QWORD *)&v28[3] = p_DmaOperations;
    if ( !a2 || (v15 = *(_QWORD *)(a2 + 208)) == 0 )
    {
      *((_QWORD *)&v28[3] + 1) = 0LL;
      goto LABEL_16;
    }
    v16 = v15 + 112;
  }
  *((_QWORD *)&v28[3] + 1) = v16;
LABEL_16:
  v17 = (int *)v28;
LABEL_17:
  if ( (PspNotifyEnableMask & 2) != 0 || (_BYTE)v10 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v18);
      v21 = v19;
      if ( v19 )
      {
        Count = v19[2].Count;
        if ( !v26 || (Count & 4) != 0 )
        {
          if ( (Count & 2) != 0 )
          {
            if ( (_BYTE)v10 )
              ((void (__fastcall *)(_QWORD *, _QWORD, int *))v21[1].Count)(a1, a1[136], v17);
          }
          else
          {
            LOBYTE(v20) = a3;
            ((void (__fastcall *)(_QWORD, _QWORD, __int64))v21[1].Count)(a1[168], a1[136], v20);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v18, v21);
        if ( v17 )
        {
          if ( v17[16] < 0 )
            break;
        }
      }
      if ( ++v18 >= 0x40 )
        goto LABEL_21;
    }
    v9 = v17[16];
    PsTerminateProcess((ULONG_PTR)a1);
LABEL_21:
    ExtensionTable = v25;
  }
  if ( v27 && (!v17 || v17[16] >= 0) )
  {
    (*v27)(a1, a1[136], v17);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v17 || v17[16] >= 0) )
  {
    (*ExtensionTable)(a1, a1[136], v17);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v29 )
    HalPutDmaAdapter(DmaAdapter);
  return v9;
}
