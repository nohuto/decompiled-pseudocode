/*
 * XREFs of NtDxgkOutputDuplPresentToHwQueue @ 0x1C0275220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016A3E8 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C026CDD4 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026E918 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0283154 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall NtDxgkOutputDuplPresentToHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  PVOID v19; // rax
  PVOID v20; // rcx
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // r14
  __int64 v33; // rax
  struct _D3DKMT_MOVE_RECT *v34; // rsi
  const void *v35; // rdx
  char *v36; // rcx
  unsigned int v37; // ecx
  struct _D3DKMT_MOVE_RECT *v38; // r9
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int128 v41; // [rsp+20h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-B8h]
  void *v43[2]; // [rsp+40h] [rbp-A8h]
  struct _D3DKMT_MOVE_RECT *v44[2]; // [rsp+50h] [rbp-98h]
  int v45; // [rsp+60h] [rbp-88h]
  int v46; // [rsp+64h] [rbp-84h]
  int v47; // [rsp+68h] [rbp-80h]
  struct DXGPROCESS *v48; // [rsp+70h] [rbp-78h]
  PVOID v49; // [rsp+78h] [rbp-70h]
  PVOID P; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v51[16]; // [rsp+88h] [rbp-60h] BYREF
  int v52; // [rsp+98h] [rbp-50h]
  PVOID v53; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v54[16]; // [rsp+A8h] [rbp-40h] BYREF
  int v55; // [rsp+B8h] [rbp-30h]

  v4 = (__int128 *)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v9 = Current;
  v48 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11, v13, v14);
    v15 = v10;
LABEL_3:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 346) )
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v17 + 24) = 2613LL;
    v15 = v17;
    goto LABEL_3;
  }
  P = 0LL;
  v52 = 0;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (__int128 *)MmUserProbeAddress;
  v41 = *v4;
  *(_OWORD *)Src = v4[1];
  *(_OWORD *)v43 = v4[2];
  *(_OWORD *)v44 = v4[3];
  if ( !DWORD2(v41) )
  {
    v18 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, 0LL, v8);
    *(_QWORD *)(v18 + 24) = 2625LL;
    WdLogEvent5_WdWarning(v18);
    if ( P != v51 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v52 = 0;
    return 3221225485LL;
  }
  v19 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, DWORD2(v41));
  v20 = P;
  if ( !v19 )
  {
    if ( P != v51 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v52 = 0;
    return 3221225495LL;
  }
  v49 = P;
  v21 = 4LL * DWORD2(v41);
  v22 = Src[0];
  if ( (char *)Src[0] + v21 < Src[0] || (char *)Src[0] + v21 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v20, v22, v21);
  Src[0] = P;
  v25 = 16LL * LODWORD(Src[1]);
  if ( v25 > 0xFFFFFFFF )
  {
    v40 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v23, v24);
    *(_QWORD *)(v40 + 24) = 2653LL;
LABEL_57:
    WdLogEvent5_WdWarning(v40);
    if ( P != v51 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225621LL;
  }
  v45 = 16 * LODWORD(Src[1]);
  v26 = 24LL * LODWORD(v43[1]);
  if ( v26 > 0xFFFFFFFF )
  {
    v40 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v23, v24);
    *(_QWORD *)(v40 + 24) = 2660LL;
    goto LABEL_57;
  }
  v46 = 24 * LODWORD(v43[1]);
  v27 = (unsigned int)(v26 + v25);
  if ( (unsigned int)v27 < (unsigned int)v26 )
  {
    v40 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v27, v24);
    *(_QWORD *)(v40 + 24) = 2667LL;
    goto LABEL_57;
  }
  v47 = v26 + v25;
  v53 = 0LL;
  v55 = 0;
  if ( (_DWORD)v27 )
  {
    v32 = (char *)PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&v53, v27);
    if ( !v32 )
    {
      v33 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
      *(_QWORD *)(v33 + 24) = 2679LL;
      WdLogEvent5_WdLowResource(v33);
      if ( v53 != v54 && v53 )
        ExFreePoolWithTag(v53, 0);
      v53 = 0LL;
      v55 = 0;
      if ( P != v51 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225495LL;
    }
    v34 = (struct _D3DKMT_MOVE_RECT *)&v32[16 * LODWORD(Src[1])];
    if ( LODWORD(Src[1]) )
    {
      v35 = v43[0];
      v36 = (char *)v43[0] + (unsigned int)v25;
      if ( v36 < v43[0] || (unsigned __int64)v36 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v32, v35, (unsigned int)v25);
      v43[0] = v32;
    }
    else
    {
      v43[0] = 0LL;
    }
    v37 = (unsigned int)v43[1];
    if ( LODWORD(v43[1]) )
    {
      if ( (_DWORD)v26 )
      {
        v38 = (struct _D3DKMT_MOVE_RECT *)((char *)v44[0] + (unsigned int)v26);
        if ( (unsigned __int64)v38 > MmUserProbeAddress || v38 < v44[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v37 = (unsigned int)v43[1];
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v37, v44[0], v34);
      v44[0] = v34;
    }
    else
    {
      v44[0] = 0LL;
    }
  }
  else
  {
    v43[0] = 0LL;
    v44[0] = 0LL;
  }
  v39 = OutputDuplPresentToHwQueue((struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *)&v41, v9);
  if ( v53 != v54 && v53 )
    ExFreePoolWithTag(v53, 0);
  v53 = 0LL;
  v55 = 0;
  if ( P != v51 && P )
    ExFreePoolWithTag(P, 0);
  return v39;
}
