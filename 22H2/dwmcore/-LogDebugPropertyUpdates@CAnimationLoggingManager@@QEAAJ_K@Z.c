/*
 * XREFs of ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x1800A103C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800A34F0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A1010 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801B04E8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 */

__int64 __fastcall CAnimationLoggingManager::LogDebugPropertyUpdates(CAnimationLoggingManager *this, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct CResource *ResourceWithoutType; // rax
  __int64 v9; // r9
  struct CResource *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  _BYTE v13[64]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v14; // [rsp+90h] [rbp-48h]
  int v15; // [rsp+98h] [rbp-40h]
  char v16; // [rsp+9Ch] [rbp-3Ch]

  memset_0(v13, 0, sizeof(v13));
  v14 = 0LL;
  v4 = 0LL;
  v15 = 18;
  v16 = 0;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_2:
    *((_DWORD *)this + 20) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 56, 12LL);
    v5 = 0;
    goto LABEL_3;
  }
  while ( 1 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                            *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 7) + 12 * v4));
    v10 = ResourceWithoutType;
    if ( ResourceWithoutType )
      break;
LABEL_9:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
      goto LABEL_2;
  }
  v11 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(*(_QWORD *)ResourceWithoutType + 144LL))(
          ResourceWithoutType,
          *(unsigned int *)(v9 + 12 * v4 + 4),
          v13);
  v5 = v11;
  if ( v11 >= 0 )
  {
    CAnimationLoggingManager::LogDebugPropertyUpdate(this, v10, 1LL, a2);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1BAu, 0LL);
LABEL_3:
  v6 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
