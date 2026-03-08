/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x1407AD8A0
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x140696AE0 (ObQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14076A930 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpFilterSacl @ 0x1407AA4DC (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  PULONG v4; // r10
  _DWORD *v5; // r8
  unsigned int v7; // esi
  unsigned int v8; // r13d
  unsigned int v9; // ecx
  unsigned int *v10; // rax
  __int16 v11; // cx
  __int64 v12; // rdx
  unsigned __int8 *v13; // r15
  __int64 v14; // rdx
  unsigned __int8 *v15; // r14
  __int64 v16; // rdx
  unsigned __int16 *v17; // rdi
  __int64 *v18; // r11
  unsigned __int64 v19; // rdx
  unsigned int v20; // ebx
  ULONG v21; // r9d
  ULONG v22; // ecx
  ULONG v23; // eax
  int v24; // eax
  unsigned int v25; // r9d
  __int16 v26; // cx
  char *v27; // rbx
  int v28; // esi
  __int64 v29; // rcx
  NTSTATUS result; // eax
  unsigned int v31; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  unsigned __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 *v34; // [rsp+38h] [rbp-80h]
  char *v35; // [rsp+40h] [rbp-78h]
  ULONG v36; // [rsp+48h] [rbp-70h]
  __int128 v37; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v38; // [rsp+60h] [rbp-58h]
  __int64 *v39; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v40; // [rsp+70h] [rbp-48h]

  v4 = Length;
  v5 = SecurityDescriptor;
  v7 = 0;
  LODWORD(Size) = 0;
  v8 = 0;
  v31 = 0;
  v9 = *v4;
  v36 = *v4;
  v10 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( !*ObjectsSecurityDescriptor )
  {
    *v4 = 20;
    if ( v9 < 0x14 )
      return -1073741789;
    result = 0;
    *(_OWORD *)SecurityDescriptor = 0LL;
    *((_DWORD *)SecurityDescriptor + 4) = 0;
    *(_BYTE *)SecurityDescriptor = 1;
    *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
    return result;
  }
  v37 = *(_OWORD *)v10;
  LODWORD(v38) = v10[4];
  v11 = *((_WORD *)v10 + 1);
  if ( v11 >= 0 )
  {
    v13 = (unsigned __int8 *)*((_QWORD *)v10 + 1);
  }
  else
  {
    v12 = v10[1];
    if ( (_DWORD)v12 )
      v13 = (unsigned __int8 *)v10 + v12;
    else
      v13 = 0LL;
  }
  *((_QWORD *)&v37 + 1) = v13;
  if ( v11 >= 0 )
  {
    v15 = (unsigned __int8 *)*((_QWORD *)v10 + 2);
  }
  else
  {
    v14 = v10[2];
    if ( (_DWORD)v14 )
      v15 = (unsigned __int8 *)v10 + v14;
    else
      v15 = 0LL;
  }
  v38 = v15;
  if ( (v11 & 4) != 0 )
  {
    if ( v11 >= 0 )
    {
      v17 = (unsigned __int16 *)*((_QWORD *)v10 + 4);
    }
    else
    {
      v16 = v10[4];
      if ( (_DWORD)v16 )
        v17 = (unsigned __int16 *)((char *)v10 + v16);
      else
        v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v40 = v17;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
    {
      v18 = (__int64 *)*((_QWORD *)v10 + 3);
    }
    else
    {
      v29 = v10[3];
      if ( !(_DWORD)v29 )
      {
        v18 = 0LL;
        v34 = 0LL;
        goto LABEL_14;
      }
      v18 = (__int64 *)((char *)v10 + v29);
    }
    v34 = v18;
  }
  else
  {
    v18 = 0LL;
    v34 = 0LL;
  }
LABEL_14:
  v39 = v18;
  v19 = (unsigned __int64)v37 >> 16;
  LOWORD(v19) = WORD1(v37) & 0x7FFF;
  v33 = v19;
  WORD1(v37) &= ~0x8000u;
  v20 = 20;
  v21 = *SecurityInformation;
  v22 = *SecurityInformation & 0x80;
  v23 = *SecurityInformation & 0x100;
  if ( (*SecurityInformation & 0x10000) != 0 )
  {
    v21 |= 0x1FFu;
    *SecurityInformation = v21;
    if ( !v22 )
    {
      v21 &= ~0x80u;
      *SecurityInformation = v21;
    }
    if ( !v23 )
    {
      v21 &= ~0x100u;
      *SecurityInformation = v21;
    }
  }
  if ( (v21 & 1) != 0 && v13 )
  {
    v24 = v13[1];
    v7 = 4 * v24 + 8;
    v20 = ((4 * v24 + 11) & 0xFFFFFFFC) + 20;
  }
  if ( (v21 & 2) != 0 && v15 )
  {
    LODWORD(Size) = 4 * v15[1] + 8;
    v20 += (Size + 3) & 0xFFFFFFFC;
  }
  if ( (v21 & 4) != 0 && (BYTE2(v37) & 4) != 0 && v17 )
  {
    v8 = (v17[1] + 3) & 0xFFFFFFFC;
    v20 += v8;
  }
  v25 = v21 & 0x1F8;
  if ( v25 && (BYTE2(v37) & 0x10) != 0 && v18 )
  {
    RtlpFilterSacl(v18, 0LL, &v31, v25);
    v20 += v31;
    LOWORD(v19) = v33;
    v5 = SecurityDescriptor;
    v4 = Length;
  }
  *v4 = v20;
  if ( v20 > v36 )
    return -1073741789;
  *(_OWORD *)v5 = 0LL;
  v5[4] = 0;
  *(_BYTE *)v5 = 1;
  v26 = *((_WORD *)v5 + 1) | 0x8000;
  *((_WORD *)v5 + 1) = v26;
  v27 = (char *)(((unsigned __int64)v5 + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  v35 = v27;
  if ( (*SecurityInformation & 1) != 0 && v13 )
  {
    memmove(v27, v13, v7);
    v5 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
    LOWORD(v19) = v33;
    v26 = *((_WORD *)SecurityDescriptor + 1) | v33 & 1;
    *((_WORD *)SecurityDescriptor + 1) = v26;
    v27 += (v7 + 3) & 0xFFFFFFFC;
    v35 = v27;
  }
  if ( (*SecurityInformation & 2) != 0 && v15 )
  {
    v28 = Size;
    memmove(v27, v15, (unsigned int)Size);
    v5 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
    LOWORD(v19) = v33;
    v26 = *((_WORD *)SecurityDescriptor + 1) | v33 & 2;
    *((_WORD *)SecurityDescriptor + 1) = v26;
    v27 += (v28 + 3) & 0xFFFFFFFC;
    v35 = v27;
  }
  if ( (*SecurityInformation & 4) != 0 )
  {
    *((_WORD *)v5 + 1) = v26 | v19 & 0x140C;
    if ( (BYTE2(v37) & 4) != 0 )
    {
      if ( v17 )
      {
        memmove(v27, v17, v17[1]);
        v5 = SecurityDescriptor;
        *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
        v27 += v8;
        v35 = v27;
      }
    }
  }
  if ( (*SecurityInformation & 0x1F8) != 0 )
  {
    *((_WORD *)v5 + 1) |= v33 & 0x2830;
    if ( (BYTE2(v37) & 0x10) != 0 )
    {
      if ( v34 )
      {
        RtlpFilterSacl(v34, (__int64)v27, &v31, *SecurityInformation & 0x1F8);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v27 - (_DWORD)SecurityDescriptor;
        v35 = &v27[v31];
      }
    }
  }
  return 0;
}
