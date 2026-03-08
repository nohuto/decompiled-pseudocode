/*
 * XREFs of BmlUnPinSourceMode @ 0x1C03B9310
 * Callers:
 *     BmlFunctionalizePath @ 0x1C016DA58 (BmlFunctionalizePath.c)
 *     _BmlGetPathModeListForPath @ 0x1C03B98CC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C03B9070 (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // r14d
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // esi
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, v3);
  if ( (int)result >= 0 )
  {
    v7 = v3;
    v8 = *(_QWORD *)&a1[120 * v3 + 16];
    v9 = *(unsigned int *)(v8 + 28);
    v10 = *(_DWORD *)(v8 + 24);
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), v10, *(_DWORD *)(v8 + 28));
    v12 = Path;
    if ( Path )
    {
      v13 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
      v17 = v13;
      if ( *(_QWORD *)(v13 + 144)
        && (LOBYTE(v14) = 1,
            v16 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v15 + 496) + 48LL))(
                    v13 & -(__int64)(v13 != -137LL),
                    v14),
            v16 < 0) )
      {
        WdLogSingleEntry4(
          3LL,
          v12,
          a2,
          *(unsigned int *)(*((_QWORD *)v12 + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)v12 + 12) + 24LL));
      }
      else
      {
        v16 = 0;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v17, 0LL);
      return (unsigned int)v16;
    }
    else
    {
      WdLogSingleEntry4(3LL, v7, a2, v10, v9);
      return 3223192345LL;
    }
  }
  return result;
}
