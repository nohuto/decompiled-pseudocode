/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C0140180
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009D98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0052924 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C01403D0 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C014164C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // rax
  struct VIDPN_MGR *v11; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r15d
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r15d
  unsigned int v22; // r14d
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  struct DMMVIDPN *v30; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v31; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v32[8]; // [rsp+30h] [rbp-99h] BYREF
  struct DXGADAPTER *v33; // [rsp+38h] [rbp-91h]
  char v34; // [rsp+40h] [rbp-89h]
  _BYTE v35[144]; // [rsp+50h] [rbp-79h] BYREF

  v33 = a1;
  v34 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL);
  LODWORD(v7) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_5;
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = a1;
    v8[4] = *((int *)a1 + 80);
    v8[5] = *((unsigned int *)a1 + 79);
    v8[6] = this;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2609)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v10 = *((_QWORD *)a1 + 337)) == 0 )
  {
LABEL_4:
    LODWORD(v7) = 0;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v10 + 250) )
    goto LABEL_22;
  v11 = *(struct VIDPN_MGR **)(v10 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, (__int64)v11);
  v30 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11);
  v7 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v15 = 0;
    v16 = 0;
    if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
    {
LABEL_20:
      auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40), v20);
LABEL_21:
      LODWORD(v7) = -2147483622;
      goto LABEL_5;
    }
    do
    {
      if ( (*(_QWORD *)(272LL * v16 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
      {
        v17 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v16, v30);
        v7 = v17;
        if ( v17 == -1073741275 )
        {
          ++v15;
        }
        else if ( v17 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
          v25[3] = v7;
          v25[4] = a1;
          v25[5] = *((_QWORD *)this + 1);
          v25[6] = *(_QWORD *)this;
          v26 = v16;
          goto LABEL_34;
        }
      }
      ++v16;
    }
    while ( v16 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
    if ( !v15 )
      goto LABEL_20;
    auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40), v28);
LABEL_22:
    v21 = 0;
    v22 = 0;
    if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
    {
      do
      {
        if ( (*(_QWORD *)(272LL * v22 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
        {
          v23 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v22, 0LL);
          v7 = v23;
          if ( v23 == -1073741275 )
          {
            ++v21;
          }
          else if ( v23 < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdError(v24, v5);
            v29[3] = v7;
            v29[4] = a1;
            v29[5] = *((_QWORD *)this + 1);
            v29[6] = *(_QWORD *)this;
            v29[7] = v22;
            WdLogEvent5_WdError(v29);
            goto LABEL_5;
          }
        }
        ++v22;
      }
      while ( v22 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
      if ( !v21 )
        goto LABEL_21;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
  v25[3] = v7;
  v25[4] = v11;
  v25[5] = *((_QWORD *)this + 1);
  v25[6] = *((int *)a1 + 80);
  v26 = *((unsigned int *)a1 + 79);
LABEL_34:
  v25[7] = v26;
  WdLogEvent5_WdError(v25);
  auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40), v27);
LABEL_5:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35, v5);
  if ( v34 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
  return (unsigned int)v7;
}
