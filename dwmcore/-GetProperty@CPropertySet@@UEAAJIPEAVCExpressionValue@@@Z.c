__int64 __fastcall CPropertySet::GetProperty(CPropertySet *this, __int64 a2, struct CExpressionValue *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  _QWORD *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 *v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  __int128 *v35; // rax
  __int128 v36; // xmm0
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // r11
  __int128 *v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r10
  __int64 v48; // r11
  __int128 *v49; // rax
  __int128 v50; // xmm0
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // r11
  __int64 v56; // rax
  __int64 v57; // xmm1_8
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // r11
  _OWORD *v63; // rax
  __int128 v64; // xmm1
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    switch ( *(_DWORD *)(*v6 + 8LL * v5) )
    {
      case 0x11:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        result = 0LL;
        *(_BYTE *)v8 = *(_BYTE *)((*(_DWORD *)(v11 + 8 * v10 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v9 + 32));
        *(_DWORD *)(v8 + 72) = 17;
        *(_BYTE *)(v8 + 76) = 1;
        break;
      case 0x12:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        result = 0LL;
        *(_DWORD *)v13 = *(_DWORD *)((*(_DWORD *)(v16 + 8 * v15 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v14 + 32));
        *(_DWORD *)(v13 + 72) = 18;
        *(_BYTE *)(v13 + 76) = 1;
        break;
      case 0x23:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v17) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v22 = (__int64 *)(*(_QWORD *)(v19 + 32) + (*(_DWORD *)(v21 + 8 * v20 + 4) & 0x1FFFFFFF));
        *(_DWORD *)(v18 + 72) = 35;
        v23 = *v22;
        result = 0LL;
        *(_QWORD *)v18 = v23;
        *(_BYTE *)(v18 + 76) = 1;
        break;
      case 0x34:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v24) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v29 = *(_QWORD *)(v26 + 32) + (*(_DWORD *)(v28 + 8 * v27 + 4) & 0x1FFFFFFF);
        *(_DWORD *)(v25 + 72) = 52;
        *(_QWORD *)v25 = *(_QWORD *)v29;
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v29 + 8);
        result = 0LL;
        *(_BYTE *)(v25 + 76) = 1;
        break;
      case 0x45:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v30) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v35 = (__int128 *)(*(_QWORD *)(v32 + 32) + (*(_DWORD *)(v34 + 8 * v33 + 4) & 0x1FFFFFFF));
        *(_DWORD *)(v31 + 72) = 69;
        v36 = *v35;
        *(_BYTE *)(v31 + 76) = 1;
        result = 0LL;
        *(_OWORD *)v31 = v36;
        break;
      case 0x46:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v37) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v42 = (__int128 *)(*(_QWORD *)(v39 + 32) + (*(_DWORD *)(v41 + 8 * v40 + 4) & 0x1FFFFFFF));
        *(_DWORD *)(v38 + 72) = 70;
        v43 = *v42;
        *(_BYTE *)(v38 + 76) = 1;
        result = 0LL;
        *(_OWORD *)v38 = v43;
        break;
      case 0x47:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v44) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v49 = (__int128 *)(*(_QWORD *)(v46 + 32) + (*(_DWORD *)(v48 + 8 * v47 + 4) & 0x1FFFFFFF));
        *(_DWORD *)(v45 + 72) = 71;
        v50 = *v49;
        *(_BYTE *)(v45 + 76) = 1;
        result = 0LL;
        *(_OWORD *)v45 = v50;
        break;
      case 0x68:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v51) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v56 = *(_QWORD *)(v53 + 32) + (*(_DWORD *)(v55 + 8 * v54 + 4) & 0x1FFFFFFF);
        *(_DWORD *)(v52 + 72) = 104;
        *(_OWORD *)v52 = *(_OWORD *)v56;
        v57 = *(_QWORD *)(v56 + 16);
        result = 0LL;
        *(_QWORD *)(v52 + 16) = v57;
        *(_BYTE *)(v52 + 76) = 1;
        break;
      case 0x109:
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v58) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v63 = (_OWORD *)(*(_QWORD *)(v60 + 32) + (*(_DWORD *)(v62 + 8 * v61 + 4) & 0x1FFFFFFF));
        *(_DWORD *)(v59 + 72) = 265;
        *(_OWORD *)v59 = *v63;
        *(_OWORD *)(v59 + 16) = v63[1];
        *(_OWORD *)(v59 + 32) = v63[2];
        v64 = v63[3];
        *(_BYTE *)(v59 + 76) = 1;
        *(_OWORD *)(v59 + 48) = v64;
        result = 0LL;
        break;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024809, 0xB5u, 0LL);
    return 2147942487LL;
  }
  return result;
}
