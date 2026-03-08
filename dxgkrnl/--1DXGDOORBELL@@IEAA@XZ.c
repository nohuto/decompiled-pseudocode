/*
 * XREFs of ??1DXGDOORBELL@@IEAA@XZ @ 0x1C03117B0
 * Callers:
 *     ??_GDXGDOORBELL@@IEAAPEAXI@Z @ 0x1C0051918 (--_GDXGDOORBELL@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009B30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDestroyDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYDOORBELL@@@Z @ 0x1C02C19C8 (-DdiDestroyDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYDOORBELL@@@Z.c)
 *     ?DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z @ 0x1C02C2578 (-DdiDisconnectDoorbell@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DISCONNECTDOORBELL@@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C02D24A4 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 */

void __fastcall DXGDOORBELL::~DXGDOORBELL(DXGDOORBELL *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rdi
  struct DXGGLOBAL *Global; // rax
  void *v10; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v12; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v13; // rax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)this
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL) + 16LL) + 16LL)
                 + 200LL) != 4 )
  {
    if ( (unsigned int)**((_QWORD **)this + 15) <= 1 )
    {
      v14[0] = *(_QWORD *)this;
      v4 = *((_QWORD *)this + 1);
      v14[1] = 0LL;
      ADAPTER_RENDER::DdiDisconnectDoorbell(
        *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 16LL),
        (struct _DXGKARG_DISCONNECTDOORBELL *)v14,
        a3);
    }
    v15 = *(_QWORD *)this;
    ADAPTER_RENDER::DdiDestroyDoorbell(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL) + 16LL),
      (struct _DXGKARG_DESTROYDOORBELL *)&v15,
      a3);
    *(_QWORD *)this = 0LL;
  }
  **((_QWORD **)this + 15) = 3LL;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                             + 16LL)
                                                                                 + 16LL)
                                                                     + 16LL)
                                                         + 736LL)
                                             + 8LL)
                                 + 1080LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL));
  DXGALLOCATIONREFERENCE::AssignNull((struct _EX_RUNDOWN_REF **)this + 2);
  DXGALLOCATIONREFERENCE::AssignNull((struct _EX_RUNDOWN_REF **)this + 3);
  if ( *((_QWORD *)this + 16) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = 0LL;
    v8 = (char *)this + 80;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 760LL) + 8LL) + 952LL))(
      v7,
      (char *)this + 80);
    *((_QWORD *)this + 16) = 0LL;
  }
  else
  {
    v8 = (char *)this + 80;
  }
  if ( *((_QWORD *)this + 15) )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)(*((_QWORD *)Global + 33) + 8LL) + 920LL))(v8, 0LL);
    *((_QWORD *)this + 15) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 7);
  if ( v10 )
  {
    MmUnsecureVirtualMemory(v10);
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 6) )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 48,
      (char *)this + 32,
      0x8000LL);
    *((_QWORD *)this + 6) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 9);
  if ( v12 )
  {
    MmUnsecureVirtualMemory(v12);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    v13 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v13 + 2))(
      -1LL,
      (char *)this + 64,
      (char *)this + 40,
      0x8000LL);
    *((_QWORD *)this + 8) = 0LL;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)this + 3);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)this + 2);
}
