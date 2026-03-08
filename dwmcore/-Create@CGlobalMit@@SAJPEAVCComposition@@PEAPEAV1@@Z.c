/*
 * XREFs of ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CB6A0
 * Callers:
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x1800CB370 (-Initialize@CInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x1800CB754 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x1801AE310 (--_GCGlobalMit@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalMit::Create(struct CComposition *a1, struct CGlobalMit **a2)
{
  CGlobalMit *v4; // rax
  __int64 v5; // rcx
  CGlobalMit *v6; // rax
  CGlobalMit *v7; // rsi
  __int64 v8; // rcx
  signed int v9; // ebx
  HANDLE EventW; // rax
  unsigned int v11; // edi
  signed int LastError; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx

  v4 = (CGlobalMit *)DefaultHeap::Alloc(0x98uLL);
  if ( !v4 || (v6 = CGlobalMit::CGlobalMit(v4, a1), (v7 = v6) == 0LL) )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x2Du, 0LL);
    return v11;
  }
  v9 = (*(__int64 (__fastcall **)(CGlobalMit *))(*(_QWORD *)v6 + 24LL))(v6);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0x42u, 0LL);
LABEL_13:
    v11 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v9, 0x2Fu, 0LL);
    CGlobalMit::`scalar deleting destructor'(v7, 1u);
    return v11;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)v7 + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v9, 0x48u, 0LL);
    goto LABEL_13;
  }
  *a2 = v7;
  return (unsigned int)v9;
}
