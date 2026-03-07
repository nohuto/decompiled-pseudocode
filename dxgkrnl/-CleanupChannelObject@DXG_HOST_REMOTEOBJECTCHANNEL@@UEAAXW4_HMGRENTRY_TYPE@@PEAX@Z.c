void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CleanupChannelObject(__int64 a1, int a2, DXGSHAREDVMOBJECT *a3)
{
  struct _KPROCESS *v4; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+50h] [rbp-18h]

  if ( a2 == 13 && *(_DWORD *)a3 == 16 )
  {
    v4 = *(struct _KPROCESS **)(a1 + 24);
    v6 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v4);
    DXGSHAREDVMOBJECT::ReleaseReference(a3);
    if ( v6 )
      KeUnstackDetachProcess(&ApcState);
  }
}
