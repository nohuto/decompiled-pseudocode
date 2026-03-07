__int64 __fastcall MmMapViewInSystemCache(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int v3; // eax
  unsigned __int64 v6; // rax
  ULONG_PTR BugCheckParameter4; // r8
  _DWORD *v8; // r9
  unsigned __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // rsi
  unsigned int *v12; // r13
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  _WORD *v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  _QWORD *SystemCacheReverseMap; // rdi
  __int64 *v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  signed __int32 v28[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v29; // [rsp+30h] [rbp-58h]
  __int128 v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+50h] [rbp-38h]
  unsigned __int64 v32; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v32 = 0LL;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v6 = MiSectionControlArea(a1);
  v9 = v6;
  v10 = BugCheckParameter4;
  if ( (*v8 & 0xFFF) != 0 )
    v10 = 1;
  v11 = (unsigned int)((*v8 >> 12) + v10);
  if ( !(_DWORD)v11 )
    KeBugCheckEx(0x1Au, 0x103087uLL, v6, 0LL, BugCheckParameter4);
  v12 = MiOffsetToProtos(v6, *a3, &v32);
  result = MiAddViewsForSection((ULONG_PTR)v12, v11 + v32, 5);
  if ( (int)result < 0 )
  {
    ++dword_140C69EA0;
    return result;
  }
  v14 = *(_WORD *)(v9 + 60) & 0x3FF;
  v15 = *a2;
  v16 = *(_WORD **)(qword_140C67048 + 8 * v14);
  if ( *a2 )
  {
    MiReadyReservedView(v15);
  }
  else
  {
    v17 = MiObtainSystemCacheView(*(_QWORD *)(qword_140C67048 + 8 * v14));
    v15 = v17;
    if ( !v17 )
    {
      ++dword_140C69EA0;
      MiRemoveSystemCacheReferences((ULONG_PTR)v12);
      return 3221225495LL;
    }
    *a2 = v17;
  }
  v18 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * v11;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v15);
  v23 = *a3 >> 2;
  v24 = (unsigned __int64)(*v16 & 0x3FF) << 6;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  SystemCacheReverseMap[3] = v12;
  for ( SystemCacheReverseMap[4] = v11 & 0x3F | SystemCacheReverseMap[4] & 0xC000000000000000uLL | v23 & 0x3FFFFFFFFFFF0000LL | v24;
        (unsigned __int64)v20 < v18;
        ++v20 )
  {
    if ( v21 >= v22 )
    {
      v12 = (unsigned int *)*((_QWORD *)v12 + 2);
      v21 = *((_QWORD *)v12 + 1);
      v27 = v12[11];
      SystemCacheReverseMap[3] |= 1uLL;
      v22 = v21 + 8 * v27;
    }
    v25 = (v21 << 16) | 0x400;
    if ( qword_140C657C0 )
    {
      v26 = (v21 << 16) | 0x410;
      if ( (qword_140C657C0 & v25) == 0 )
        v26 = qword_140C657C0 | (v21 << 16) | 0x400;
      v25 = v26;
    }
    *v20 = v25;
    v21 += 8LL;
  }
  _InterlockedOr(v28, 0);
  v31 = SystemCacheReverseMap[4] | 0xC000000000000000uLL;
  v29 = 0LL;
  v30 = 0LL;
  SystemCacheReverseMap[4] = v31;
  MiManageSubsectionView(v12, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
