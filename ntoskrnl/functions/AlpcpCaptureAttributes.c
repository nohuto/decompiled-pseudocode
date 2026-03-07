__int64 __fastcall AlpcpCaptureAttributes(void *a1, int a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rax
  int v9; // r14d
  ULONG v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  SIZE_T v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  ULONG v21; // eax
  ULONG v22; // ecx
  ULONG v23; // eax
  ULONG v24; // ecx
  int v25; // edi
  int v26; // esi
  __int64 v27; // rdx
  signed int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // rcx
  char *v32; // rdx
  char *v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  signed int v36; // r14d
  __int64 v37; // rax
  __int64 v38; // rcx
  char *v39; // rdx
  char *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax

  memset(a5, 0, 0x48uLL);
  *a5 = *(_QWORD *)(a4 + 104);
  a5[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v8 = a3;
    if ( a3 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(_DWORD *)v8;
    v10 = 8;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( v9 < 0 )
        v10 = 20;
      v21 = v10 + 16;
      if ( (v9 & 0x40000000) == 0 )
        v21 = v10;
      v22 = v21 + 20;
      if ( (v9 & 0x20000000) == 0 )
        v22 = v21;
      v23 = v22 + 16;
      if ( (v9 & 0x10000000) == 0 )
        v23 = v22;
      v24 = v23 + 24;
      if ( (v9 & 0x8000000) == 0 )
        v24 = v23;
      v17 = v24 + 8;
      if ( (v9 & 0x2000000) == 0 )
        v17 = v24;
      v10 = 4;
    }
    else
    {
      v11 = 8;
      if ( v9 < 0 )
        v11 = 32;
      v12 = v11 + 32;
      if ( (v9 & 0x40000000) == 0 )
        v12 = v11;
      v13 = v12 + 32;
      if ( (v9 & 0x20000000) == 0 )
        v13 = v12;
      v14 = v13 + 24;
      if ( (v9 & 0x10000000) == 0 )
        v14 = v13;
      v15 = v14 + 24;
      if ( (v9 & 0x8000000) == 0 )
        v15 = v14;
      v16 = v15 + 8;
      if ( (v9 & 0x4000000) == 0 )
        v16 = v15;
      v17 = v16 + 8;
      if ( (v9 & 0x2000000) == 0 )
        v17 = v16;
    }
    v18 = v17;
    v19 = a3;
    v20 = v18 - 1;
    if ( (v9 & 0xA0000000) != 0 )
    {
      if ( v20 <= 0xFFE )
      {
        if ( ((v10 - 1) & (unsigned int)a3) == 0 )
        {
          if ( a3 >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v19 = *(_BYTE *)v19;
          *(_BYTE *)(v19 + v18 - 1) = *(_BYTE *)(v19 + v18 - 1);
          goto LABEL_49;
        }
LABEL_48:
        ExRaiseDatatypeMisalignment();
      }
      ProbeForWrite((volatile void *)a3, v18, v10);
    }
    else if ( v20 > 0xFFFE )
    {
      if ( v18 )
      {
        if ( ((v10 - 1) & (unsigned int)a3) == 0 )
        {
          if ( v18 + a3 > 0x7FFFFFFF0000LL || v18 + a3 < a3 )
            MEMORY[0x7FFFFFFF0000] = 0;
          goto LABEL_49;
        }
        goto LABEL_48;
      }
    }
    else if ( ((v10 - 1) & (unsigned int)a3) != 0 )
    {
      goto LABEL_48;
    }
LABEL_49:
    v25 = *(_DWORD *)(a3 + 4);
    goto LABEL_50;
  }
  v9 = *(_DWORD *)a3;
  v25 = *(_DWORD *)(a3 + 4);
LABEL_50:
  if ( (~v9 & v25) != 0 )
    return 3221225485LL;
  v26 = 0;
  if ( a2 < 0 )
  {
    if ( v25 < 0 )
    {
      v26 = AlpcpCaptureSecurityAttribute32((__int64)a1, a3 + 8, (__int64)a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x40000000) != 0 )
    {
      v26 = AlpcpCaptureViewAttribute32(a1, a3 + (((__int64)(v9 & 0xFFFFFFFF80000000uLL) >> 63) & 0xC) + 8, a4, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x20000000) != 0 )
    {
      v35 = (((int)(v9 & 0xC0000000) >> 31) & 0xC) + 24LL;
      if ( (v9 & 0x40000000) == 0 )
        v35 = (((int)(v9 & 0xC0000000) >> 31) & 0xC) + 8LL;
      v26 = AlpcpCaptureContextAttribute32((__int64)a1, (_DWORD *)(a3 + v35), a4, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x10000000) != 0 )
    {
      v41 = (((int)(v9 & 0xE0000000) >> 31) & 0xC) + 24LL;
      if ( (v9 & 0x40000000) == 0 )
        v41 = (((int)(v9 & 0xE0000000) >> 31) & 0xC) + 8LL;
      v42 = v41 + 20;
      if ( (v9 & 0x20000000) == 0 )
        v42 = v41;
      v26 = AlpcpCaptureHandleAttribute32(v42 + a3, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x4000000) == 0 )
      goto LABEL_60;
    v36 = v9 & 0xF8000000;
    v37 = ((v36 >> 31) & 0xC) + 24LL;
    if ( (v36 & 0x40000000) == 0 )
      v37 = ((v36 >> 31) & 0xC) + 8LL;
    v38 = v37 + 20;
    if ( (v36 & 0x20000000) == 0 )
      v38 = v37;
    v39 = (char *)(v38 + 16);
    if ( (v36 & 0x10000000) == 0 )
      v39 = (char *)v38;
    v40 = v39 + 24;
    if ( (v36 & 0x8000000) == 0 )
      v40 = v39;
    v34 = AlpcpCaptureDirectAttribute32((unsigned int *)&v40[a3], v39, (__int64)a5, a2, v25);
  }
  else
  {
    if ( v25 < 0 )
    {
      v26 = AlpcpCaptureSecurityAttribute(a1, a3 + 8, (__int64)a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x40000000) != 0 )
    {
      v26 = AlpcpCaptureViewAttribute(
              (__int64)a1,
              (__int128 *)(a3 + (((__int64)(v9 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8),
              a4,
              (__int64)a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x20000000) != 0 )
    {
      v27 = (((int)(v9 & 0xC0000000) >> 31) & 0x18) + 40LL;
      if ( (v9 & 0x40000000) == 0 )
        v27 = (((int)(v9 & 0xC0000000) >> 31) & 0x18) + 8LL;
      v26 = AlpcpCaptureContextAttribute((__int64)a1, a3 + v27, a4, a5);
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x10000000) != 0 )
    {
      v26 = AlpcpCaptureHandleAttribute();
      if ( v26 < 0 )
        goto LABEL_62;
    }
    if ( (v25 & 0x4000000) == 0 )
      goto LABEL_60;
    v29 = v9 & 0xF8000000;
    v30 = ((v29 >> 31) & 0x18) + 40LL;
    if ( (v29 & 0x40000000) == 0 )
      v30 = ((v29 >> 31) & 0x18) + 8LL;
    v31 = v30 + 32;
    if ( (v29 & 0x20000000) == 0 )
      v31 = v30;
    v32 = (char *)(v31 + 24);
    if ( (v29 & 0x10000000) == 0 )
      v32 = (char *)v31;
    v33 = v32 + 24;
    if ( (v29 & 0x8000000) == 0 )
      v33 = v32;
    v34 = AlpcpCaptureDirectAttribute((unsigned __int64 *)&v33[a3], v32, (__int64)a5, a2, v25);
  }
  v26 = v34;
  if ( v34 >= 0 )
  {
LABEL_60:
    if ( (v25 & 0x2000000) != 0 )
      v26 = AlpcpCaptureWorkOnBehalfAttribute((__int64)a5);
  }
LABEL_62:
  if ( v26 < 0 )
    AlpcpReleaseAttributes(a5);
  return (unsigned int)v26;
}
