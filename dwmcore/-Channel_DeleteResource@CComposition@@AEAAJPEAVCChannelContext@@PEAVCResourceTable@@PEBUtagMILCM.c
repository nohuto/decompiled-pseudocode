/*
 * XREFs of ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x18009C288
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800DE484 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800DF5C0 (_anonymous_namespace_--AddToResourceCount.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801B1904 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_DeleteResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_DELETERESOURCE *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int *v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // r8d
  unsigned int v17; // ecx

  v4 = *((_DWORD *)a4 + 1);
  v5 = 0;
  if ( !v4
    || v4 >= *((_DWORD *)a3 + 7)
    || (v8 = *((_QWORD *)a3 + 5), !*(_DWORD *)(*((_DWORD *)a3 + 6) * v4 + v8))
    || (v9 = *(_QWORD *)(*((_DWORD *)a3 + 6) * v4 + v8 + 8)) == 0 )
  {
    CComposition::FailFastOnMalformedPacket(this, 724106194LL, 0LL);
  }
  (*(void (__fastcall **)(__int64, struct CChannelContext *, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, a2, 0LL);
  v11 = *((_QWORD *)a2 + 4);
  if ( v4 < *(_DWORD *)(v11 + 28)
    && (v12 = *(_QWORD *)(v11 + 40), v10 = *(_DWORD *)(v11 + 24) * v4, *(_DWORD *)(v10 + v12))
    && (v13 = (unsigned int *)(v12 + *(_DWORD *)(v11 + 24) * v4)) != 0LL )
  {
    if ( *((_QWORD *)v13 + 1) )
    {
      v14 = AddToResourceCount(*(_QWORD *)(v11 + 56) + 44LL, *v13, 0xFFFFFFFFLL);
      anonymous_namespace_::AddToResourceCount(v14, v15);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v13 + 1) + 16LL))(*((_QWORD *)v13 + 1));
      *((_QWORD *)v13 + 1) = 0LL;
    }
    memset_0((void *)(*(_QWORD *)(v11 + 40) + v4 * *(_DWORD *)(v11 + 24)), 0, *(unsigned int *)(v11 + 24));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024890, 0x991u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024890, 0x600u, 0LL);
    return (unsigned int)-2147024890;
  }
  return v5;
}
