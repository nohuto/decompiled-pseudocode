/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02995EC
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0299B08 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C004A6BC (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C015D208 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C029A064 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C029ABC4 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C029AE1C (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C029B300 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C02A0808 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02A16B0 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  unsigned int v7; // r8d
  struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209 Value; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  bool v10; // cf
  unsigned int v11; // r12d
  int IsOutputDuplAllowedForVidPn; // edi
  struct DXGFASTMUTEX **v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v29; // rdx
  OUTPUTDUPL_CONTEXT **v30; // r15
  OUTPUTDUPL_CONTEXT *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  UINT v49; // eax
  unsigned int v50; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v51; // [rsp+34h] [rbp-45h] BYREF
  _BYTE v52[8]; // [rsp+38h] [rbp-41h] BYREF
  char v53; // [rsp+40h] [rbp-39h]
  _DWORD v54[16]; // [rsp+50h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v54, 0, sizeof(v54));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v54);
  v7 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v54[1] = 64;
  v54[13] = VidPnSourceId;
  v51 = D3DKMT_VIDPNSOURCEOWNER_UNOWNED;
  v54[12] = v10 ? 0xB : 0;
  v11 = -1;
  v50 = -1;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  this,
                                  VidPnSourceId,
                                  (v7 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v51);
  if ( IsOutputDuplAllowedForVidPn < 0 )
  {
LABEL_22:
    v54[14] = v11;
    v54[15] = IsOutputDuplAllowedForVidPn;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v54, 1);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  v13 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v52, *v13, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15, v14, v16, v17);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, CurrentProcess, &v54[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, 0LL, &v50);
    v11 = v50;
    v30 = ContextForProcess;
    IsOutputDuplAllowedForVidPn = -1073741653;
    if ( ContextForProcess )
    {
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        v49 = 3;
        if ( v51 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
          v49 = 1;
        IsOutputDuplAllowedForVidPn = 0;
        a2->RequiredKeyedMutexCount = v49;
      }
      else
      {
        v31 = (OUTPUTDUPL_CONTEXT *)operator new[](0x150uLL, 0x674D444Fu, PagedPool);
        if ( v31 )
          v31 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v31,
                  this,
                  v11,
                  (*(_DWORD *)a3 >> 1) & 1,
                  (*(_DWORD *)a3 >> 3) & 1,
                  (*(_DWORD *)a3 >> 2) & 1);
        *v30 = v31;
        if ( v31 )
        {
          IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v31, a2);
          if ( IsOutputDuplAllowedForVidPn < 0 )
          {
            v37 = WdLogNewEntry5_WdError(v36, v29);
            v38 = a2->VidPnSourceId;
            v39 = v37;
            *(_QWORD *)(v37 + 24) = v38;
            *(_QWORD *)(v37 + 32) = PsGetCurrentProcess(v38, v40, v41, v42);
            WdLogEvent5_WdError(v39);
            if ( *v30 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v30);
            *v30 = 0LL;
          }
        }
        else
        {
          v43 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
          v44 = a2->VidPnSourceId;
          v45 = v43;
          *(_QWORD *)(v43 + 24) = v44;
          *(_QWORD *)(v43 + 32) = PsGetCurrentProcess(v44, v46, v47, v48);
          WdLogEvent5_WdLowResource(v45);
          IsOutputDuplAllowedForVidPn = -1073741801;
        }
      }
    }
    if ( v53 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52, v29);
    goto LABEL_22;
  }
  v21 = WdLogNewEntry5_WdError(v20, v19);
  *(_QWORD *)(v21 + 24) = PsGetCurrentProcess(v23, v22, v24, v25);
  *(_QWORD *)(v21 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v21);
  v54[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v54, 1);
  if ( v53 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52, v26);
  return 3221227288LL;
}
