/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x1407D2E14
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PspExitProcess @ 0x1407E7B3C (PspExitProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14034C120 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsReferenceProcessFilePointer @ 0x14074C940 (PsReferenceProcessFilePointer.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(struct _EX_RUNDOWN_REF *a1, __int64 a2, char a3)
{
  void (__fastcall **ExtensionTable)(_QWORD, _QWORD, _QWORD); // r14
  unsigned __int64 v7; // rax
  unsigned __int64 Count; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // esi
  int v11; // eax
  __int128 v12; // xmm0
  char *v13; // rcx
  __int64 v14; // rax
  _OWORD *v15; // rbx
  unsigned int v16; // r15d
  struct _EX_RUNDOWN_REF *v17; // rax
  __int64 v18; // r8
  struct _EX_RUNDOWN_REF *v19; // r14
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  void (__fastcall **v24)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-49h]
  unsigned __int64 v25; // [rsp+28h] [rbp-41h]
  void (__fastcall **v26)(struct _EX_RUNDOWN_REF *, unsigned __int64, _OWORD *); // [rsp+30h] [rbp-39h]
  _OWORD v27[8]; // [rsp+40h] [rbp-29h] BYREF
  char v28; // [rsp+D0h] [rbp+67h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v27, 0, 0x48uLL);
  ExtensionTable = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v24 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  Count = a1[280].Count;
  v9 = 0;
  v10 = ((unsigned int)PspNotifyEnableMask >> 2) & 1;
  v26 = (void (__fastcall **)(struct _EX_RUNDOWN_REF *, unsigned __int64, _OWORD *))v7;
  Object = 0LL;
  v28 = 0;
  v25 = Count;
  if ( !a3 || (PspNotifyEnableMask & 4) == 0 && !ExtensionTable && !v7 )
  {
    v15 = 0LL;
    goto LABEL_14;
  }
  v11 = 0;
  *(_QWORD *)&v27[0] = 72LL;
  if ( Count )
    v11 = 2;
  DWORD2(v27[0]) = v11;
  *(struct _EX_RUNDOWN_REF *)&v27[1] = a1[168];
  v12 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  LODWORD(v27[4]) = 0;
  *(_OWORD *)((char *)&v27[1] + 8) = v12;
  if ( Count )
  {
    *((_QWORD *)&v27[2] + 1) = 0LL;
    v27[3] = 0LL;
    if ( a2 )
    {
      v23 = *(_QWORD *)(a2 + 432);
      if ( v23 )
      {
        *((_QWORD *)&v27[2] + 1) = *(_QWORD *)v23;
        v27[3] = *(_OWORD *)(v23 + 8);
      }
    }
    goto LABEL_13;
  }
  if ( a2 && (v13 = *(char **)(a2 + 176)) != 0LL )
  {
    Object = *(PVOID *)(a2 + 176);
    *((_QWORD *)&v27[2] + 1) = v13;
  }
  else
  {
    PsReferenceProcessFilePointer(a1, (unsigned __int64 *)&Object);
    v13 = (char *)Object;
    *((_QWORD *)&v27[2] + 1) = Object;
    v28 = 1;
    if ( !a2 )
      goto LABEL_41;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
  {
    DWORD2(v27[0]) |= 1u;
    *(_QWORD *)&v27[3] = a2 + 232;
    goto LABEL_11;
  }
LABEL_41:
  *(_QWORD *)&v27[3] = v13 + 88;
  if ( !a2 )
    goto LABEL_42;
LABEL_11:
  v14 = *(_QWORD *)(a2 + 208);
  if ( !v14 )
  {
LABEL_42:
    *((_QWORD *)&v27[3] + 1) = 0LL;
    goto LABEL_13;
  }
  *((_QWORD *)&v27[3] + 1) = v14 + 112;
LABEL_13:
  v15 = v27;
LABEL_14:
  if ( (PspNotifyEnableMask & 2) != 0 || (_BYTE)v10 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v16);
      v19 = v17;
      if ( v17 )
      {
        v21 = v17[2].Count;
        if ( !v25 || (v21 & 4) != 0 )
        {
          if ( (v21 & 2) != 0 )
          {
            if ( (_BYTE)v10 )
              ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, unsigned __int64, _OWORD *))v19[1].Count)(
                a1,
                a1[136].Count,
                v15);
          }
          else
          {
            LOBYTE(v18) = a3;
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))v19[1].Count)(
              a1[168].Count,
              a1[136].Count,
              v18);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v16, v19);
        if ( v15 )
        {
          v22 = *((_DWORD *)v15 + 16);
          if ( v22 < 0 )
            break;
        }
      }
      if ( ++v16 >= 0x40 )
        goto LABEL_18;
    }
    v9 = *((_DWORD *)v15 + 16);
    PsTerminateProcess(a1, (unsigned int)v22);
LABEL_18:
    ExtensionTable = v24;
  }
  if ( v26 && (!v15 || *((int *)v15 + 16) >= 0) )
  {
    (*v26)(a1, a1[136].Count, v15);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v15 || *((int *)v15 + 16) >= 0) )
  {
    (*ExtensionTable)(a1, a1[136].Count, v15);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v28 )
    ObfDereferenceObject(Object);
  return v9;
}
