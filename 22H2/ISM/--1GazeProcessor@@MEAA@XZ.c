/*
 * XREFs of ??1GazeProcessor@@MEAA@XZ @ 0x18018873C
 * Callers:
 *     ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1801888D0 (--_GGazeProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GazeProcessor::~GazeProcessor(GazeProcessor *this)
{
  __int64 v2; // rcx
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  _QWORD **v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 43);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v10 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7)
                                                                                          + 64LL))(*((_QWORD *)this + 7));
  v4 = **v3;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v10);
  if ( v4(v3, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v10) >= 0 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 32LL))(v10, (char *)this + 16);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v10);
  v5 = (_QWORD **)*((_QWORD *)this + 44);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x18);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*((void **)this + 44), (const struct std::nothrow_t *)0x18);
  v8 = *((_QWORD *)this + 43);
  if ( v8 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 42);
  if ( v9 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 41);
  NonPointerProcessor::~NonPointerProcessor((GazeProcessor *)((char *)this + 24));
}
