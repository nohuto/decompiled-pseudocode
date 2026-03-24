/*
 * XREFs of ?ProcessLegacyTranslateTransform3DUpdateCommand@@YAJPEAVCTranslateTransform3D@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSLATETRANSFORM3D@@@Z @ 0x1801B3070
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyTranslateTransform3DUpdateCommand(
        struct CTranslateTransform3D *a1,
        struct CChannelContext *a2,
        const struct tagMILCMD_TRANSLATETRANSFORM3D *a3)
{
  float v3; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm0_4
  __int64 v10; // rax

  v3 = *((float *)a3 + 2);
  if ( v3 != *((float *)a1 + 38) )
  {
    v6 = *(_QWORD *)a1;
    *((float *)a1 + 38) = v3;
    (*(void (__fastcall **)(struct CTranslateTransform3D *, _QWORD, _QWORD))(v6 + 72))(a1, 0LL, 0LL);
  }
  v7 = *((float *)a3 + 3);
  if ( v7 != *((float *)a1 + 39) )
  {
    v8 = *(_QWORD *)a1;
    *((float *)a1 + 39) = v7;
    (*(void (__fastcall **)(struct CTranslateTransform3D *, _QWORD, _QWORD))(v8 + 72))(a1, 0LL, 0LL);
  }
  v9 = *((float *)a3 + 4);
  if ( v9 != *((float *)a1 + 40) )
  {
    v10 = *(_QWORD *)a1;
    *((float *)a1 + 40) = v9;
    (*(void (__fastcall **)(struct CTranslateTransform3D *, _QWORD, _QWORD))(v10 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
