/*
 * XREFs of ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x1800BF990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF4DC (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z2PEAPEAV1@@Z @ 0x1800C0104 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoi.c)
 *     ?InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ @ 0x1800C1268 (-InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ.c)
 */

__int64 __fastcall SipcServer::AcceptClientConnection(
        SipcServer *this,
        __int64 a2,
        void (__high *a3)(void *, struct ISIPCEndpoint *, enum SIPC_ENDPOINT_STATUS),
        void *a4,
        struct ISIPCEndpoint **a5)
{
  struct ISIPCEndpoint **v5; // r14
  unsigned int v9; // ebx
  __int64 v11; // r8
  int ServerEndpoint; // edi
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  SipcServer::EndpointListEntry *v16; // rcx
  HANDLE v17[2]; // [rsp+50h] [rbp-28h] BYREF
  HANDLE hObject; // [rsp+90h] [rbp+18h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( !a3 )
  {
    v9 = -2147024809;
LABEL_3:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v9);
    return v9;
  }
  v11 = *((_QWORD *)this + 16);
  if ( !v11 )
  {
    v9 = -2147418113;
    goto LABEL_3;
  }
  ServerEndpoint = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, HANDLE *, HANDLE *, struct ISIPCEndpoint ***))(**((_QWORD **)this + 6) + 8LL))(
                     *((_QWORD *)this + 6),
                     a2,
                     v11,
                     &hObject,
                     v17,
                     &a5);
  if ( ServerEndpoint < 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  }
  else
  {
    ServerEndpoint = SipcEndpoint::CreateServerEndpoint(
                       (SipcServer *)((char *)this - 16),
                       (struct SipcPort *)a5,
                       hObject,
                       v17[0],
                       *(_DWORD *)(*((_QWORD *)this + 16) + 48LL),
                       *(_DWORD *)(*((_QWORD *)this + 16) + 52LL),
                       a3,
                       a4,
                       (struct SipcEndpoint **)(*((_QWORD *)this + 16) + 16LL));
    if ( ServerEndpoint < 0 )
    {
      if ( a5 )
        (*(void (__fastcall **)(struct ISIPCEndpoint **, __int64))*a5)(a5, 1LL);
      CloseHandle(hObject);
      CloseHandle(v17[0]);
    }
    else
    {
      ServerEndpoint = SipcServer::EndpointListEntry::InitializeWaitHandles(*((SipcServer::EndpointListEntry **)this + 16));
      if ( ServerEndpoint >= 0 )
      {
        v13 = (_QWORD *)*((_QWORD *)this + 16);
        v14 = (_QWORD *)((char *)this + 104);
        v15 = *((_QWORD *)this + 13);
        if ( *(SipcServer **)(v15 + 8) != (SipcServer *)((char *)this + 104) )
          __fastfail(3u);
        v13[1] = v14;
        *v13 = v15;
        *(_QWORD *)(v15 + 8) = v13;
        ++*((_QWORD *)this + 15);
        *v14 = v13;
        *v5 = (struct ISIPCEndpoint *)((*(_QWORD *)(*((_QWORD *)this + 16) + 16LL) + 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 16) + 16LL) != 0LL));
        *((_QWORD *)this + 16) = 0LL;
        return 0LL;
      }
    }
  }
  v16 = (SipcServer::EndpointListEntry *)*((_QWORD *)this + 16);
  if ( v16 )
    SipcServer::EndpointListEntry::`scalar deleting destructor'(v16);
  *((_QWORD *)this + 16) = 0LL;
  return (unsigned int)ServerEndpoint;
}
