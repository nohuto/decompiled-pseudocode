/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x1C016BA80
 * Callers:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E2634 (InvalidateWEFCOMPOSITEDDCEs.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UnionRect @ 0x1C00C1640 (UnionRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E1FA0 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E20E4 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 Prop; // rax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  struct tagWND *v6; // rcx
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  result = GreGetBounds(v2, &v7, 4LL);
  if ( (_DWORD)result )
  {
    Prop = GetProp(*(_QWORD *)(a1 + 32), (unsigned __int16)atomLayer, 1u);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 27LL) & 0x10) != 0 )
    {
      return UnionRect((_DWORD *)(Prop + 16), (int *)(Prop + 16), &v7.left);
    }
    else
    {
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
      v6 = *(struct tagWND **)(a1 + 32);
      if ( IsResourceAcquiredExclusiveLite )
        return InvalidateWEFCOMPOSITEDWindow(v6, &v7);
      else
        return PostCOMPOSITEDInvalidateAPC(v6, &v7);
    }
  }
  return result;
}
