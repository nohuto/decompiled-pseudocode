/*
 * XREFs of ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C02805F0
 * Callers:
 *     DxgkRender @ 0x1C00F3920 (DxgkRender.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00FB130 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017974 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001BB54 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0027AC8 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0027B38 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0046F94 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C00481B8 (-GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C028037C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C02814E8 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 */

__int64 __fastcall DXGCONTEXT::HandleVistaBltStub(
        DXGCONTEXT *this,
        __int64 a2,
        __int64 a3,
        DXGADAPTER **a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        unsigned int a6,
        unsigned int *a7,
        struct DXGCONTEXT **a8)
{
  __int64 v8; // r15
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _SLIST_ENTRY *v14; // r12
  unsigned int *v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char *v22; // rdx
  int v23; // edi
  __int64 v24; // r9
  SIZE_T v25; // rax
  SIZE_T v26; // rax
  struct DXGCONTEXT **v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // edi
  DXGDEVICE *v30; // rcx
  struct VISTABLTSTUBINFO *VistaBltStubInfo; // rax
  __int64 v33; // rax
  struct DXGGLOBAL *Global; // rax
  char *v35; // rbx
  PSLIST_ENTRY v36; // rdi
  __int64 v37; // rdx
  __int64 (__fastcall *v38)(__int64, __int64, __int64, char *); // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  struct _SLIST_ENTRY v53; // xmm0
  unsigned int v54; // eax
  struct DXGCONTEXT **v55; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct DXGGLOBAL *v59; // rax
  union _SLIST_HEADER *v60; // r13
  __int64 v61; // rdx
  DXGADAPTERSTOPRESETLOCKSHARED *v62; // rdi
  char *v63; // rdx
  struct _SLIST_ENTRY *v64; // rdi
  __int64 v65; // r12
  __int64 Next_low; // rdx
  unsigned int *v67; // rdi
  __int64 v68; // rdx
  unsigned int v69; // [rsp+40h] [rbp-C0h]
  unsigned int v70; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v71; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v72; // [rsp+4Ch] [rbp-B4h] BYREF
  int v73; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v75; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTERSTOPRESETLOCKSHARED *v76; // [rsp+60h] [rbp-A0h]
  unsigned int *v77; // [rsp+68h] [rbp-98h]
  HWND v78; // [rsp+70h] [rbp-90h]
  void *v79; // [rsp+78h] [rbp-88h] BYREF
  struct _SLIST_ENTRY *v80; // [rsp+80h] [rbp-80h]
  struct VIDSCH_SUBMIT_DATA_BASE *v81[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v82; // [rsp+98h] [rbp-68h]
  struct DXGCONTEXT **v83; // [rsp+A0h] [rbp-60h]
  __int128 v84; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-40h]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  __int128 v87; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-20h]
  __int64 v89; // [rsp+E8h] [rbp-18h]
  __int64 v90; // [rsp+F0h] [rbp-10h]
  __int128 v91; // [rsp+F8h] [rbp-8h] BYREF
  struct _SLIST_ENTRY v92; // [rsp+108h] [rbp+8h] BYREF
  __int128 v93; // [rsp+118h] [rbp+18h] BYREF

  v8 = a6;
  v92.Next = (struct _SLIST_ENTRY *)a2;
  v76 = a5;
  v11 = 0;
  v83 = a8;
  v73 = a3;
  if ( a2 < 0 )
  {
    v79 = 0LL;
    v12 = HIDWORD(a2);
    v81[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)(unsigned int)a2;
    LODWORD(v12) = HIDWORD(a2) & 0x7FFFFFFF;
    v13 = *((_QWORD *)this + 2);
    v14 = 0LL;
    v91 = 0LL;
    v75 = 0LL;
    v15 = 0LL;
    v93 = 0LL;
    v16 = *(_QWORD *)(v13 + 1848);
    v90 = v16;
    v78 = (HWND)v12;
    v71 = 0;
    v69 = 0;
    v72 = 0;
    v80 = 0LL;
    v77 = 0LL;
    v74 = 0;
    v70 = 0;
    v17 = *((_QWORD *)DXGPROCESS::GetCurrent(v12, 0LL, a3, (__int64)a4) + 11);
    v82 = v17;
    if ( !v17 )
      return 3221225485LL;
    v19 = *((_QWORD *)this + 2);
    if ( v16 )
      v20 = v16;
    else
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    v86 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 88LL);
    v84 = 0LL;
    v85 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    v89 = v20;
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v76);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4, v21);
    v11 = CWin32kLocks::Lock((CWin32kLocks *)&v84, v78, 1, 1, 0);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(v17 + 232))(v84, &v79);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *))(v17 + 72))(v84, &v91) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, __int128 *))(v82 + 360))(v78, &v93) )
          v11 = -1073741811;
        if ( v11 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD, __int64 *))(v82 + 312))(v84, &v75) )
          v11 = -1073741811;
      }
    }
    CWin32kLocks::Unlock((CWin32kLocks *)&v84);
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v87);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v76);
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL);
    if ( v23 < 0 )
    {
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v22);
      return (unsigned int)v23;
    }
    if ( v11 < 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( a6 )
      {
        v25 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v25 = -1LL;
        v14 = (struct _SLIST_ENTRY *)operator new[](v25, 0x4B677844u, PagedPool);
        v80 = v14;
        if ( !v14 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_76;
        memset(v14, 0, 4LL * a6);
        v26 = 4LL * a6;
        if ( !is_mul_ok(a6, 4uLL) )
          v26 = -1LL;
        v77 = (unsigned int *)operator new[](v26, 0x4B677844u, PagedPool);
        v15 = v77;
        if ( !v77 )
          v11 = -1073741670;
        if ( v11 < 0 )
          goto LABEL_76;
        memset(v77, 0, 4LL * a6);
      }
      v27 = v83;
      v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
              this,
              v81[0],
              (struct COREDEVICEACCESS *)a4,
              &v71,
              a6,
              v83,
              (unsigned int *)v14,
              &v74);
      if ( v11 >= 0 )
      {
        if ( v79
          && ((v11 = DXGCONTEXT::OpenResourceFromSharedHandle(
                       this,
                       v79,
                       (struct COREDEVICEACCESS *)a4,
                       &v72,
                       a6,
                       v27,
                       v15,
                       &v70),
               v11 >= 0)
            ? (v28 = v72)
            : (v28 = 0, v11 = 0),
              (v69 = v28) != 0) )
        {
          if ( !a6 )
          {
            v29 = v70;
            if ( v70 > 1 )
            {
              v30 = (DXGDEVICE *)*((_QWORD *)this + 2);
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 2) + 16LL) + 324LL) == 4318 )
              {
                VistaBltStubInfo = DXGDEVICE::GetVistaBltStubInfo(v30, v73);
                if ( VistaBltStubInfo )
                {
                  if ( v73 )
                  {
                    *(_QWORD *)VistaBltStubInfo = v92.Next;
                    *((_DWORD *)VistaBltStubInfo + 2) = v29 - 1;
                    *((_DWORD *)VistaBltStubInfo + 3) = *((_DWORD *)this + 6);
                  }
                  else if ( (*((_DWORD *)VistaBltStubInfo + 2))-- == 1 )
                  {
                    *(_QWORD *)VistaBltStubInfo = 0LL;
                    *((_DWORD *)VistaBltStubInfo + 3) = 0;
                  }
                }
              }
            }
            goto LABEL_49;
          }
        }
        else if ( !a6 )
        {
LABEL_49:
          v33 = *((_QWORD *)this + 2);
          v81[0] = 0LL;
          v81[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v33 + 16);
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v81);
          if ( !v81[0] )
            v11 = -1073741801;
          if ( v11 >= 0 )
          {
            LODWORD(v91) = v75 + v91;
            DWORD1(v91) += HIDWORD(v75);
            DWORD2(v91) += v75;
            HIDWORD(v91) += HIDWORD(v75);
            LODWORD(v92.Next) = v91 - v93;
            HIDWORD(v92.Next) = DWORD1(v91) - DWORD1(v93);
            *((_DWORD *)&v92.Next + 2) = DWORD2(v91) - v93;
            *((_DWORD *)&v92.Next + 3) = HIDWORD(v91) - DWORD1(v93);
            Global = DXGGLOBAL::GetGlobal((unsigned int)(DWORD2(v91) - v93), (unsigned int)(DWORD1(v91) - DWORD1(v93)));
            v35 = (char *)Global + 1024;
            ++*((_DWORD *)Global + 261);
            v36 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
            if ( v36
              || (v37 = *((unsigned int *)v35 + 11),
                  v38 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v35 + 6),
                  v39 = *((unsigned int *)v35 + 10),
                  v40 = *((unsigned int *)v35 + 9),
                  ++*((_DWORD *)v35 + 6),
                  (v36 = (PSLIST_ENTRY)v38(v40, v37, v39, v35)) != 0LL) )
            {
              v46 = v90;
              v47 = *((_QWORD *)this + 2);
              if ( !v90 )
                v46 = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL);
              v48 = *(_QWORD *)(*(_QWORD *)(v47 + 40) + 88LL);
              v88 = 0LL;
              v86 = v48;
              v89 = v46;
              v84 = 0LL;
              v85 = 0LL;
              v87 = 0LL;
              memset(v36, 0, 0x5F8uLL);
              v52 = *(unsigned int *)(*((_QWORD *)this + 2) + 436LL);
              LODWORD(v36->Next) = v52;
              LODWORD(v36->Next) = *((_DWORD *)this + 6);
              *((_QWORD *)&v36->Next + 1) = v78;
              HIDWORD(v36[1].Next) = v71;
              *((_DWORD *)&v36[1].Next + 2) = v69;
              LODWORD(v36[1].Next) = 0;
              v53 = v92;
              v36[5].Next = 0LL;
              *((_QWORD *)&v36[4].Next + 1) = &v92;
              v54 = *(_DWORD *)(&v36[5].Next + 1) & 0xFFFFEFFF;
              LODWORD(v36[4].Next) = 1;
              *((_DWORD *)&v36[22].Next + 2) = 3;
              *((_DWORD *)&v36[5].Next + 2) = v54 | 0x10081;
              v36[3] = v53;
              v36[24].Next = (struct _SLIST_ENTRY *)v79;
              *((_QWORD *)&v36[24].Next + 1) = 0LL;
              *((_DWORD *)&v36[5].Next + 3) = v8;
              if ( (_DWORD)v8 )
              {
                v52 = (__int64)a7;
                v49 = (char *)v36 - (char *)a7;
                v50 = (unsigned int)v8;
                do
                {
                  *(_DWORD *)(v49 + v52 + 96) = *(_DWORD *)v52;
                  v52 += 4LL;
                  --v50;
                }
                while ( v50 );
              }
              v55 = v83;
              *((_QWORD *)&v36[93].Next + 1) = v83;
              v36[91].Next = v14;
              *((_QWORD *)&v36[91].Next + 1) = v15;
              *((_BYTE *)&v36[94].Next + 8) = 1;
              Current = DXGPROCESS::GetCurrent(v52, v49, v50, v51);
              DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)this, (struct _D3DKMT_PRESENT *)v36, Current);
              v11 = DXGCONTEXT::Present(
                      this,
                      (struct _D3DKMT_PRESENT *)v36,
                      (struct COREDEVICEACCESS *)a4,
                      v76,
                      (struct CWin32kLocks *)&v84,
                      v55,
                      v81[0]);
              v59 = DXGGLOBAL::GetGlobal(v58, v57);
              v60 = (union _SLIST_HEADER *)((char *)v59 + 1024);
              ++*((_DWORD *)v59 + 263);
              if ( ExQueryDepthSList((PSLIST_HEADER)v59 + 64) < *((_WORD *)v59 + 520) )
              {
                ExpInterlockedPushEntrySList(v60, v36);
              }
              else
              {
                ++LODWORD(v60[2].Alignment);
                ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v60[3].Region)(v36, v60);
              }
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a4[3]) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a4, v61);
              v62 = v76;
              if ( *((_BYTE *)v76 + 16) )
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v76);
              CWin32kLocks::Unlock((CWin32kLocks *)&v84);
              DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)&v87);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v62);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a4, 0LL) < 0 )
              {
                v11 = -1073741130;
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a4, v63);
              }
              v15 = v77;
            }
            else
            {
              v45 = WdLogNewEntry5_WdLowResource(v42, v41, v43, v44);
              *(_QWORD *)(v45 + 24) = 6236LL;
              WdLogEvent5_WdLowResource(v45);
              v11 = -1073741801;
            }
          }
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v81);
          goto LABEL_72;
        }
        if ( v74 <= 1 && v70 <= 1 )
        {
          v8 = 0LL;
          operator delete[](v14);
          operator delete[](v15);
          v14 = 0LL;
          v15 = 0LL;
          v80 = 0LL;
          v77 = 0LL;
        }
        goto LABEL_49;
      }
    }
