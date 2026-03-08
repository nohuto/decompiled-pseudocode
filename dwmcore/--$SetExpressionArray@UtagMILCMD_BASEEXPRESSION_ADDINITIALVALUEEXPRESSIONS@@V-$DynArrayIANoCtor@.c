/*
 * XREFs of ??$SetExpressionArray@UtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x18023AE0C
 * Callers:
 *     ?ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXI@Z @ 0x18023C198 (-ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEE.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetExpressionArray<tagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS,DynArrayIANoCtor<CBaseExpression *,2,0>>(
        __int64 a1,
        CResourceTable *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // ebp
  __int64 v11; // rsi
  struct CResource *ResourceWithoutType; // rax
  __int64 v13; // rcx
  struct CResource *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // edi
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-38h]
  struct CResource *v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  if ( *(_DWORD *)(a3 + 8) )
  {
    v11 = a6;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v14 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              60LL) )
      {
        break;
      }
      if ( (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 224LL))(v14) )
      {
        v24 = 318;
        goto LABEL_20;
      }
      v15 = *(_DWORD *)(v11 + 24);
      v25 = v14;
      v16 = v15 + 1;
      if ( v15 + 1 < v15 )
      {
        v18 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_17;
      }
      if ( v16 > *(_DWORD *)(v11 + 20) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet(v11, 8, 1, &v25);
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v18, 0xC0u, 0LL);
LABEL_17:
          v21 = v18;
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v18, 0x141u, 0LL);
          return v21;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v11 + 8LL * v15) = v14;
        *(_DWORD *)(v11 + 24) = v16;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 8LL))(v14);
      (*(void (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 216LL))(v14, a1);
      v19 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 232LL))(v14);
      v21 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x149u, 0LL);
        return v21;
      }
      ++a4;
      if ( (unsigned int)++v6 >= *(_DWORD *)(a3 + 8) )
        return 0;
    }
    v24 = 310;
LABEL_20:
    v21 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, v24, 0LL);
  }
  else
  {
    return 0;
  }
  return v21;
}
