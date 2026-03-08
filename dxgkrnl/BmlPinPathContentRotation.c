/*
 * XREFs of BmlPinPathContentRotation @ 0x1C016E010
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C016DC64 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03B9BCC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C016D28C (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 */

__int64 __fastcall BmlPinPathContentRotation(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v4; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 result; // rax
  char v8; // [rsp+20h] [rbp-18h]

  v4 = 120LL * a3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 28LL));
  if ( BmlIsSupportedPathRotation(
         *(_DWORD *)(v4 + a1 + 28),
         *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)((char *)Path + 124)) )
  {
    v8 = 1;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 488LL)
                                                                              + 80LL))(
               (a2 + 96) & -(__int64)(a2 != -289),
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 24LL),
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 28LL),
               *(unsigned int *)(v4 + a1 + 28),
               v8);
    if ( (int)result < 0 )
    {
      ++*(_DWORD *)(v4 + a1 + 84);
      *(_DWORD *)(v4 + a1 + 88) = result;
    }
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, *(int *)(v4 + a1 + 28));
    return 3223192326LL;
  }
  return result;
}