LABEL_72:
    if ( v71 )
      DXGCONTEXT::DestroyAllocation(this, v71, (struct COREDEVICEACCESS *)a4, v24);
    if ( v69 )
      DXGCONTEXT::DestroyAllocation(this, v69, (struct COREDEVICEACCESS *)a4, v24);
LABEL_76:
    if ( v14 )
    {
      if ( (_DWORD)v8 )
      {
        v64 = v14;
        v65 = (unsigned int)v8;
        do
        {
          Next_low = LODWORD(v64->Next);
          if ( (_DWORD)Next_low )
            DXGCONTEXT::DestroyAllocation(this, Next_low, (struct COREDEVICEACCESS *)a4, v24);
          v64 = (struct _SLIST_ENTRY *)((char *)v64 + 4);
          --v65;
        }
        while ( v65 );
        v14 = v80;
      }
      operator delete[](v14);
    }
    if ( v15 )
    {
      if ( (_DWORD)v8 )
      {
        v67 = v15;
        do
        {
          v68 = *v67;
          if ( (_DWORD)v68 )
            DXGCONTEXT::DestroyAllocation(this, v68, (struct COREDEVICEACCESS *)a4, v24);
          ++v67;
          --v8;
        }
        while ( v8 );
      }
      operator delete[](v15);
    }
  }
  return (unsigned int)v11;
}
