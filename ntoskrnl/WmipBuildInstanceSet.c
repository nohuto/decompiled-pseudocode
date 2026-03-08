/*
 * XREFs of WmipBuildInstanceSet @ 0x140867C6C
 * Callers:
 *     WmipUpdateModifyGuid @ 0x1407FB638 (WmipUpdateModifyGuid.c)
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x1409DED7C (WmipUpdateAddGuid.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     RtlStringCchCopyNW @ 0x140303EF8 (RtlStringCchCopyNW.c)
 *     WmipValidateWmiRegInfoString @ 0x1408680AC (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1408680E4 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1408687EC (WmipMangleInstanceName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  int v7; // eax
  unsigned int v9; // r10d
  wchar_t *v11; // rsi
  unsigned int v12; // r9d
  ULONGLONG v13; // r11
  int v14; // eax
  unsigned __int16 *v15; // rbx
  ULONGLONG v16; // rbx
  size_t v17; // rbp
  __int64 Pool2; // rax
  _DWORD *v19; // r14
  int v20; // ecx
  NTSTATUS v21; // ebx
  __int64 v23; // r14
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  ULONGLONG v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // r14
  _QWORD *v30; // rdi
  unsigned int v31; // r15d
  size_t v32; // rcx
  unsigned __int16 *v33; // rax
  size_t v34; // rbp
  __int64 v35; // rax
  ULONGLONG pullResult; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v37; // [rsp+68h] [rbp+10h]
  unsigned int v38; // [rsp+70h] [rbp+18h]

  v38 = a3;
  v5 = (unsigned int)a1[5];
  v7 = a5;
  *(_QWORD *)(a4 + 72) = (unsigned int)v5;
  v9 = a3;
  *(_DWORD *)(a4 + 80) = v7;
  v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 16) & 0xFFFD7FF8;
  pullResult = 0LL;
  *(_DWORD *)(a4 + 16) = v12;
  if ( (a1[4] & 1) != 0 )
  {
    v12 |= 4u;
    *(_DWORD *)(a4 + 16) = v12;
  }
  if ( (a1[4] & 0x80000) != 0 )
  {
    v12 |= 0x1000u;
    *(_DWORD *)(a4 + 16) = v12;
    if ( (a1[4] & 0x1000) != 0 )
    {
      v12 |= 0x80000u;
      *(_DWORD *)(a4 + 16) = v12;
    }
  }
  if ( (a1[4] & 0x40) != 0 )
    *(_DWORD *)(a4 + 16) = v12 | 0x8000;
  v13 = (unsigned int)a1[6];
  v14 = a1[4];
  v15 = (unsigned __int16 *)(v13 + a2);
  v37 = (unsigned __int16 *)(v13 + a2);
  if ( (v14 & 4) == 0 )
  {
    if ( (v14 & 8) == 0 )
      goto LABEL_13;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v13, &pullResult) >= 0 )
    {
      v16 = pullResult;
      if ( pullResult )
      {
        v17 = (unsigned __int64)*(unsigned __int16 *)pullResult >> 1;
        Pool2 = ExAllocatePool2(256LL, 2 * v17 + 6, 1885957463LL);
        v19 = (_DWORD *)Pool2;
        if ( Pool2 )
        {
          RtlStringCchCopyNW((NTSTRSAFE_PWSTR)(Pool2 + 4), v17 + 1, (STRSAFE_PCNZWCH)(v16 + 2), v17);
          *v19 = WmipDetermineInstanceBaseIndex(a1, v19 + 1);
          v20 = *(_DWORD *)(a4 + 16) | 1;
          *(_QWORD *)(a4 + 88) = v19;
          *(_DWORD *)(a4 + 16) = v20;
          if ( (a1[4] & 0x20) != 0 )
            *(_DWORD *)(a4 + 16) = v20 | 0x20000;
          goto LABEL_13;
        }
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)-1073741811;
  }
  v23 = 1LL;
  v24 = 0LL;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      pullResult = 0LL;
      if ( (int)WmipValidateWmiRegInfoString(a2, v9, (unsigned int)v13, &pullResult) < 0 || !pullResult )
        return (unsigned int)-1073741811;
      v25 = (unsigned __int64)*(unsigned __int16 *)pullResult >> 1;
      v26 = v25;
      if ( v25 <= v24 )
        v26 = v24;
      v24 = v26;
      v23 += 2 * v25 + 22;
      v27 = v25 + 1;
      if ( !v27 )
        return (unsigned int)-1073741675;
      pullResult = v27;
      v21 = RtlULongLongMult(v27, 2uLL, &pullResult);
      if ( v21 < 0 )
        return (unsigned int)v21;
      if ( v13 + pullResult < v13 )
        return (unsigned int)-1073741675;
      v9 = v38;
      LODWORD(v11) = (_DWORD)v11 + 1;
      LODWORD(v13) = v13 + pullResult;
      if ( (unsigned int)v11 >= (unsigned int)v5 )
      {
        v15 = v37;
        break;
      }
    }
  }
  v28 = ExAllocatePool2(256LL, v23, 1885957463LL);
  v29 = (_QWORD *)v28;
  if ( !v28 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v28;
  v11 = (wchar_t *)ExAllocatePool2(256LL, 2 * v24 + 2, 1885957463LL);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v30 = &v29[v5];
  v31 = 0;
  if ( (_DWORD)v5 )
  {
    v32 = v24 + 1;
    v33 = v15;
    v37 = (unsigned __int16 *)(v24 + 1);
    do
    {
      *v29 = v30;
      v34 = (unsigned __int64)*v15 >> 1;
      pullResult = (ULONGLONG)(v33 + 1);
      RtlStringCchCopyNW(v11, v32, v33 + 1, v34);
      v21 = WmipMangleInstanceName(a1, v11, v34 + 7, v30);
      if ( v21 < 0 )
        goto LABEL_34;
      v35 = -1LL;
      do
        ++v35;
      while ( *((_WORD *)v30 + v35) );
      v32 = (size_t)v37;
      v30 = (_QWORD *)((char *)v30 + 2 * v35 + 2);
      ++v31;
      ++v29;
      v15 = (unsigned __int16 *)(pullResult + 2 * v34);
      v33 = v15;
    }
    while ( v31 < (unsigned int)v5 );
  }
LABEL_13:
  v21 = 0;
  if ( v11 )
LABEL_34:
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v21;
}
