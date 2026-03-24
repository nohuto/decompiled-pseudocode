/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801D7B0C
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CAE80 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18006541C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801D75D8 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801D9180 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        struct CWeakResourceReference *a5)
{
  struct CWeakResourceReference *v5; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rax
  int v14; // eax
  struct CWeakResourceReference *v15; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v8 = operator new(0x30uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[4] = 0;
    *(_QWORD *)v8 = &CNaturalAnimationScalarForceAdapater::`vftable'{for `IScalarForce'};
    *((_QWORD *)v8 + 1) = &CNaturalAnimationScalarForceAdapater::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(_DWORD *))v9)(v9);
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(float *)(a1 + 352) = a4;
    *(float *)(a1 + 316) = a3;
  }
  else
  {
    *(float *)(a1 + 348) = a4;
    *(float *)(a1 + 312) = a3;
  }
  *(_BYTE *)(a1 + 564) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  v10 = CNaturalAnimation::SetupAnimationIfNecessary((CNaturalAnimation *)a1);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x395u, 0LL);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
    a5 = 0LL;
    *((_QWORD *)v9 + 4) = v13;
    v9[6] = a2;
    v14 = CWeakResourceReference::Get((struct CResource *)a1, &a5);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v14, 0x97u, 0LL);
      v15 = a5;
      if ( a5 )
        (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)a5 + 8LL))(a5);
    }
    else
    {
      *((_QWORD *)v9 + 5) = a5;
    }
    if ( v12 >= 0 )
    {
      *(_QWORD *)v5 = v9;
      return (unsigned int)v12;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v12, 0x397u, 0LL);
  }
  if ( v9 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  return (unsigned int)v12;
}
