/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0280F24
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01227D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0122BE0 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02132D8 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0280184 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // r14
  DXGADAPTER **v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int CddPrimaryShareResourceHandle; // eax
  unsigned int v24; // esi
  __int64 v25; // r12
  int v26; // r13d
  unsigned int v27; // eax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char *v33; // r15
  unsigned __int64 v34; // rdx
  _BYTE *PoolWithTag; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rsi
  __int64 v57; // rax
  unsigned int v58; // [rsp+20h] [rbp-E0h]
  __int128 v61; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v62; // [rsp+70h] [rbp-90h]
  _QWORD v63[14]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  _BYTE v65[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v66; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 231) + 2696LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 9498LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 9499LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 9500LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *((_QWORD *)this + v7 + 79);
  v19 = v7;
  v20 = v18;
  if ( v18 && *((_DWORD *)this + 108) == 1 )
  {
    if ( (*(_DWORD *)(v18 + 4) & 1) == 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v18);
      *(_QWORD *)(v21 + 24) = 9509LL;
      WdLogEvent5_WdAssertion(v21);
      v20 = *((_QWORD *)this + v7 + 79);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v20 + 24) + 16LL) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v20);
      *(_QWORD *)(v22 + 24) = 9510LL;
      WdLogEvent5_WdAssertion(v22);
      v20 = *((_QWORD *)this + v7 + 79);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) + 48LL) + 4LL) & 0x10) != 0 )
    {
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      v20 = *((_QWORD *)this + v7 + 79);
    }
  }
  if ( !v20 )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, (unsigned int)v7);
    v24 = CddPrimaryShareResourceHandle;
    if ( CddPrimaryShareResourceHandle )
    {
      v61 = 0LL;
      DWORD1(v61) = CddPrimaryShareResourceHandle;
      v62 = 0LL;
      if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                  (__int64)this,
                  &v61,
                  CddPrimaryShareResourceHandle) >= 0 )
      {
        v25 = DWORD1(v62);
        v26 = DWORD2(v62);
        v27 = DWORD1(v62) + DWORD2(v62);
        if ( (unsigned int)(DWORD1(v62) + DWORD2(v62)) >= DWORD1(v62) )
        {
          v28 = v27;
          v33 = (char *)operator new[](v27, 0x4B677844u, PagedPool);
          if ( v33 )
          {
            memset(v63, 0, 0x48uLL);
            P = 0LL;
            v66 = 0;
            v38 = HIDWORD(v62);
            if ( HIDWORD(v62) <= 4 )
            {
              PoolWithTag = v65;
              P = v65;
            }
            else
            {
              v34 = 0xFFFFFFFFFFFFFFFFuLL % HIDWORD(v62);
              if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v62) < 0x50 )
                goto LABEL_40;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * HIDWORD(v62), 0x4B677844u);
              P = PoolWithTag;
            }
            v66 = v38;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 80 * v38);
              if ( P )
              {
                HIDWORD(v63[0]) = v24;
                LODWORD(v63[1]) = v38;
                v63[2] = P;
                if ( v26 )
                  v63[5] = &v33[v25];
                else
                  v63[5] = 0LL;
                LODWORD(v63[6]) = v26;
                v63[7] = v33;
                LODWORD(v63[8]) = v25;
                if ( (_DWORD)v62 )
                {
                  v39 = WdLogNewEntry5_WdAssertion(PoolWithTag, v34);
                  *(_QWORD *)(v39 + 24) = 9573LL;
                  WdLogEvent5_WdAssertion(v39);
                  v24 = HIDWORD(v63[0]);
                }
                if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                            (struct _DXGK_ALLOCATIONINFO *)this,
                            (__int64)v63,
                            v24,
                            0LL,
                            0,
                            0LL,
                            0,
                            0LL,
                            0LL,
                            0LL) < 0 )
                {
                  v43 = WdLogNewEntry5_WdEvent(v41, v40);
                  *(_QWORD *)(v43 + 24) = this;
                  *(_QWORD *)(v43 + 32) = (unsigned int)v19;
                  WdLogEvent5_WdEvent(v43);
                }
                else
                {
                  *((_BYTE *)this + (unsigned int)v19 + 616) = 1;
                  if ( !*((_QWORD *)this + v19 + 79) )
                  {
                    v42 = WdLogNewEntry5_WdAssertion(v41, v40);
                    *(_QWORD *)(v42 + 24) = 9584LL;
                    WdLogEvent5_WdAssertion(v42);
                  }
                }
                operator delete[](v33);
                if ( P != v65 && P )
                  ExFreePoolWithTag(P, 0);
                v5 = a3;
                goto LABEL_45;
              }
            }
LABEL_40:
            v44 = WdLogNewEntry5_WdLowResource(PoolWithTag, v34, v36, v37);
            *(_QWORD *)(v44 + 24) = 9551LL;
            WdLogEvent5_WdLowResource(v44);
            operator delete[](v33);
            if ( P != v65 && P )
              ExFreePoolWithTag(P, 0);
            return 0LL;
          }
          v46 = WdLogNewEntry5_WdLowResource(v30, v29, v31, v32);
          *(_QWORD *)(v46 + 24) = this;
          *(_QWORD *)(v46 + 32) = v28;
          WdLogEvent5_WdLowResource(v46);
          v5 = a3;
        }
LABEL_45:
        v4 = a4;
      }
    }
  }
  v47 = *((_QWORD *)this + v19 + 79);
  if ( !v47 )
    return 0LL;
  if ( (*(_DWORD *)(v47 + 4) & 1) == 0 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v47, v20);
    *(_QWORD *)(v48 + 24) = 9604LL;
    WdLogEvent5_WdAssertion(v48);
    v47 = *((_QWORD *)this + v19 + 79);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v47 + 24) + 16LL) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v47, v20);
    *(_QWORD *)(v49 + 24) = 9605LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v5 )
  {
    memset(v63, 0, 0x68uLL);
    v50 = (_QWORD *)*((_QWORD *)this + 2);
    v63[7] = 1LL;
    LOBYTE(v58) = 0;
    v63[2] = *(_QWORD *)(v50[2] + 2544LL);
    v51 = *((_QWORD *)this + v19 + 79);
    v63[3] = *(_QWORD *)(v50[2] + 2552LL);
    v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, unsigned int, int))(*(_QWORD *)(v50[80] + 8LL)
                                                                                         + 800LL))(
            v50[81],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v51 + 24) + 24LL),
            v63,
            v58,
            v4);
    v56 = v52;
    if ( v52 < 0 )
    {
      v57 = WdLogNewEntry5_WdWarning(v54, v53, v55);
      *(_QWORD *)(v57 + 24) = v56;
      WdLogEvent5_WdWarning(v57);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v19 + 79) + 24LL) + 16LL);
}
