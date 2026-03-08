/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C009BC60
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00A6558 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C00A6818 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0030060 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0088124 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0089A5C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C009C0A0 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00A80CC (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00A8178 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0E2C (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v9; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r13d
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // esi
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v20; // r8
  struct VIDMM_VAD *v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct VIDMM_VAD **v31; // r14
  struct VIDMM_VAD **v32; // rcx
  struct VIDMM_VAD *v33; // rdx
  __int64 v34; // r8
  struct VIDMM_VAD *v35; // rax
  struct _RTL_BALANCED_NODE *v36; // rbx
  struct _RTL_BALANCED_NODE *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v41; // r8
  struct VIDMM_VAD *v42; // r14
  unsigned __int64 v43; // rdx
  struct VIDMM_VAD *v44; // r12
  struct VIDMM_VAD *v45; // rbx
  __int64 *v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v60; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v61; // [rsp+58h] [rbp-70h]
  unsigned __int64 v62; // [rsp+60h] [rbp-68h]
  unsigned __int64 v63; // [rsp+68h] [rbp-60h]
  unsigned __int64 v64; // [rsp+70h] [rbp-58h]
  __int64 v65; // [rsp+78h] [rbp-50h]
  unsigned __int64 v66; // [rsp+80h] [rbp-48h]
  unsigned __int64 v67; // [rsp+88h] [rbp-40h]
  __int64 v68; // [rsp+90h] [rbp-38h]
  struct VIDMM_VAD *Vad; // [rsp+D8h] [rbp+10h] BYREF

  Vad = a2;
  v9 = a9;
  if ( a9 )
  {
    v11 = *((_QWORD *)this + 12);
    if ( !v11 || (*(_DWORD *)(v11 + 96) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 11) + 40177LL) )
      v9 = 0;
  }
  v12 = *((_QWORD *)this + 11);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 7016);
  else
    v13 = 1;
  v14 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    WdLogSingleEntry1(1LL, 878LL);
    DxgkLogInternalTriageEvent(v51, 0x40000LL);
    return 3221225485LL;
  }
  if ( !a7 || (v15 = a7 - 1, ((unsigned int)v15 & a7) != 0) )
  {
    WdLogSingleEntry1(1LL, 884LL);
    DxgkLogInternalTriageEvent(v58, 0x40000LL);
    return 3221225485LL;
  }
  else
  {
    v65 = a7 - 1;
    v61 = 0LL;
    v67 = 0LL;
    v66 = ~(unsigned __int64)(unsigned int)v15;
    v68 = 0LL;
    if ( (v15 & a4) != 0 )
    {
      WdLogSingleEntry1(1LL, 894LL);
      DxgkLogInternalTriageEvent(v52, 0x40000LL);
      return 3221225485LL;
    }
    v16 = a6;
    v17 = a5;
    v60 = a4;
    v61 = a3 + a4;
    v62 = a5;
    if ( !a6 )
      v16 = *((_QWORD *)this + 2);
    v63 = v16;
    v18 = 0;
    v64 = a3;
    if ( v9 && dword_1C0076540 && v14 != *((_QWORD *)this + 2) )
    {
      v53 = a3 + 4096;
      if ( a3 + 4096 < a3 || v14 + 4096 < v14 )
      {
        WdLogSingleEntry1(1LL, 916LL);
        HIDWORD(v59) = 0;
        DxgkLogInternalTriageEvent(v54, 0x40000LL);
        a3 = v64;
        v16 = v63;
        v17 = v62;
      }
      else
      {
        a3 += 4096LL;
        v64 = v53;
        v61 = v14 + 4096;
        v18 = 1;
      }
    }
    if ( v17 < v16 && v16 - v17 >= a3 )
    {
      NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, &v60);
      v21 = NodeInFreeList;
      if ( !NodeInFreeList )
      {
        WdLogSingleEntry0(3LL);
        return 3221225473LL;
      }
      v22 = *((_QWORD *)NodeInFreeList + 3);
      v23 = v67;
      v24 = v67 + v64;
      if ( v22 == v67 )
      {
        if ( *((_QWORD *)NodeInFreeList + 4) - v22 != v64 )
        {
          v25 = operator new[](24 * (v13 + 4), 0x39346956u, 256LL);
          v27 = v25;
          if ( v25 )
          {
            *(_QWORD *)(v25 + 24) = v23;
            v28 = (*(_DWORD *)(v25 + 72) ^ (16 * v13)) & 0x7F0;
            *(_QWORD *)(v25 + 32) = v24;
            *(_DWORD *)(v25 + 72) ^= v28;
            if ( v13 )
            {
              v29 = (_QWORD *)(v25 + 96);
              v30 = v13;
              do
              {
                v29[1] = v29;
                *v29 = v29;
                v29[2] = 0LL;
                v29 += 3;
                --v30;
              }
              while ( v30 );
            }
            v31 = a8;
            *(_QWORD *)(v27 + 88) = v27 + 80;
            *(_QWORD *)(v27 + 80) = v27 + 80;
            v32 = (struct VIDMM_VAD **)*((_QWORD *)v21 + 6);
            *v31 = (struct VIDMM_VAD *)v27;
            v33 = (struct VIDMM_VAD *)(v27 + 40);
            if ( *v32 == (struct VIDMM_VAD *)((char *)v21 + 40) )
            {
              *(_QWORD *)v33 = (char *)v21 + 40;
              *((_QWORD *)v33 + 1) = v32;
              *v32 = v33;
              *((_QWORD *)v21 + 6) = v33;
              if ( (byte_1C00769C2 & 0x20) != 0 )
              {
                LODWORD(v59) = *((_DWORD *)v21 + 18);
                McTemplateK0pqxx_EtwWriteTransfer(
                  (__int64)v32,
                  &DestroyGpuVirtualAddressRange,
                  v26,
                  this,
                  v59,
                  *((_QWORD *)v21 + 3),
                  *((_QWORD *)v21 + 4));
              }
              RtlAvlRemoveNode((char *)this + 40, v21);
              *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
              LOBYTE(v34) = 0;
              v35 = (struct VIDMM_VAD *)(*((_QWORD *)v21 + 4) - v24);
              *((_QWORD *)v21 + 3) = v24;
              v36 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
              Vad = v35;
              if ( v36 )
              {
                while ( 1 )
                {
                  if ( (int)CompareVadSizeAvl(&Vad, v36) < 0 )
                  {
                    v37 = v36->Children[0];
                    if ( !v36->Children[0] )
                    {
                      LOBYTE(v34) = 0;
                      break;
                    }
                  }
                  else
                  {
                    v37 = v36->Children[1];
                    if ( !v37 )
                    {
                      LOBYTE(v34) = 1;
                      break;
                    }
                  }
                  v36 = v37;
                }
              }
              RtlAvlInsertNodeEx((char *)this + 40, v36, v34, v21);
              *((_DWORD *)v21 + 18) &= ~0x1000u;
              v39 = *((_DWORD *)v21 + 18) & 0xFFFFF7F0 | 1;
              *((_DWORD *)v21 + 18) = v39;
              if ( (byte_1C00769C2 & 0x20) != 0 )
              {
                LODWORD(v59) = v39;
                McTemplateK0pqxx_EtwWriteTransfer(
                  v39,
                  &CreateGpuVirtualAddressRange,
                  v38,
                  this,
                  v59,
                  *((_QWORD *)v21 + 3),
                  *((_QWORD *)v21 + 4));
              }
              goto LABEL_35;
            }
LABEL_46:
            __fastfail(3u);
          }
          _InterlockedIncrement(&dword_1C00768AC);
          WdLogSingleEntry1(6LL, 976LL);
          goto LABEL_58;
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, NodeInFreeList, v20);
        v31 = a8;
        *a8 = v21;
      }
      else
      {
        Vad = CVirtualAddressAllocator::AllocateVad(v67, v67 + v64, v13);
        v42 = Vad;
        if ( !Vad )
        {
          _InterlockedIncrement(&dword_1C00768AC);
          WdLogSingleEntry1(6LL, 1009LL);
LABEL_58:
          DxgkLogInternalTriageEvent(v55, 262145LL);
          return 3221225495LL;
        }
        v43 = *((_QWORD *)v21 + 4);
        v44 = 0LL;
        if ( v24 < v43 )
        {
          v44 = CVirtualAddressAllocator::AllocateVad(v24, v43, v13);
          if ( !v44 )
          {
            _InterlockedIncrement(&dword_1C00768AC);
            WdLogSingleEntry1(6LL, 1022LL);
            DxgkLogInternalTriageEvent(v56, 262145LL);
            CVirtualAddressAllocator::FreeVad(v42, v57);
            return 3221225495LL;
          }
        }
        CVirtualAddressAllocator::RemoveVadFromFreeList(this, v21, v41);
        *((_QWORD *)v21 + 4) = v67;
        CVirtualAddressAllocator::InsertVadToFreeList(this, v21);
        v45 = Vad;
        v46 = (__int64 *)((char *)v21 + 40);
        v31 = a8;
        v47 = *v46;
        *a8 = Vad;
        v48 = (_QWORD *)((char *)v45 + 40);
        if ( *(__int64 **)(v47 + 8) != v46 )
          goto LABEL_46;
        *v48 = v47;
        v48[1] = v46;
        *(_QWORD *)(v47 + 8) = v48;
        *v46 = (__int64)v48;
        if ( v44 )
        {
          CVirtualAddressAllocator::InsertVadToFreeList(this, v44);
          v49 = *v48;
          v50 = (_QWORD *)((char *)v44 + 40);
          if ( *(_QWORD **)(*v48 + 8LL) != v48 )
            goto LABEL_46;
          *v50 = v49;
          *((_QWORD *)v44 + 6) = v48;
          *(_QWORD *)(v49 + 8) = v50;
          *v48 = v50;
        }
      }
LABEL_35:
      *((_DWORD *)*v31 + 18) = (v18 << 12) | *((_DWORD *)*v31 + 18) & 0xFFFFEFFF;
      return 0LL;
    }
    return 3221225485LL;
  }
}
