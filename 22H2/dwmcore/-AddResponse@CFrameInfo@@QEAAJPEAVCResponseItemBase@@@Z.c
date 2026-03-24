/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItemBase@@@Z @ 0x1801560D0
 * Callers:
 *     ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z @ 0x180153C00 (-AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItemBase *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  struct CResponseItemBase *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 58);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 57) )
    {
      *(_QWORD *)(*((_QWORD *)this + 26) + 8LL * *((unsigned int *)this + 58)) = a2;
      *((_DWORD *)this + 58) = v3;
      goto LABEL_8;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 208, 8, 1, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0xC0u, 0LL);
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x7Fu, 0LL);
    return (unsigned int)v4;
  }
LABEL_8:
  (*(void (__fastcall **)(struct CResponseItemBase *))(*(_QWORD *)v8 + 24LL))(v8);
  return (unsigned int)v4;
}
