/*
 * XREFs of ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x1801EA4E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801E9080 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801EA778 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801EB0C0 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetBuffers(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETBUFFERS *a3,
        HANDLE *a4,
        unsigned int a5)
{
  __int64 *v5; // rbx
  __int64 v8; // rsi
  HANDLE v9; // rax
  _QWORD *v10; // rdx
  char *v11; // rcx
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  hObject = a2;
  v5 = (__int64 *)((char *)this + 2016);
  if ( !*((_BYTE *)a3 + 8) )
  {
    std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 2016);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
  }
  if ( a5 >> 3 )
  {
    v8 = a5 >> 3;
    do
    {
      v9 = *a4;
      if ( *a4 != (HANDLE)-1LL )
      {
        v10 = (_QWORD *)v5[1];
        hObject = *a4;
        if ( v10 == (_QWORD *)v5[2] )
        {
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
            v5,
            (__int64)v10,
            &hObject);
          v11 = (char *)hObject;
        }
        else
        {
          v11 = 0LL;
          *v10 = v9;
          v5[1] += 8LL;
        }
        if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v11);
      }
      ++a4;
      --v8;
    }
    while ( v8 );
  }
  return 0LL;
}
