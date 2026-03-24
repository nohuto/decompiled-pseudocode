/*
 * XREFs of ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C01980FC
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0197F30 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E5F1C (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::Initialize(DMMVIDEOPRESENTTARGET *this)
{
  PVOID v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  PIO_WORKITEM WorkItem; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = operator new[](0xB0uLL, 0x4E506456u, (POOL_TYPE)512);
  *((_QWORD *)this + 67) = v2;
  if ( !v2 )
    goto LABEL_8;
  memset(v2, 0, 0xB0uLL);
  *(_QWORD *)(*((_QWORD *)this + 67) + 160LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 67) + 168LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) = 0;
  KeInitializeTimer((PKTIMER)(*((_QWORD *)this + 67) + 16LL));
  KeInitializeDpc(
    (PRKDPC)(*((_QWORD *)this + 67) + 80LL),
    (PKDEFERRED_ROUTINE)DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutDpc,
    *((PVOID *)this + 67));
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  v4 = *((_QWORD *)this + 67);
  *(_QWORD *)(v4 + 144) = WorkItem;
  if ( *(_QWORD *)(*((_QWORD *)this + 67) + 144LL) )
  {
    v8 = *((_QWORD *)this + 5);
    if ( !v8 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v4, v3);
      WdLogEvent5_WdAssertion(v14);
      v8 = *((_QWORD *)this + 5);
    }
    v9 = *(_QWORD *)(v8 + 88);
    v10 = *(_QWORD *)(v9 + 8);
    if ( !v10 )
    {
      v15 = WdLogNewEntry5_WdAssertion(0LL, v3);
      WdLogEvent5_WdAssertion(v15);
      v10 = *(_QWORD *)(v9 + 8);
    }
    v11 = *(_QWORD *)(v10 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
    *(_QWORD *)(*((_QWORD *)this + 67) + 8LL) = this;
    **((_QWORD **)this + 67) = v11;
    return 0LL;
  }
  else
  {
LABEL_8:
    v13 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v13 + 32) = -1073741670LL;
    WdLogEvent5_WdLowResource(v13);
    return 3221225626LL;
  }
}
