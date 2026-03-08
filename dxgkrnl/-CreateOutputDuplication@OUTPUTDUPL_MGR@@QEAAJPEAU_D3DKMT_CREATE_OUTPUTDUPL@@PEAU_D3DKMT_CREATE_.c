/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326460
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326A90 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C00534B8 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C01D24DC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C022378E (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0327D6C (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C0327F80 (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0328448 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C032C740 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C032D884 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
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
  unsigned int v11; // r15d
  int IsOutputDuplAllowedForVidPn; // ebx
  struct DXGFASTMUTEX *v13; // rbx
  __int64 v14; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v16; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  OUTPUTDUPL_CONTEXT **v23; // rsi
  OUTPUTDUPL_CONTEXT *v24; // rax
  __int64 v25; // rcx
  OUTPUTDUPL_CONTEXT *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  UINT v35; // eax
  unsigned int v36; // [rsp+50h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v37; // [rsp+54h] [rbp-45h] BYREF
  _BYTE v38[8]; // [rsp+58h] [rbp-41h] BYREF
  char v39; // [rsp+60h] [rbp-39h]
  _DWORD v40[16]; // [rsp+70h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v40, 0, sizeof(v40));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40);
  v7 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v40[1] = 64;
  v40[13] = VidPnSourceId;
  v11 = -1;
  v40[12] = v10 ? 0xB : 0;
  v36 = -1;
  v37 = D3DKMT_VIDPNSOURCEOWNER_UNOWNED;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  this,
                                  VidPnSourceId,
                                  (v7 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v37);
  if ( IsOutputDuplAllowedForVidPn < 0 )
  {
LABEL_15:
    v40[14] = v11;
    v40[15] = IsOutputDuplAllowedForVidPn;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40, 1);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  v13 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, v13, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v14);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v13, CurrentProcess, &v40[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v13, 0LL, &v36);
    v11 = v36;
    v23 = ContextForProcess;
    IsOutputDuplAllowedForVidPn = -1073741653;
    if ( ContextForProcess )
    {
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        v35 = 3;
        IsOutputDuplAllowedForVidPn = 0;
        if ( v37 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
          v35 = 1;
        a2->RequiredKeyedMutexCount = v35;
        goto LABEL_13;
      }
      v24 = (OUTPUTDUPL_CONTEXT *)operator new[](0x150uLL, 0x674D444Fu, 256LL);
      if ( v24 )
      {
        v26 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                v24,
                this,
                v11,
                (*(_DWORD *)a3 >> 1) & 1,
                (*(_DWORD *)a3 >> 3) & 1,
                (*(_DWORD *)a3 >> 2) & 1);
        *v23 = v26;
        if ( v26 )
        {
          IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v26, a2);
          if ( IsOutputDuplAllowedForVidPn < 0 )
          {
            v28 = PsGetCurrentProcess(v27);
            WdLogSingleEntry2(2LL, a2->VidPnSourceId, v28);
            v30 = PsGetCurrentProcess(v29);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to initialize OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
              a2->VidPnSourceId,
              v30,
              0LL,
              0LL,
              0LL);
            if ( *v23 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v23);
            *v23 = 0LL;
          }
          goto LABEL_13;
        }
      }
      else
      {
        *v23 = 0LL;
      }
      v32 = PsGetCurrentProcess(v25);
      WdLogSingleEntry2(6LL, a2->VidPnSourceId, v32);
      v34 = PsGetCurrentProcess(v33);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
        a2->VidPnSourceId,
        v34,
        0LL,
        0LL,
        0LL);
      IsOutputDuplAllowedForVidPn = -1073741801;
    }
LABEL_13:
    if ( v39 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
    goto LABEL_15;
  }
  v17 = a2->VidPnSourceId;
  v18 = PsGetCurrentProcess(v16);
  WdLogSingleEntry2(2LL, v18, v17);
  v19 = a2->VidPnSourceId;
  v21 = PsGetCurrentProcess(v20);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Process 0x%I64x is already duplicating output 0x%I64x",
    v21,
    v19,
    0LL,
    0LL,
    0LL);
  IsOutputDuplAllowedForVidPn = -1073740008;
  v40[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40, 1);
  if ( v39 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  return (unsigned int)IsOutputDuplAllowedForVidPn;
}
