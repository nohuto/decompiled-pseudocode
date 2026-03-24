/*
 * XREFs of ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B5078
 * Callers:
 *     ?Initialize@CInputManager@@QEAAJXZ @ 0x1800B4EA8 (-Initialize@CInputManager@@QEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x1800B512C (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x180233180 (--_GCGlobalMit@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalMit::Create(struct CComposition *a1, struct CGlobalMit **a2)
{
  CGlobalMit *v4; // rax
  __int64 v5; // rcx
  struct CGlobalMit *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  signed int v9; // ebx
  HANDLE EventW; // rax
  __int64 v11; // rcx
  signed int LastError; // eax
  __int64 v14; // rcx

  v4 = (CGlobalMit *)DefaultHeap::Alloc(0x98uLL);
  if ( v4 )
    v6 = CGlobalMit::CGlobalMit(v4, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(struct CGlobalMit *))(*(_QWORD *)v6 + 24LL))(v6);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x44u, 0LL);
    }
    else
    {
      SetLastError(0);
      EventW = CreateEventW(0LL, 1, 0, 0LL);
      *((_QWORD *)v6 + 3) = EventW;
      if ( !EventW )
      {
        LastError = GetLastError();
        v9 = LastError;
        if ( LastError > 0 )
          v9 = (unsigned __int16)LastError | 0x80070000;
        if ( v9 >= 0 )
          v9 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v9, 0x4Au, 0LL);
      }
    }
    if ( v9 >= 0 )
    {
      *a2 = v6;
      return (unsigned int)v9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x31u, 0LL);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x2Fu, 0LL);
  }
  if ( v6 )
    CGlobalMit::`scalar deleting destructor'(v6, 1u);
  return (unsigned int)v9;
}
