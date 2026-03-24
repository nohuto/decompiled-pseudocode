/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C0068F70
 * Callers:
 *     <none>
 * Callees:
 *     DwmSyncGetCompositionAttribute @ 0x1C002E940 (DwmSyncGetCompositionAttribute.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     _GetWindowCompositionInfo @ 0x1C006DE10 (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006F8B4 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, ULONG64 a2)
{
  __int64 v2; // r12
  NTSTATUS CompositionAttribute; // edi
  __int64 v4; // r13
  ULONG v5; // r8d
  void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  int v11; // r10d
  _QWORD *v12; // rbx
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  __m256i *Prop; // rax
  unsigned int v18; // r12d
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __m256i *v22; // rax
  unsigned __int32 v23; // eax
  int v24; // eax
  __int64 v25; // r8
  bool v26; // al
  _QWORD *v27; // rax
  __int64 v28; // r9
  __int64 v29; // r8
  ULONG v30; // eax
  int v31; // r8d
  __int64 v32; // rax
  __int64 CurrentProcessWow64Process; // rax
  ULONG v34; // r8d
  __int128 Src; // [rsp+28h] [rbp-1F0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-1E0h]
  size_t Size; // [rsp+58h] [rbp-1C0h]
  __m256i v38; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+80h] [rbp-198h]
  void *v40[2]; // [rsp+88h] [rbp-190h]
  SIZE_T v41; // [rsp+98h] [rbp-180h]
  __m256i v42; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-158h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-148h]
  SIZE_T Length; // [rsp+E0h] [rbp-138h]
  _OWORD v46[2]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v47; // [rsp+120h] [rbp-F8h]
  _OWORD v48[2]; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v49; // [rsp+148h] [rbp-D0h]
  _OWORD v50[2]; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+170h] [rbp-A8h]
  _OWORD v52[2]; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+198h] [rbp-80h]
  _OWORD v54[2]; // [rsp+1A0h] [rbp-78h] BYREF
  __int64 v55; // [rsp+1C0h] [rbp-58h]
  __int128 v56; // [rsp+1C8h] [rbp-50h]
  __int128 v57; // [rsp+1D8h] [rbp-40h]

  v2 = a1;
  CompositionAttribute = -1073741811;
  *(_OWORD *)v40 = 0LL;
  v41 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v36 = 0LL;
  if ( a2 + 24 < a2 || a2 + 24 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v40 = *(_OWORD *)Address;
  v41 = Length;
  v4 = 1LL;
  if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
    v5 = 1;
  else
    v5 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v5);
  if ( (unsigned int)(LODWORD(Address[0]) - 1) <= 0x19 )
  {
    Size = qword_1C02EA978[2 * SLODWORD(Address[0])];
    if ( (unsigned int)Length < Size )
      CompositionAttribute = -1073741789;
    else
      CompositionAttribute = 0;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_73;
  v6 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(v2);
  v10 = (_QWORD *)v7;
  if ( !v7 )
    goto LABEL_72;
  if ( LODWORD(v40[0]) == 18 )
  {
    v11 = 0;
    memset(&v42, 0, sizeof(v42));
    v43 = 0LL;
    v12 = (_QWORD *)v7;
    v13 = 0;
    while ( 1 )
    {
      v14 = v12[13];
      if ( v14 )
      {
        v8 = 0LL;
        v9 = v12[3];
        if ( v9 )
        {
          v9 = *(_QWORD *)(v9 + 8);
          if ( v9 )
            v8 = *(_QWORD *)(v9 + 24);
        }
        if ( v14 == v8 )
          goto LABEL_35;
      }
      if ( (*(_BYTE *)(v12[5] + 26LL) & 8) != 0 )
      {
        v27 = v12;
        do
        {
          v9 = v27[13];
          if ( v9 )
          {
            v28 = 0LL;
            v8 = v27[3];
            if ( v8 )
            {
              v29 = *(_QWORD *)(v8 + 8);
              if ( v29 )
                v28 = *(_QWORD *)(v29 + 24);
            }
            if ( v9 == v28 )
              break;
          }
          v27 = (_QWORD *)v27[13];
        }
        while ( v9 );
        if ( v27 )
        {
LABEL_35:
          Prop = (__m256i *)GetProp(v12, (unsigned __int16)atomDWMProp, 1LL);
          if ( Prop )
          {
            v42 = *Prop;
            v43 = Prop[1].m256i_i64[0];
            v18 = v42.m256i_i32[0];
          }
          else
          {
            v18 = v13 & 0xFFFF0000;
            memset((char *)v42.m256i_i64 + 4, 0, 28);
            v56 = 0LL;
            v43 = 0LL;
          }
          v13 = v18 & 0x1FFFF;
          v42.m256i_i32[0] = v13;
          v9 = 0LL;
          if ( (v13 & 0x400) != 0 || (v13 & 0x2000) != 0 )
            v9 = 1LL;
          v11 = v9 | 2;
          if ( (v13 & 0x800) == 0 )
            v11 = v9;
          if ( v11 )
            break;
        }
      }
      v12 = (_QWORD *)v12[13];
      if ( !v12 )
        goto LABEL_22;
    }
    if ( v12 != v10 )
      v11 |= 4u;
LABEL_22:
    LODWORD(Src) = v11;
    v2 = a1;
    goto LABEL_23;
  }
  if ( LODWORD(v40[0]) == 21 )
  {
    v32 = *(_QWORD *)(v7 + 40);
    v9 = *(_BYTE *)(v32 + 234) & 0x10;
    LODWORD(Src) = *(_BYTE *)(v32 + 234) & 0x10;
  }
  else
  {
    v19 = *(_QWORD *)(v7 + 104);
    if ( !v19 )
      goto LABEL_115;
    v20 = 0LL;
    v9 = v10[3];
    if ( v9 )
    {
      v8 = *(_QWORD *)(v9 + 8);
      if ( v8 )
        v20 = *(_QWORD *)(v8 + 24);
    }
    if ( v19 != v20 )
    {
LABEL_115:
      if ( LODWORD(v40[0]) != 20 || !(unsigned int)IsTopLevelOrLayeredChildWindow(v10) )
        goto LABEL_72;
    }
    switch ( LODWORD(v40[0]) )
    {
      case 1:
        v21 = 0LL;
        memset(&v38, 0, sizeof(v38));
        v39 = 0LL;
        if ( v19 )
        {
          v9 = v10[3];
          if ( v9 )
          {
            v9 = *(_QWORD *)(v9 + 8);
            if ( v9 )
              v21 = *(_QWORD *)(v9 + 24);
          }
          if ( v19 == v21 )
            goto LABEL_50;
        }
        if ( (*(_BYTE *)(v10[5] + 26LL) & 8) != 0 && GetTopLevelWindow(v10) )
        {
LABEL_50:
          v22 = (__m256i *)GetProp(v10, (unsigned __int16)atomDWMProp, 1LL);
          if ( v22 )
          {
            v38 = *v22;
            v39 = v22[1].m256i_i64[0];
            v8 = v38.m256i_u32[1];
            v23 = v38.m256i_i32[0];
          }
          else
          {
            v23 = v38.m256i_i32[0] & 0xFFFF0000;
            v8 = 0LL;
            memset((char *)v38.m256i_i64 + 4, 0, 28);
            v57 = 0LL;
            v39 = 0LL;
          }
          v24 = v23 & 0x1FFFF;
          v38.m256i_i32[0] = v24;
          v25 = v10[5];
          v9 = *(unsigned int *)(v25 + 24);
          if ( ((v9 & 0x80000) == 0 || (v9 & 0x20000000) != 0) && (v24 & 1) == 0 )
          {
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 == 2 )
                LODWORD(v6) = 1;
            }
            else
            {
              v9 = *(unsigned __int8 *)(v25 + 30);
              v26 = (v9 & 0xC0) != 0xC0;
              LOBYTE(v9) = ~((unsigned __int8)v9 >> 2);
              if ( ((unsigned __int8)v9 & v26 & 1) == 0 )
                LODWORD(v6) = 1;
            }
          }
        }
        LODWORD(Src) = (_DWORD)v6;
        break;
      case 0x14:
        memset(v46, 0, sizeof(v46));
        v47 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v10, v46) && (v46[0] & 0x1000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x17:
        memset(v48, 0, sizeof(v48));
        v49 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v10, v48) && (v48[0] & 0x2000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x18:
        memset(v50, 0, sizeof(v50));
        v51 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v10, v50) && (v50[0] & 0x4000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x19:
        memset(v52, 0, sizeof(v52));
        v53 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v10, v52) && (v52[0] & 0x8000) != 0 )
          LODWORD(Src) = 1;
        break;
      case 0x1A:
        memset(v54, 0, sizeof(v54));
        v55 = 0LL;
        if ( (unsigned int)GetWindowCompositionInfo(v10, v54) && (v54[0] & 0x10000) != 0 )
          LODWORD(Src) = 1;
        break;
      default:
        if ( !(unsigned int)IsWindowDesktopComposed(v10) )
        {
LABEL_72:
          CompositionAttribute = -1073741816;
          goto LABEL_24;
        }
        break;
    }
  }
LABEL_23:
  v6 = (void *)ReferenceDwmApiPort(v9, v8);
LABEL_24:
  UserSessionSwitchLeaveCrit(v9);
  if ( CompositionAttribute >= 0 && LODWORD(v40[0]) != 18 && LODWORD(v40[0]) != 1 )
  {
    switch ( LODWORD(v40[0]) )
    {
      case 5:
        v31 = 5;
        goto LABEL_82;
      case 8:
        v31 = 8;
        goto LABEL_82;
      case 0xC:
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15);
        v34 = 4;
        if ( CurrentProcessWow64Process )
          v34 = 1;
        ProbeForRead(v40[1], 4uLL, v34);
        LODWORD(Src) = *(_DWORD *)v40[1];
        v31 = 12;
LABEL_82:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v6, v2, v31, &Src);
        v6 = 0LL;
        break;
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v6);
  if ( CompositionAttribute < 0 )
  {
LABEL_73:
    v30 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v30);
    return 0LL;
  }
  memmove(v40[1], &Src, Size);
  return v4;
}
