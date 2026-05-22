/*
 * XREFs of ?SendMaterializeProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180006A10
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003FD88 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800644EC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // r12
  __int64 v7; // rax
  int v8; // eax
  unsigned int *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v14; // eax
  unsigned int *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  struct IMessageCallSendHost *v19; // rax
  unsigned int v20; // eax
  unsigned int *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  struct IMessageCallSendHost *v25; // rax
  unsigned int v26; // eax
  unsigned int *v27; // rcx
  int v28; // esi
  __int64 v29; // rdi
  __int64 v30; // rbx
  struct IMessageCallSendHost *v31; // rax
  unsigned int v32; // eax
  unsigned int *v33; // rcx
  int v34; // esi
  __int64 v35; // rdi
  __int64 v36; // rbx
  struct IMessageCallSendHost *v37; // rax
  unsigned int v38; // eax
  unsigned int *v39; // rcx
  int v40; // esi
  __int64 v41; // rdi
  __int64 v42; // rbx
  struct IMessageCallSendHost *v43; // rax
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  int v55; // [rsp+20h] [rbp-30h]
  int v56; // [rsp+20h] [rbp-30h]
  int v57; // [rsp+30h] [rbp-20h]
  __int64 v58; // [rsp+40h] [rbp-10h] BYREF
  __int64 v59; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v61; // [rsp+80h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 44) )
  {
    v7 = (__int64)a2 + 56;
    if ( !a2 )
      v7 = 72LL;
    *(_BYTE *)v7 = 1;
  }
  v57 = *((_DWORD *)this + 6);
  v58 = *(unsigned int *)(v3 + 36);
  v59 = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, &v58, 2LL, 74LL, 1, &unk_1801C01BA, v57);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x50D6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v55);
    __debugbreak();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v9 = (unsigned int *)*((_QWORD *)a3 + 5);
    v10 = *((_QWORD *)this + 5);
    v11 = *((unsigned int *)this + 6);
    v12 = v9[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v9);
    v58 = v12;
    LOWORD(v55) = 0;
    v59 = v11;
    v14 = CoreUICallSend(SendHost, &v58, 2LL, 1LL, v55, &unk_1801C01B2, v10);
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2018375675 )
    {
      v49 = wil::verify_hresult<long>(v14);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x513F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v49,
        v55);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v15 = (unsigned int *)*((_QWORD *)a3 + 5);
    v16 = *((_QWORD *)this + 6);
    v17 = *((unsigned int *)this + 6);
    v18 = v15[9];
    v19 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v15);
    v58 = v18;
    LOWORD(v55) = 1;
    v59 = v17;
    v20 = CoreUICallSend(v19, &v58, 2LL, 1LL, v55, &unk_1801C01B2, v16);
    if ( (int)(v20 + 0x80000000) >= 0 && v20 != -2018375675 )
    {
      v50 = wil::verify_hresult<long>(v20);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5165,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v50,
        v55);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v21 = (unsigned int *)*((_QWORD *)a3 + 5);
    v22 = *((_QWORD *)this + 7);
    v23 = *((unsigned int *)this + 6);
    v24 = v21[9];
    v25 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v21);
    v61 = v22;
    v58 = v24;
    v59 = v23;
    LOWORD(v55) = 2;
    v26 = CoreUICallSend(v25, &v58, 2LL, 1LL, v55, &unk_1801C01B5, (unsigned int)&v61);
    if ( (int)(v26 + 0x80000000) >= 0 && v26 != -2018375675 )
    {
      v51 = wil::verify_hresult<long>(v26);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x518B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v51,
        v55);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v27 = (unsigned int *)*((_QWORD *)a3 + 5);
    v28 = *((_DWORD *)this + 16);
    v29 = *((unsigned int *)this + 6);
    v30 = v27[9];
    v31 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v27);
    v59 = v29;
    v58 = v30;
    LOWORD(v55) = 3;
    v32 = CoreUICallSend(v31, &v58, 2LL, 1LL, v55, &unk_1801C01BA, v28);
    if ( (int)(v32 + 0x80000000) >= 0 && v32 != -2018375675 )
    {
      v52 = wil::verify_hresult<long>(v32);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x51B1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v52,
        v55);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v33 = (unsigned int *)*((_QWORD *)a3 + 5);
    v34 = *((_DWORD *)this + 17);
    v35 = *((unsigned int *)this + 6);
    v36 = v33[9];
    v37 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v33);
    v59 = v35;
    v58 = v36;
    LOWORD(v55) = 4;
    v38 = CoreUICallSend(v37, &v58, 2LL, 1LL, v55, &unk_1801C01BA, v34);
    if ( (int)(v38 + 0x80000000) >= 0 && v38 != -2018375675 )
    {
      v53 = wil::verify_hresult<long>(v38);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x51D7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v53,
        v55);
      __debugbreak();
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v39 = (unsigned int *)*((_QWORD *)a3 + 5);
    v40 = *((unsigned __int8 *)this + 72);
    v41 = *((unsigned int *)this + 6);
    v42 = v39[9];
    v43 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v39);
    v58 = v42;
    LOWORD(v55) = 5;
    v59 = v41;
    v44 = CoreUICallSend(v43, &v58, 2LL, 1LL, v55, &unk_1801C01BD, v40);
    if ( (int)(v44 + 0x80000000) >= 0 && v44 != -2018375675 )
    {
      v54 = wil::verify_hresult<long>(v44);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x51FD,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v54,
        v55);
      __debugbreak();
    }
  }
  v45 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v45 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x50EE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v45,
      v55);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v46 = (__int64)a2 + 56;
    if ( !a2 )
      v46 = 72LL;
    *(_BYTE *)v46 = 1;
  }
  v47 = *((_DWORD *)this + 6);
  v58 = *(unsigned int *)(v3 + 36);
  v59 = *(unsigned int *)(v3 + 40);
  LOWORD(v55) = 55;
  v48 = CoreUICallSend(a2, &v58, 2LL, 74LL, v55, &unk_1801C01BA, v47);
  if ( v48 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x50FF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v48,
      v56);
    JUMPOUT(0x180006F75LL);
  }
}
