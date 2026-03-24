/*
 * XREFs of ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800BCD9C
 * Callers:
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800BC640 (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800BC730 (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BC830 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180019BF8 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BCF70 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18018066C (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::PropertyUpdated<float>(_QWORD *a1, unsigned int a2, unsigned int a3, int *a4)
{
  __int64 v4; // rsi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // r10
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v13; // ebp
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct _RTL_GENERIC_TABLE *v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-58h]
  int Buffer; // [rsp+30h] [rbp-48h] BYREF
  void *lpMem[2]; // [rsp+38h] [rbp-40h]
  int v28; // [rsp+48h] [rbp-30h]
  int v29; // [rsp+4Ch] [rbp-2Ch]
  int v30; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a2;
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 10) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v12 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))a1[9];
    v13 = *(_DWORD *)(*v11 + 8 * v4);
    if ( v12 && (v14 = (**v12)(v12, v10, v13), v9 = v14, v14 < 0) )
    {
      v25 = 458;
    }
    else
    {
      v16 = 0LL;
      v17 = (struct _RTL_GENERIC_TABLE *)a1[5];
      v18 = *(_QWORD *)(a1[2] + 352LL);
      if ( v17 )
      {
        v28 = 0;
        v29 = 0;
        v30 = 0;
        *(_OWORD *)lpMem = 0LL;
        Buffer = v4;
        v16 = (__int64)RtlLookupElementGenericTable(v17, &Buffer);
        if ( lpMem[0] != lpMem[1] )
        {
          operator delete(lpMem[0]);
          lpMem[0] = 0LL;
        }
      }
      v19 = v16 + 8;
      v20 = -v16;
      v21 = v19 & -(__int64)(v20 != 0);
      if ( v21 )
      {
        v22 = 0LL;
        if ( *(_DWORD *)((v19 & -(__int64)(v20 != 0)) + 0x18) )
        {
          do
          {
            v23 = *(_QWORD *)(*(_QWORD *)v21 + 8 * v22);
            v22 = (unsigned int)(v22 + 1);
            *(_QWORD *)(v23 + 272) = v18;
          }
          while ( (unsigned int)v22 < *(_DWORD *)(v21 + 24) );
        }
        *(_BYTE *)(*(_QWORD *)(a1[2] + 272LL) + 416LL) |= 2u;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1[2] + 504LL) + 96LL))(
          *(_QWORD *)(a1[2] + 504LL),
          0LL,
          8LL);
      }
      CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)a1, v4, v13, a3, a4);
      v14 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v13);
      v9 = v14;
      if ( v14 >= 0 )
        return 0;
      v25 = 477;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v25, 0LL);
    return v9;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x1BEu, 0LL);
  return v9;
}
