/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C0141DCC
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C0141BC0 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0141E90 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     unsafe_cast_fnid_or_class_to_PCOMBOWND @ 0x1C0141F28 (unsafe_cast_fnid_or_class_to_PCOMBOWND.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(unsigned __int64 *BugCheckParameter2, __int64 a2)
{
  __int64 *v4; // rsi
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // r14
  PRKPROCESS *v10; // r15
  ULONG64 v11; // rcx
  int v12; // r13d
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  _BYTE v28[48]; // [rsp+50h] [rbp-A8h]
  __int128 v29; // [rsp+80h] [rbp-78h]

  v4 = 0LL;
  *(_DWORD *)v28 = 64;
  v5 = 0;
  v8 = (__int64 *)unsafe_cast_fnid_or_class_to_PCOMBOWND();
  if ( !v8 )
  {
    v4 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(BugCheckParameter2);
    if ( !v4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x164u, 0LL, a2, 0, 0, 0LL, 1, 1);
    }
  }
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87LL, v6);
    return 0LL;
  }
  v10 = *(PRKPROCESS **)(BugCheckParameter2[2] + 424);
  if ( v10 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v7) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    KeAttachProcess(*v10);
  }
  if ( v8 )
  {
    v13 = *v8;
  }
  else
  {
    v14 = *v4;
    if ( !*v4 )
      goto LABEL_48;
    if ( PsGetCurrentProcessWow64Process(v11) )
      v15 = 0LL;
    else
      v15 = 3LL;
    if ( (v15 & v14) != 0 )
      goto LABEL_47;
    v11 = MmUserProbeAddress;
    v13 = *(_QWORD *)(v14 + 144);
  }
  if ( v13 )
  {
    if ( PsGetCurrentProcessWow64Process(v11) )
      v16 = 0LL;
    else
      v16 = 3LL;
    if ( (v16 & v13) == 0 )
    {
      v17 = *(_QWORD *)v13;
      v18 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
      if ( (v18 & v17) == 0 )
      {
        v19 = 0LL;
        if ( v17 )
          v19 = *(_QWORD *)v17;
        *(_QWORD *)&v28[40] = v19;
        v20 = *(_QWORD *)(v13 + 64);
        v21 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
        if ( (v21 & v20) == 0 )
        {
          v22 = 0LL;
          if ( v20 )
            v22 = *(_QWORD *)v20;
          if ( v22 == *BugCheckParameter2 )
            v22 = 0LL;
          *(_QWORD *)&v29 = v22;
          v23 = *(_QWORD *)(v13 + 72);
          v24 = PsGetCurrentProcessWow64Process(v22) ? 0LL : 3LL;
          if ( (v24 & v23) == 0 )
          {
            v25 = 0LL;
            if ( v23 )
              v25 = *(_QWORD *)v23;
            *((_QWORD *)&v29 + 1) = v25;
            *(_OWORD *)&v28[4] = *(_OWORD *)(v13 + 16);
            *(_OWORD *)&v28[20] = *(_OWORD *)(v13 + 32);
            *(_DWORD *)&v28[36] = 0;
            v26 = *(_DWORD *)(v13 + 80);
            v27 = 0;
            if ( (v26 & 3) == 1 )
            {
              v27 = 0x8000;
              *(_DWORD *)&v28[36] = 0x8000;
            }
            if ( (v26 & 0x20) != 0 )
              *(_DWORD *)&v28[36] = v27 | 8;
            *(_OWORD *)a2 = *(_OWORD *)v28;
            *(_OWORD *)(a2 + 16) = *(_OWORD *)&v28[16];
            *(_OWORD *)(a2 + 32) = *(_OWORD *)&v28[32];
            *(_OWORD *)(a2 + 48) = v29;
            v5 = 1;
            goto LABEL_48;
          }
        }
      }
    }
LABEL_47:
    ExRaiseDatatypeMisalignment();
  }
LABEL_48:
  if ( v12 )
    KeDetachProcess();
  return v5;
}
