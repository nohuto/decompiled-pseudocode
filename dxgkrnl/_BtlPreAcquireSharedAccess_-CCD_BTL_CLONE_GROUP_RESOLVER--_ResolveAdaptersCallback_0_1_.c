/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C017DC10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0025E48 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C005E4AC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C017C6CC (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v12; // rax
  VIDPN_MGR *v13; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  int v15; // r15d
  unsigned int v16; // r14d
  int v17; // eax
  int v18; // r15d
  unsigned int v19; // r14d
  int v20; // eax
  struct DMMVIDPN *v21; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v22; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-99h] BYREF
  struct DXGADAPTER *v24; // [rsp+48h] [rbp-91h]
  char v25; // [rsp+50h] [rbp-89h]
  _BYTE v26[144]; // [rsp+60h] [rbp-79h] BYREF

  v24 = a1;
  v25 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
  v9 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_5;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 102);
    v10[5] = *((unsigned int *)a1 + 101);
    v10[6] = this;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2833)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v12 = *((_QWORD *)a1 + 365)) == 0 )
  {
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v12 + 290) )
    goto LABEL_24;
  v13 = *(VIDPN_MGR **)(v12 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, (__int64)v13);
  v21 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v15 = 0;
    v16 = 0;
    if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
    {
LABEL_20:
      auto_rc<DMMVIDPN>::reset((__int64 *)&v21, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
LABEL_21:
      v9 = -2147483622;
      goto LABEL_5;
    }
    do
    {
      if ( !_bittest64((const signed __int64 *)(296LL * v16 + *((_QWORD *)this + 1) + 56), 0x2Du) )
      {
        v17 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter((CCD_SET_STRING_ID **)this, a1, v16, v21);
        v9 = v17;
        if ( v17 == -1073741275 )
        {
          ++v15;
        }
        else if ( v17 < 0 )
        {
          WdLogSingleEntry5(2LL, v17, a1, *((_QWORD *)this + 1), *(_QWORD *)this, v16);
          goto LABEL_36;
        }
      }
      ++v16;
    }
    while ( v16 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
    if ( !v15 )
      goto LABEL_20;
    auto_rc<DMMVIDPN>::reset((__int64 *)&v21, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
LABEL_24:
    v18 = 0;
    v19 = 0;
    if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
    {
      do
      {
        if ( (*(_QWORD *)(296LL * v19 + *((_QWORD *)this + 1) + 56) & 0x200000000000LL) == 0 )
        {
          v20 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter((CCD_SET_STRING_ID **)this, a1, v19, 0LL);
          v9 = v20;
          if ( v20 == -1073741275 )
          {
            ++v18;
          }
          else if ( v20 < 0 )
          {
            WdLogSingleEntry5(2LL, v20, a1, *((_QWORD *)this + 1), *(_QWORD *)this, v19);
            goto LABEL_5;
          }
        }
        ++v19;
      }
      while ( v19 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
      if ( !v18 )
        goto LABEL_21;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  WdLogSingleEntry5(
    2LL,
    ClientVidPnFromLastClientCommitedVidPn,
    v13,
    *((_QWORD *)this + 1),
    *((int *)a1 + 102),
    *((unsigned int *)a1 + 101));
LABEL_36:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v21, 0LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22);
LABEL_5:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  if ( v25 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  return v9;
}
