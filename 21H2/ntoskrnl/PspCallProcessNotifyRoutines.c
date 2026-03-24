/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x14061AEAC
 * Callers:
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     PspExitProcess @ 0x1406CD37C (PspExitProcess.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14025A950 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14025AA10 (ExDereferenceCallBackBlock.c)
 *     ExReleaseExtensionTable @ 0x14029F2DC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14029F2F8 (ExGetExtensionTable.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     PsReferenceProcessFilePointer @ 0x140604BE0 (PsReferenceProcessFilePointer.c)
 *     PsTerminateProcess @ 0x1406BC4B8 (PsTerminateProcess.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(struct _EX_RUNDOWN_REF *a1, __int64 a2, char a3)
{
  void (__fastcall **ExtensionTable)(_QWORD, _QWORD, _QWORD); // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 Count; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // r12d
  int v11; // eax
  __int128 v12; // xmm0
  PADAPTER_OBJECT v13; // rcx
  _DMA_OPERATIONS **p_DmaOperations; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _OWORD *v17; // rbx
  unsigned int v18; // r14d
  struct _EX_RUNDOWN_REF *v19; // rax
  __int64 v20; // r8
  struct _EX_RUNDOWN_REF *v21; // rsi
  int v23; // eax
  int v24; // eax
  _QWORD *v25; // rcx
  void (__fastcall **v26)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-49h]
  unsigned __int64 v27; // [rsp+28h] [rbp-41h]
  void (__fastcall **v28)(struct _EX_RUNDOWN_REF *, unsigned __int64, _OWORD *); // [rsp+30h] [rbp-39h]
  _OWORD v29[8]; // [rsp+40h] [rbp-29h] BYREF
  char v30; // [rsp+D0h] [rbp+67h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v29, 0, 0x48uLL);
  ExtensionTable = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v26 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  Count = a1[280].Count;
  v9 = 0;
  v10 = ((unsigned int)PspNotifyEnableMask >> 2) & 1;
  v28 = (void (__fastcall **)(struct _EX_RUNDOWN_REF *, unsigned __int64, _OWORD *))v7;
  DmaAdapter = 0LL;
  v30 = 0;
  v27 = Count;
  if ( !a3 || (PspNotifyEnableMask & 4) == 0 && !ExtensionTable && !v7 )
  {
    v17 = 0LL;
    goto LABEL_17;
  }
  v11 = 0;
  *(_QWORD *)&v29[0] = 72LL;
  if ( Count )
    v11 = 2;
  DWORD2(v29[0]) = v11;
  *(struct _EX_RUNDOWN_REF *)&v29[1] = a1[168];
  v12 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  LODWORD(v29[4]) = 0;
  *(_OWORD *)((char *)&v29[1] + 8) = v12;
  if ( Count )
  {
    *((_QWORD *)&v29[2] + 1) = 0LL;
    v29[3] = 0LL;
    if ( !a2 )
      goto LABEL_16;
    v25 = *(_QWORD **)(a2 + 456);
    if ( !v25 )
      goto LABEL_16;
    *((_QWORD *)&v29[2] + 1) = *v25;
    *(_QWORD *)&v29[3] = v25[1];
    v16 = v25[2];
  }
  else
  {
    if ( a2 && (v13 = *(PADAPTER_OBJECT *)(a2 + 176)) != 0LL )
    {
      DmaAdapter = *(PADAPTER_OBJECT *)(a2 + 176);
    }
    else
    {
      v30 = 1;
      PsReferenceProcessFilePointer(a1, (ULONG_PTR *)&DmaAdapter);
      v13 = DmaAdapter;
    }
    *((_QWORD *)&v29[2] + 1) = v13;
    if ( a2 && (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
    {
      DWORD2(v29[0]) |= 1u;
      p_DmaOperations = (_DMA_OPERATIONS **)(a2 + 232);
    }
    else
    {
      p_DmaOperations = &v13[5].DmaOperations;
    }
    *(_QWORD *)&v29[3] = p_DmaOperations;
    if ( !a2 || (v15 = *(_QWORD *)(a2 + 208)) == 0 )
    {
      *((_QWORD *)&v29[3] + 1) = 0LL;
      goto LABEL_16;
    }
    v16 = v15 + 112;
  }
  *((_QWORD *)&v29[3] + 1) = v16;
LABEL_16:
  v17 = v29;
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
        v23 = v19[2].Count;
        if ( !v27 || (v23 & 4) != 0 )
        {
          if ( (v23 & 2) != 0 )
          {
            if ( (_BYTE)v10 )
              ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, unsigned __int64, _OWORD *))v21[1].Count)(
                a1,
                a1[136].Count,
                v17);
          }
          else
          {
            LOBYTE(v20) = a3;
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))v21[1].Count)(
              a1[168].Count,
              a1[136].Count,
              v20);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v18, v21);
        if ( v17 )
        {
          v24 = *((_DWORD *)v17 + 16);
          if ( v24 < 0 )
            break;
        }
      }
      if ( ++v18 >= 0x40 )
        goto LABEL_21;
    }
    v9 = *((_DWORD *)v17 + 16);
    PsTerminateProcess(a1, (unsigned int)v24);
LABEL_21:
    ExtensionTable = v26;
  }
  if ( v28 && (!v17 || *((int *)v17 + 16) >= 0) )
  {
    (*v28)(a1, a1[136].Count, v17);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v17 || *((int *)v17 + 16) >= 0) )
  {
    (*ExtensionTable)(a1, a1[136].Count, v17);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v30 )
    HalPutDmaAdapter(DmaAdapter);
  return v9;
}
