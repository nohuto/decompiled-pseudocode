/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0013C3C
 * Callers:
 *     ?CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01D1E04 (-CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C0008B30 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET **a2)
{
  __int64 v4; // r8
  DMMVIDPNTARGETMODESET *Pool2; // rax
  DMMVIDPNTARGETMODESET *v6; // rax
  DMMVIDPNTARGETMODESET *v7; // rbx
  __int64 v8; // rcx
  struct DMMVIDPNTARGETMODESET *v9; // rax
  unsigned int v10; // edi

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 14);
  if ( !v4 )
  {
    Pool2 = (DMMVIDPNTARGETMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( Pool2 )
    {
      v6 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(Pool2, this);
      v7 = v6;
      if ( v6 )
      {
        if ( (**((unsigned __int8 (__fastcall ***)(__int64))v6 + 3))((__int64)v6 + 24) )
        {
          v8 = *((_QWORD *)this + 14);
          if ( v8 && v7 != (DMMVIDPNTARGETMODESET *)v8 )
            ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
          *((_QWORD *)this + 14) = v7;
          _InterlockedIncrement((volatile signed __int32 *)v7 + 24);
          v9 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 14);
          *a2 = v9;
          if ( *((_DWORD *)v9 + 24) != 2 )
            WdLogSingleEntry0(1LL);
          return 0;
        }
        WdLogSingleEntry3(7LL, v7, *((unsigned int *)this + 6), *((int *)v7 + 10));
        v10 = *((_DWORD *)v7 + 10);
LABEL_12:
        if ( v7 )
          ReferenceCounted::Release((DMMVIDPNTARGETMODESET *)((char *)v7 + 88));
        return v10;
      }
    }
    else
    {
      v7 = 0LL;
    }
    WdLogSingleEntry1(6LL, 152LL);
    v10 = -1073741801;
    goto LABEL_12;
  }
  WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), v4);
  return 3223192400LL;
}
