/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1801A4C6C
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019A7E4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180031CA8 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1801A4470 (_anonymous_namespace_--BypassGestureTargeting.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2)
{
  unsigned int v4; // eax
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // rax
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 (__fastcall *v14)(const struct IManipulationContext *, __int64, _QWORD); // r9
  unsigned int v15; // eax
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 (__fastcall *v20)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD); // r9
  unsigned int v21; // eax
  _BYTE v22[80]; // [rsp+30h] [rbp-68h] BYREF
  char v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp+18h] BYREF

  v4 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  v5 = anonymous_namespace_::BypassGestureTargeting((__int64 *)a1, v4);
  v6 = *(_QWORD *)a1;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(v6 + 16))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7);
    return 0LL;
  }
  else
  {
    v9 = 0;
    v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(v6 + 24))(
            a1,
            *((unsigned int *)a2 + 1));
    if ( v10 )
    {
      while ( v9 >= 0 )
      {
        v11 = *(_QWORD *)v10;
        v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 176LL))(v10, v22);
        v13 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
        v15 = v14(a1, v10, v13);
        v9 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, _QWORD, __int64, char *))(v11 + 16))(
               v10,
               a2,
               v15,
               v12,
               &v23);
        if ( v9 >= 0 )
        {
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 208LL))(v10);
        }
        v10 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v10);
        if ( !v10 )
        {
          if ( v9 < 0 )
            return (unsigned int)v9;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      v24 = (__int64 *)(*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a1 + 112LL))(a1);
      v16 = v24;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v24);
      v17 = *v16;
      v18 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 176))(v16, v22);
      v19 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
      v21 = v20(a1, (__int64 (__fastcall ***)(_QWORD))v16, v19);
      v9 = (*(__int64 (__fastcall **)(__int64 *, const struct tagPOINTER_INFO *, _QWORD, __int64, char *))(v17 + 16))(
             v16,
             a2,
             v21,
             v18,
             &v23);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v24);
    }
    return (unsigned int)v9;
  }
}
