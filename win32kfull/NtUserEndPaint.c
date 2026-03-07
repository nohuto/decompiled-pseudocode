__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rsi
  int v6; // edi
  __int64 v7; // rax
  int v8; // ebx
  int v9; // r12d
  int v10; // r13d
  unsigned int *v11; // rax
  int v12; // edx
  __int64 v13; // r8
  int v14; // r14d
  int v15; // r9d
  int v16; // eax
  int v17; // r15d
  __int64 v18; // rax
  int v19; // ebx
  int v20; // r14d
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int *v24; // rax
  int v25; // r12d
  int v26; // r9d
  int v27; // ecx
  int v28; // r13d
  __int64 v29; // rcx
  int v31; // r12d
  int v32; // r13d
  int v33; // ecx
  __int64 v34; // rbx
  __int64 v35; // rcx
  void *v36; // rax
  int v37; // r14d
  int v38; // r15d
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rcx
  void *v42; // rax
  __int128 v43; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+40h] [rbp-78h]
  _OWORD v45[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v46; // [rsp+90h] [rbp-28h]

  memset_0(v45, 0, 0x48uLL);
  v43 = 0LL;
  v44 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = (__int64 *)ValidateHwnd(a1);
  v6 = 0;
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)&v43 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v43;
  *((_QWORD *)&v43 + 1) = v5;
  HMLockObject(v5);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v45[0] = *(_OWORD *)a2;
  v45[1] = *(_OWORD *)(a2 + 16);
  v45[2] = *(_OWORD *)(a2 + 32);
  v45[3] = *(_OWORD *)(a2 + 48);
  v46 = *(_QWORD *)(a2 + 64);
  ReleaseCacheDC(*(_QWORD *)&v45[0], 1LL);
  if ( (*(_BYTE *)(v5[5] + 20) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(v5, ghrgnUpdateSave, (unsigned int)gRdwFlags);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0, v5, 0x402u, 1);
  }
  v7 = v5[5];
  v8 = *(_DWORD *)(v7 + 28);
  v9 = *(_DWORD *)(v7 + 24);
  v10 = *(_DWORD *)(v7 + 232);
  *(_BYTE *)(v7 + 20) &= ~1u;
  if ( (unsigned int)IsWindowDesktopComposed(v5) )
  {
    v11 = (unsigned int *)v5[5];
    v12 = v11[7];
    v13 = v11[6];
    v14 = v9 ^ v11[6];
    v15 = v11[58];
    v16 = v10 ^ v15;
    v17 = v8 ^ v12;
    if ( v8 != v12 || v14 || v16 )
    {
      v31 = 0;
      v32 = 0;
      v33 = 0;
      if ( (v17 & 0xB1CF0000) != 0 )
      {
        v31 = -16;
        v32 = v12;
      }
      else if ( (v14 & 0x4E27A9) != 0 )
      {
        v31 = -20;
        v32 = v13;
      }
      else
      {
        if ( (v16 & 0x12C0) == 0 )
        {
LABEL_28:
          if ( v33 )
          {
            DirtyVisRgnTrackers((__int64)v5);
            v34 = *v5;
            v36 = (void *)ReferenceDwmApiPort(v35);
            DwmAsyncChildStyleChange(v36, v34, v31, v32);
          }
          if ( (v14 & 0x200A0381) != 0 || (v17 & 0xC40000) != 0 )
            WindowMargins::CheckForChanges((struct tagWND *)v5, 1LL, v13);
          goto LABEL_9;
        }
        v31 = -268435456;
        v32 = v15;
      }
      v33 = 1;
      goto LABEL_28;
    }
  }
LABEL_9:
  v18 = v5[5];
  v19 = *(_DWORD *)(v18 + 28);
  v20 = *(_DWORD *)(v18 + 24);
  v21 = *(_DWORD *)(v18 + 232);
  *(_BYTE *)(v18 + 20) &= ~4u;
  if ( (unsigned int)IsWindowDesktopComposed(v5) )
  {
    v24 = (unsigned int *)v5[5];
    v22 = v24[7];
    v23 = v24[6];
    v25 = v20 ^ v24[6];
    v26 = v24[58];
    v27 = v21 ^ v26;
    v28 = v19 ^ v24[7];
    if ( v28 || v25 || v27 )
    {
      v37 = 0;
      v38 = 0;
      v39 = 0;
      if ( (v28 & 0xB1CF0000) != 0 )
      {
        v37 = -16;
        v38 = v22;
      }
      else if ( (v25 & 0x4E27A9) != 0 )
      {
        v37 = -20;
        v38 = v23;
      }
      else
      {
        if ( (v27 & 0x12C0) == 0 )
        {
LABEL_39:
          if ( v39 )
          {
            DirtyVisRgnTrackers((__int64)v5);
            v40 = *v5;
            v42 = (void *)ReferenceDwmApiPort(v41);
            DwmAsyncChildStyleChange(v42, v40, v37, v38);
          }
          if ( (v28 & 0xC40000) != 0 || (v25 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges((struct tagWND *)v5, 1LL, v23);
          goto LABEL_13;
        }
        v37 = -268435456;
        v38 = v26;
      }
      v39 = 1;
      goto LABEL_39;
    }
  }
LABEL_13:
  v29 = gptiCurrent;
  if ( v5 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzInternalShowCaret();
  v6 = 1;
  ThreadUnlock1(v29, v22, v23);
LABEL_16:
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
