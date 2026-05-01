/*
 * XREFs of ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180032BE0
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180032784 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180032D20 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForActivation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IUnknown *a5)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  unsigned int i; // ebx
  bool v11; // zf
  unsigned int (__fastcall *v12)(__int64, struct IApplicationView *, struct IUnknown *); // rax
  __int64 v13; // rcx
  void *v14; // rcx
  int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ppvOut = 0LL;
  v8 = IUnknown_QueryService(
         a4,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &ppvOut);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x449,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v8,
      v16);
  }
  else
  {
    for ( i = 0; i < 0xA; ++i )
    {
      if ( i > 1 )
      {
        v17 = 0LL;
        if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ppvOut + 24LL))(
               ppvOut,
               i,
               &GUID_ee010e17_919a_4068_868b_675acf787303,
               &v17) >= 0 )
        {
          v11 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                  a2,
                  i) == 0;
          v12 = *(unsigned int (__fastcall **)(__int64, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v17 + 24LL);
          if ( v11 )
          {
            if ( v12(v17, a3, a5) )
              (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
          }
          else if ( !v12(v17, a3, a5) )
          {
            (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    ShellPositionerManager::PersistPositionerPriority(this, a3);
    v9 = 0;
  }
  v14 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v9;
}
