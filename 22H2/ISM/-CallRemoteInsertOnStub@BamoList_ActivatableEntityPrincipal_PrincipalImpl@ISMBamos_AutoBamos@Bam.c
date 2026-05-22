/*
 * XREFs of ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180007140
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18000B520 (-BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo.c)
 * Callees:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800072C0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003FD88 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteInsertOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  unsigned int v5; // ebx
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // rcx
  struct IMessageCallSendHost *SendHost; // r10
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL) + 32LL) + 56LL) )
  {
    v5 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD22A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v11);
    goto LABEL_12;
  }
  if ( a3 )
  {
    v6 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoActivatableEntityPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
    Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
      v6,
      *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1 + 5));
  }
  if ( *((_BYTE *)a1 + 32)
    && (v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a1 + 5),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 32LL) + 56LL)) )
  {
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v7);
    v9 = *((_QWORD *)a1 + 3);
    v14[0] = *(unsigned int *)(*((_QWORD *)a1 + 5) + 36LL);
    v14[1] = *(unsigned int *)(v9 + 24);
    v5 = CoreUICallSend(SendHost, v14, 2LL, 71LL, 0, &unk_1801C0220, a2);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
    {
LABEL_12:
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD1A8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v5,
        v12);
      JUMPOUT(0x1800072AFLL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoStub.inl",
      (const char *)0x87B20805LL,
      v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD232,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20805LL,
      v13);
  }
  return 0LL;
}
