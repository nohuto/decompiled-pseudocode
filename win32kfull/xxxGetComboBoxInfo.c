__int64 __fastcall xxxGetComboBoxInfo(struct tagWND *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v10; // rcx
  __int64 v11; // r14
  PRKPROCESS *v12; // rax
  __int64 v13; // r15
  __int64 v14; // r15
  PRKPROCESS *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  _BYTE v28[48]; // [rsp+50h] [rbp-B8h]
  __int128 v29; // [rsp+80h] [rbp-88h]
  PRKPROCESS *v32; // [rsp+128h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  *(_DWORD *)v28 = 64;
  v7 = (__int64 *)unsafe_cast_fnid_or_class_to_PCOMBOWND(a1);
  if ( !v7 )
  {
    v5 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
    if ( !v5 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(a1, 0x164u, 0LL, a2, 0, 0, 0LL, 1, 1);
    }
  }
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v10 = -*(_QWORD *)CurrentProcessWin32Process;
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  v12 = *(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL);
  v32 = v12;
  if ( v12 != (PRKPROCESS *)v11 )
    KeAttachProcess(*v12);
  if ( v7 )
  {
    v13 = *v7;
    goto LABEL_19;
  }
  v14 = *v5;
  if ( *v5 )
  {
    if ( PsGetCurrentProcessWow64Process(v10) )
      v16 = 0LL;
    else
      v16 = 3LL;
    if ( (v16 & v14) != 0 )
      goto LABEL_50;
    v10 = MmUserProbeAddress;
    v13 = *(_QWORD *)(v14 + 144);
LABEL_19:
    if ( !v13 )
    {
      v15 = v32;
      goto LABEL_51;
    }
    if ( PsGetCurrentProcessWow64Process(v10) )
      v17 = 0LL;
    else
      v17 = 3LL;
    if ( (v17 & v13) == 0 )
    {
      v18 = *(_QWORD *)v13;
      v19 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
      if ( (v19 & v18) == 0 )
      {
        v20 = 0LL;
        if ( v18 )
          v20 = *(_QWORD *)v18;
        *(_QWORD *)&v28[40] = v20;
        v21 = *(_QWORD *)(v13 + 64);
        v22 = PsGetCurrentProcessWow64Process(MmUserProbeAddress) ? 0LL : 3LL;
        if ( (v22 & v21) == 0 )
        {
          v23 = 0LL;
          if ( v21 )
            v23 = *(_QWORD *)v21;
          if ( v23 == *(_QWORD *)a1 )
            v23 = 0LL;
          *(_QWORD *)&v29 = v23;
          v24 = *(_QWORD *)(v13 + 72);
          v25 = PsGetCurrentProcessWow64Process(v23) ? 0LL : 3LL;
          if ( (v25 & v24) == 0 )
          {
            v26 = 0LL;
            if ( v24 )
              v26 = *(_QWORD *)v24;
            *((_QWORD *)&v29 + 1) = v26;
            *(_OWORD *)&v28[4] = *(_OWORD *)(v13 + 16);
            *(_OWORD *)&v28[20] = *(_OWORD *)(v13 + 32);
            *(_DWORD *)&v28[36] = 0;
            v27 = *(_DWORD *)(v13 + 80);
            if ( (v27 & 3) == 1 )
            {
              *(_DWORD *)&v28[36] = 0x8000;
              v4 = 0x8000;
            }
            if ( (v27 & 0x20) != 0 )
              *(_DWORD *)&v28[36] = v4 | 8;
            *a2 = *(_OWORD *)v28;
            a2[1] = *(_OWORD *)&v28[16];
            a2[2] = *(_OWORD *)&v28[32];
            a2[3] = v29;
            v4 = 1;
            v15 = v32;
            goto LABEL_51;
          }
        }
      }
    }
LABEL_50:
    ExRaiseDatatypeMisalignment();
  }
  v15 = v32;
LABEL_51:
  if ( v15 != (PRKPROCESS *)v11 )
    KeDetachProcess();
  return v4;
}
