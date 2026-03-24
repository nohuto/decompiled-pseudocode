/*
 * XREFs of OutputDuplPresent @ 0x1C029E558
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C0283390 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C029C140 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C029C240 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGDEVICE *v14; // rbx
  struct DXGADAPTER **v15; // rax
  int v16; // eax
  DXGCONTEXTBYHANDLE *v17; // rcx
  D3DKMT_HANDLE hContext; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE **v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  ULONG BroadcastContextCount; // r14d
  __int64 v32; // rax
  unsigned int v33; // r14d
  _BYTE *PoolWithTag; // rax
  __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  struct DXGADAPTER *v52; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v54[2]; // [rsp+40h] [rbp-69h] BYREF
  PVOID P; // [rsp+50h] [rbp-59h]
  _BYTE v56[32]; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v57; // [rsp+78h] [rbp-31h]
  _BYTE v58[16]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v59[24]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v60[6]; // [rsp+A8h] [rbp-1h] BYREF
  char v61; // [rsp+D8h] [rbp+2Fh]
  struct DXGCONTEXT *v62; // [rsp+110h] [rbp+67h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v52 = 0LL;
  if ( (*(_BYTE *)&Value & 8) == 0 )
    goto LABEL_8;
  v62 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v54, a1->hIndirectContext, a2, &v62, 0);
  if ( v62 )
  {
    v14 = (struct DXGDEVICE *)*((_QWORD *)v62 + 2);
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v52, v5);
    v16 = OutputDuplPreIndirectPresent(v14, a1->VidPnSourceId, v15, &v53);
    if ( v16 < 0 )
    {
      v8 = v16;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v54);
LABEL_8:
    hContext = a1->hContext;
    v62 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v58, hContext, a2, &v62, 0);
    v22 = (struct DXGDEVICE **)v62;
    if ( !v62 )
    {
      v8 = -1073741811;
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      v23[3] = -1073741811LL;
      v23[4] = PsGetCurrentProcess(v25, v24, v26, v27);
      v23[5] = a1->hContext;
      WdLogEvent5_WdWarning(v23);
LABEL_46:
      v17 = (DXGCONTEXTBYHANDLE *)v58;
      goto LABEL_47;
    }
    if ( !v52 )
      DXGADAPTER_REFERENCE::Assign(&v52, *(struct DXGADAPTER **)(*((_QWORD *)v62 + 2) + 1848LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v22[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      v8 = -1073741811;
      *(_QWORD *)(v32 + 24) = v22;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
LABEL_44:
      if ( v54[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
      goto LABEL_46;
    }
    v33 = BroadcastContextCount + 1;
    P = 0LL;
    v57 = 0;
    if ( v33 <= 4 )
    {
      PoolWithTag = v56;
    }
    else
    {
      v28 = 0xFFFFFFFFFFFFFFFFuLL % v33;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v33 < 8 )
        goto LABEL_39;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v33, 0x4B677844u);
    }
    P = PoolWithTag;
    v57 = v33;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v33);
      if ( P )
      {
        *(_QWORD *)P = v22;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v59, (struct _KTHREAD **)a2);
        v36 = 0;
        if ( !a1->BroadcastContextCount )
        {
LABEL_31:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v60,
            P,
            v57);
          if ( v61 )
          {
            if ( v60[0] )
            {
              v49 = WdLogNewEntry5_WdWarning(v44, v43, v45);
              *(_QWORD *)(v49 + 24) = 2797LL;
              WdLogEvent5_WdWarning(v49);
              v8 = -1073741811;
            }
            else
            {
              v46 = WdLogNewEntry5_WdWarning(v44, v43, v45);
              *(_QWORD *)(v46 + 24) = 2792LL;
              WdLogEvent5_WdWarning(v46);
              v8 = -1073741801;
            }
          }
          else
          {
            v8 = OutputDuplPresentInternal(v52, (struct DXGCONTEXT *)v22, a1, (struct DXGCONTEXT **)P);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v60);
LABEL_40:
          if ( P != v56 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v57 = 0;
          goto LABEL_44;
        }
        while ( 1 )
        {
          v37 = (a1->BroadcastContext[v36] >> 6) & 0xFFFFFF;
          if ( (unsigned int)v37 < *((_DWORD *)a2 + 64) )
          {
            v38 = *((_QWORD *)a2 + 30);
            v35 = *(unsigned int *)(v38 + 16 * v37 + 8);
            if ( ((a1->BroadcastContext[v36] >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
              && (v35 & 0x2000) == 0
              && (v35 & 0x1F) != 0 )
            {
              v35 &= 0x1Fu;
              if ( (_BYTE)v35 == 7 )
              {
                v40 = *(_QWORD *)(v38 + 16LL * (unsigned int)v37);
                goto LABEL_28;
              }
              v39 = WdLogNewEntry5_WdError(v35, (a1->BroadcastContext[v36] >> 25) & 0x60);
              *(_QWORD *)(v39 + 24) = 316LL;
              WdLogEvent5_WdError(v39);
            }
          }
          v40 = 0LL;
LABEL_28:
          v41 = v36 + 1;
          *((_QWORD *)P + v41) = v40;
          v42 = *((_QWORD *)P + v41);
          if ( !v42 || *(struct DXGDEVICE **)(v42 + 16) != v22[2] )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v35, v42);
            v47[3] = v22;
            v47[4] = a1->BroadcastContext[v36];
            v48 = v36;
            v8 = -1073741811;
            v47[5] = v48;
            v47[6] = -1073741811LL;
            WdLogEvent5_WdError(v47);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
            goto LABEL_40;
          }
          ++v36;
          if ( (unsigned int)v41 >= a1->BroadcastContextCount )
            goto LABEL_31;
        }
      }
    }
LABEL_39:
    v50 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v50 + 24) = 2743LL;
    WdLogEvent5_WdWarning(v50);
    v8 = -1073741801;
    goto LABEL_40;
  }
  v8 = -1073741811;
  v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
  v9[3] = -1073741811LL;
  v9[4] = PsGetCurrentProcess(v11, v10, v12, v13);
  v9[5] = a1->hIndirectContext;
  WdLogEvent5_WdWarning(v9);
LABEL_6:
  v17 = (DXGCONTEXTBYHANDLE *)v54;
LABEL_47:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v17);
  DXGADAPTER_REFERENCE::Assign(&v52, 0LL);
  return v8;
}
