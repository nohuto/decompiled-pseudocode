/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B6840
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800B46F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x1800B68FC (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  CEffectCompilationService *v5; // rax
  __int64 v6; // rcx
  CEffectCompilationService *v7; // rdi
  HANDLE EventW; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  signed int LastError; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CEffectCompilationService *)DefaultHeap::AllocClear(0xE0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CEffectCompilationService::CEffectCompilationService(v4, a1);
  v7 = v5;
  if ( !v5 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x48u, 0LL);
    return v11;
  }
  _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v7 + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    if ( (v11 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0x2Fu, 0LL);
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0x4Bu, 0LL);
      goto LABEL_6;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), CEffectCompilationService *))(**((_QWORD **)v7 + 2) + 256LL))(
         *((_QWORD *)v7 + 2),
         *((_QWORD *)v7 + 3),
         lambda_85e973520dc2ca0a0fec8750a81f8fb9_::_lambda_invoker_cdecl_,
         v7);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x38u, 0LL);
    goto LABEL_15;
  }
  v11 = 0;
  *a2 = v7;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
LABEL_6:
  CDrawListEntry::Release(v7);
  return v11;
}
