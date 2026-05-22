/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18000B520
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x180002D14 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180006230 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180007140 (-CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteInsert(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *this,
        int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  __int64 v6; // r15
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = *((_QWORD *)this + 3);
  v7 = 0LL;
  v15 = 0LL;
  v8 = *(_QWORD *)(v6 + 32);
  if ( *(_DWORD *)(v8 + 168) != GetCurrentThreadId() )
  {
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
      (Microsoft::BamoImpl::BamoImplObject **)&v15,
      (volatile signed __int32 *)v6);
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 128));
    *(_DWORD *)(v8 + 168) = GetCurrentThreadId();
    v7 = v15;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 56LL) )
  {
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v9 + 32) )
        {
          v10 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteInsertOnStub(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)v9,
                  a2,
                  a3);
          v11 = v10;
          if ( v10 < 0 )
            break;
        }
        v9 = *(_QWORD *)(v9 + 48);
        if ( !v9 )
          goto LABEL_8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D7,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v10,
        v13);
    }
    else
    {
LABEL_8:
      v11 = 0;
    }
  }
  else
  {
    v11 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0DE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v13);
  }
  if ( v7 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v7[4]);
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v7);
  }
  return v11;
}
