/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x1C03B9114
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C016DC64 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C03B9070 (BmlUnPinAllPathsPartialModalityFromSource.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03B9BCC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BmlUnPinPartialPathModalityOnPath(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned int v9; // r12d
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v11; // rbp
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ebp
  struct DMMVIDPNTARGETMODESET *v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h]

  v3 = a3;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v6 = 120 * v3;
  v7 = *(_QWORD *)(120 * v3 + a1 + 16);
  v8 = *(unsigned int *)(v7 + 28);
  v9 = *(_DWORD *)(v7 + 24);
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), v9, *(_DWORD *)(v7 + 28));
  v11 = Path;
  if ( !Path )
  {
    WdLogSingleEntry4(3LL, v3, a2, v9, v8);
    return 3223192345LL;
  }
  v13 = *((_DWORD *)Path + 29) == 254;
  v22 = *(_QWORD *)(a2 + 48);
  v14 = *(_QWORD *)(v22 + 488);
  v21 = (struct DMMVIDPNTARGETMODESET *)v14;
  if ( !v13 )
  {
    v15 = a2 + 96;
    LOBYTE(v15) = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v14 + 88))(
            (a2 + 96) & -(__int64)(a2 != -289),
            v9,
            (unsigned int)v8,
            v15);
    if ( v16 < 0 )
    {
LABEL_9:
      WdLogSingleEntry4(
        3LL,
        v3,
        a2,
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
        *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
      return (unsigned int)v16;
    }
    v14 = (__int64)v21;
  }
  if ( *((_DWORD *)v11 + 28) != 254 )
  {
    v17 = a2 + 96;
    LOBYTE(v17) = 1;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v14 + 72))(
            (a2 + 96) & -(__int64)(a2 != -289),
            *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
            *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL),
            v17);
    if ( v16 < 0 )
      goto LABEL_9;
  }
  v18 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v11 + 12));
  v21 = (struct DMMVIDPNTARGETMODESET *)v18;
  if ( *(_QWORD *)(v18 + 144)
    && (LOBYTE(v19) = 1,
        v20 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v22 + 504) + 56LL))(
                v18 & -(__int64)(v18 != -137LL),
                v19),
        v20 < 0) )
  {
    WdLogSingleEntry4(
      3LL,
      v3,
      a2,
      *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 24LL),
      *(unsigned int *)(*(_QWORD *)(v6 + a1 + 16) + 28LL));
  }
  else
  {
    v20 = 0;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v21, 0LL);
  return (unsigned int)v20;
}
