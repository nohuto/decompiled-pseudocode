/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800960A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800189F0 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x18001D6A4 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800967C4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180096C84 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ??$LogValueUpdate@M@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z @ 0x180096CB8 (--$LogValueUpdate@M@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1800DDBF8 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x180249234 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x180249334 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@@Z @ 0x180249434 (--$UpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180249534 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::SetProperty(CResource *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rcx
  int v8; // r8d
  _OWORD *v9; // r9
  PVOID v10; // r13
  unsigned int v11; // ebx
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int updated; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  _QWORD *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // r14d
  __int64 v31; // rdx
  _QWORD *v32; // r10
  __int64 (__fastcall ***v33)(_QWORD, __int64, _QWORD, __int64); // rcx
  unsigned int v34; // r12d
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  struct _RTL_GENERIC_TABLE *v40; // rcx
  _QWORD *v41; // rdx
  unsigned int i; // r8d
  __int64 v43; // rcx
  int v44; // r9d
  unsigned int v45; // edi
  int v46; // r9d
  __int64 v47; // rcx
  _QWORD *v48; // r10
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // r10
  __int64 v52; // rcx
  int v53; // r14d
  __int64 v54; // rdx
  _QWORD *v55; // r10
  __int64 (__fastcall ***v56)(_QWORD, __int64, _QWORD, __int64); // rcx
  unsigned int v57; // r12d
  int v58; // eax
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  struct _RTL_GENERIC_TABLE *v63; // rcx
  _QWORD *v64; // rdx
  unsigned int j; // r8d
  __int64 v66; // rcx
  int v67; // r9d
  unsigned int v69; // [rsp+20h] [rbp-40h]
  unsigned int v70; // [rsp+20h] [rbp-40h]
  unsigned int v71; // [rsp+20h] [rbp-40h]
  unsigned int v72; // [rsp+20h] [rbp-40h]
  unsigned int v73; // [rsp+20h] [rbp-40h]
  int Buffer; // [rsp+30h] [rbp-30h] BYREF
  void *lpMem[2]; // [rsp+38h] [rbp-28h]
  __int64 v76; // [rsp+48h] [rbp-18h]
  int v77; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v4 = a2;
  v10 = 0LL;
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 88) )
  {
    v12 = v8 - 17;
    if ( !v12 )
    {
      updated = CPropertySet::UpdateProperty<bool>(a1);
      v11 = updated;
      if ( updated < 0 )
      {
        v69 = 256;
        goto LABEL_82;
      }
      return 0;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 17;
      if ( !v14 )
      {
        updated = CPropertySet::UpdateProperty<D2DVector2>(a1);
        v11 = updated;
        if ( updated < 0 )
        {
          v69 = 264;
          goto LABEL_82;
        }
        return 0;
      }
      v15 = v14 - 17;
      if ( !v15 )
      {
        updated = CPropertySet::UpdateProperty<D2DVector3>(a1);
        v11 = updated;
        if ( updated < 0 )
        {
          v69 = 268;
          goto LABEL_82;
        }
        return 0;
      }
      v16 = v15 - 17;
      if ( !v16 )
      {
        updated = CPropertySet::UpdateProperty<D2DVector4>(a1);
        v11 = updated;
        if ( updated < 0 )
        {
          v69 = 272;
          goto LABEL_82;
        }
        return 0;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(a1, (unsigned int)v4, 70LL, v9);
        v11 = updated;
        if ( updated < 0 )
        {
          v69 = 276;
          goto LABEL_82;
        }
        return 0;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        updated = CPropertySet::UpdateProperty<D2DQuaternion>(a1);
        v11 = updated;
        if ( updated < 0 )
        {
          v69 = 280;
          goto LABEL_82;
        }
        return 0;
      }
      v19 = v18 - 33;
      if ( v19 )
      {
        if ( v19 != 161 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
        updated = CPropertySet::UpdateProperty<D2DMatrix>(a1, (unsigned int)v4, 265);
        v11 = updated;
        if ( updated < 0 )
        {
          v69 = 288;
LABEL_82:
          v46 = updated;
          goto LABEL_83;
        }
        return 0;
      }
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
        goto LABEL_39;
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v22) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( *(_DWORD *)(*v23 + 8 * v4) == 104 )
      {
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v22) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v24) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v27 = *(_QWORD *)(v26 + 32);
        v28 = *(_DWORD *)(v25 + 8 * v4 + 4) & 0x1FFFFFFF;
        *(_OWORD *)(v28 + v27) = *(_OWORD *)a4;
        *(_QWORD *)(v28 + v27 + 16) = *(_QWORD *)(a4 + 16);
        if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v26) )
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v29) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v33 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))*((_QWORD *)a1 + 10);
          v34 = *(_DWORD *)(*v32 + 8 * v4);
          if ( v33 && (v35 = (**v33)(v33, v31, v34, a4), v30 = v35, v11 = v35, v35 < 0) )
          {
            v70 = 455;
          }
          else
          {
            v37 = *((_QWORD *)a1 + 2);
            v38 = *(_QWORD *)(v37 + 496);
            if ( v38 == *(_QWORD *)(v37 + 504) )
            {
              v39 = v38 + 1;
              v38 = 1LL;
              if ( v39 )
                v38 = v39;
            }
            v40 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)a1 + 5);
            if ( v40 )
            {
              v76 = 0LL;
              v77 = 0;
              *(_OWORD *)lpMem = 0LL;
              Buffer = v4;
              v10 = RtlLookupElementGenericTable(v40, &Buffer);
              if ( lpMem[0] != lpMem[1] )
              {
                operator delete(lpMem[0]);
                lpMem[0] = 0LL;
              }
            }
            v41 = (_QWORD *)(((unsigned __int64)v10 + 8) & -(__int64)(v10 != 0LL));
            if ( v41 )
            {
              for ( i = 0;
                    i < *(_DWORD *)((((unsigned __int64)v10 + 8) & -(__int64)(v10 != 0LL)) + 0x18);
                    *(_QWORD *)(*(_QWORD *)(*v41 + 8 * v43) + 296LL) = v38 )
              {
                v43 = i++;
              }
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 448LL) |= 2u;
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 656LL) + 32LL))(
                *(_QWORD *)(*((_QWORD *)a1 + 2) + 656LL),
                0LL,
                8LL);
            }
            CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((_DWORD)a1, v4, v34, 1, a4);
            v35 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v34);
            v30 = v35;
            v11 = v35;
            if ( v35 >= 0 )
              return 0;
            v70 = 474;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, v70, 0LL);
        }
        else
        {
          v11 = -2147024809;
          v30 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024809, 0x1BBu, 0LL);
        }
        v44 = v30;
        v71 = 414;
      }
      else
      {
LABEL_39:
        v11 = -2147024809;
        v44 = -2147024809;
        v71 = 407;
      }
      v45 = v11;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v44, v71, 0LL);
      v69 = 284;
    }
    else
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
        goto LABEL_77;
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v47) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( *(_DWORD *)(*v48 + 8 * v4) == 18 )
      {
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v47) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v49) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        *(_DWORD *)((*(_DWORD *)(v50 + 8 * v4 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v51 + 32)) = *(_DWORD *)a4;
        if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v51) )
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v52) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v56 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))*((_QWORD *)a1 + 10);
          v57 = *(_DWORD *)(*v55 + 8 * v4);
          if ( v56 && (v58 = (**v56)(v56, v54, v57, a4), v53 = v58, v11 = v58, v58 < 0) )
          {
            v72 = 455;
          }
          else
          {
            v60 = *((_QWORD *)a1 + 2);
            v61 = *(_QWORD *)(v60 + 496);
            if ( v61 == *(_QWORD *)(v60 + 504) )
            {
              v62 = v61 + 1;
              v61 = 1LL;
              if ( v62 )
                v61 = v62;
            }
            v63 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)a1 + 5);
            if ( v63 )
            {
              v76 = 0LL;
              v77 = 0;
              *(_OWORD *)lpMem = 0LL;
              Buffer = v4;
              v10 = RtlLookupElementGenericTable(v63, &Buffer);
              if ( lpMem[0] != lpMem[1] )
              {
                operator delete(lpMem[0]);
                lpMem[0] = 0LL;
              }
            }
            v64 = (_QWORD *)(((unsigned __int64)v10 + 8) & -(__int64)(v10 != 0LL));
            if ( v64 )
            {
              for ( j = 0;
                    j < *(_DWORD *)((((unsigned __int64)v10 + 8) & -(__int64)(v10 != 0LL)) + 0x18);
                    *(_QWORD *)(*(_QWORD *)(*v64 + 8 * v66) + 296LL) = v61 )
              {
                v66 = j++;
              }
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 448LL) |= 2u;
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 656LL) + 32LL))(
                *(_QWORD *)(*((_QWORD *)a1 + 2) + 656LL),
                0LL,
                8LL);
            }
            CPropertySet::LogValueUpdate<float>((_DWORD)a1, v4, v57, 1, a4);
            v58 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v57);
            v53 = v58;
            v11 = v58;
            if ( v58 >= 0 )
              return 0;
            v72 = 474;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, v72, 0LL);
        }
        else
        {
          v11 = -2147024809;
          v53 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, -2147024809, 0x1BBu, 0LL);
        }
        v67 = v53;
        v73 = 414;
      }
      else
      {
LABEL_77:
        v11 = -2147024809;
        v67 = -2147024809;
        v73 = 407;
      }
      v45 = v11;
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v67, v73, 0LL);
      v69 = 260;
    }
    v46 = v45;
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v46, v69, 0LL);
    return v11;
  }
  v11 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xFAu, 0LL);
  return v11;
}
