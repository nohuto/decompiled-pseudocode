/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItemBase@@@Z @ 0x1801EE688
 * Callers:
 *     ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z @ 0x1801CEA70 (-AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItemBase *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  struct CResponseItemBase *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_DWORD *)this + 50);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x73u, 0LL);
    return v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 49) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 176, 8, 1, &v9);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC0u, 0LL);
      goto LABEL_8;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * *((unsigned int *)this + 50)) = a2;
    *((_DWORD *)this + 50) = v3;
  }
  (*(void (__fastcall **)(struct CResponseItemBase *))(*(_QWORD *)v9 + 32LL))(v9);
  return v4;
}
