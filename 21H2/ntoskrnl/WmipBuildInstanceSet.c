/*
 * XREFs of WmipBuildInstanceSet @ 0x140756D98
 * Callers:
 *     WmipAddDataSource @ 0x140756A68 (WmipAddDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407C4640 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x1409339E8 (WmipUpdateAddGuid.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     RtlStringCchCopyNW @ 0x1403710C0 (RtlStringCchCopyNW.c)
 *     WmipValidateWmiRegInfoString @ 0x140757200 (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140757238 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x140758428 (WmipMangleInstanceName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  unsigned int v6; // r10d
  unsigned int v9; // eax
  wchar_t *v11; // r15
  int v12; // ecx
  ULONGLONG v13; // r11
  unsigned __int16 *v14; // rbx
  NTSTATUS v15; // ebx
  ULONGLONG v17; // rsi
  size_t v18; // r14
  PVOID PoolWithTag; // rax
  _DWORD *v20; // r12
  int v21; // ecx
  SIZE_T v22; // r15
  unsigned __int64 v23; // r14
  unsigned int v24; // esi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  ULONGLONG v27; // rax
  ULONGLONG v28; // rcx
  unsigned int v29; // r10d
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rdi
  unsigned int v33; // r13d
  size_t v34; // rcx
  unsigned __int16 *v35; // rax
  size_t v36; // r14
  __int64 v37; // rax
  ULONGLONG pullResult; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v39; // [rsp+68h] [rbp+10h]
  unsigned int v40; // [rsp+70h] [rbp+18h]

  v40 = a3;
  v5 = (unsigned int)a1[5];
  v6 = a3;
  *(_DWORD *)(a4 + 80) = a5;
  v9 = *(_DWORD *)(a4 + 16) & 0xFFFD7FF8;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 16) = v9;
  *(_DWORD *)(a4 + 76) = 0;
  v11 = 0LL;
  v12 = a1[4];
  pullResult = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v9 |= 4u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
  }
  if ( (v12 & 0x80000) != 0 )
  {
    v9 |= 0x1000u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
    if ( (v12 & 0x1000) != 0 )
    {
      v9 |= 0x80000u;
      *(_DWORD *)(a4 + 16) = v9;
      v12 = a1[4];
    }
  }
  if ( (v12 & 0x40) != 0 )
  {
    *(_DWORD *)(a4 + 16) = v9 | 0x8000;
    v12 = a1[4];
  }
  v13 = (unsigned int)a1[6];
  v14 = (unsigned __int16 *)(v13 + a2);
  v39 = (unsigned __int16 *)(v13 + a2);
  if ( (v12 & 4) == 0 )
  {
    if ( (v12 & 8) == 0 )
      goto LABEL_8;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v13, &pullResult) >= 0 )
    {
      v17 = pullResult;
      if ( pullResult )
      {
        v18 = (unsigned __int64)*(unsigned __int16 *)pullResult >> 1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v18 + 6, 0x70696D57u);
        v20 = PoolWithTag;
        if ( PoolWithTag )
        {
          RtlStringCchCopyNW((NTSTRSAFE_PWSTR)PoolWithTag + 2, v18 + 1, (STRSAFE_PCNZWCH)(v17 + 2), v18);
          *v20 = WmipDetermineInstanceBaseIndex(a1, v20 + 1);
          v21 = *(_DWORD *)(a4 + 16) | 1;
          *(_QWORD *)(a4 + 88) = v20;
          *(_DWORD *)(a4 + 16) = v21;
          if ( (a1[4] & 0x20) != 0 )
            *(_DWORD *)(a4 + 16) = v21 | 0x20000;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)-1073741811;
  }
  v22 = 1LL;
  v23 = 0LL;
  v24 = 0;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      pullResult = 0LL;
      if ( (int)WmipValidateWmiRegInfoString(a2, v6, (unsigned int)v13, &pullResult) < 0 || !pullResult )
        return (unsigned int)-1073741811;
      v25 = (unsigned __int64)*(unsigned __int16 *)pullResult >> 1;
      v26 = v25;
      if ( v25 <= v23 )
        v26 = v23;
      v23 = v26;
      v22 += 2 * v25 + 22;
      v27 = -1LL;
      v28 = v25 + 1;
      if ( v28 )
        v27 = v28;
      v15 = v28 == 0 ? 0xC0000095 : 0;
      pullResult = v27;
      if ( !v28 )
        return (unsigned int)v15;
      v15 = RtlULongLongMult(v27, 2uLL, &pullResult);
      if ( v15 < 0 )
        return (unsigned int)v15;
      if ( v13 + pullResult < v13 )
        return v29;
      v6 = v40;
      ++v24;
      LODWORD(v13) = v13 + pullResult;
      if ( v24 >= (unsigned int)v5 )
      {
        v14 = v39;
        break;
      }
    }
  }
  v30 = ExAllocatePoolWithTag(PagedPool, v22, 0x70696D57u);
  v31 = v30;
  if ( !v30 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v30;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v23 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v32 = &v31[v5];
  v33 = 0;
  if ( (_DWORD)v5 )
  {
    v34 = v23 + 1;
    v35 = v14;
    v39 = (unsigned __int16 *)(v23 + 1);
    do
    {
      *v31 = v32;
      v36 = (unsigned __int64)*v14 >> 1;
      pullResult = (ULONGLONG)(v35 + 1);
      RtlStringCchCopyNW(v11, v34, v35 + 1, v36);
      v15 = WmipMangleInstanceName(a1, v11, v36 + 7, v32);
      if ( v15 < 0 )
        goto LABEL_9;
      v37 = -1LL;
      do
        ++v37;
      while ( *((_WORD *)v32 + v37) );
      v34 = (size_t)v39;
      v32 = (_QWORD *)((char *)v32 + 2 * v37 + 2);
      ++v33;
      ++v31;
      v14 = (unsigned __int16 *)(pullResult + 2 * v36);
      v35 = v14;
    }
    while ( v33 < (unsigned int)v5 );
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v15;
}
