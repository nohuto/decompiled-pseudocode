__int64 __fastcall DynArrayImpl<0>::Grow(unsigned __int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  unsigned __int64 v6; // rsi
  unsigned int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // r14d
  int v13; // edx
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  void *v16; // rbp
  SIZE_T v17; // rbx
  HANDLE ProcessHeap; // rax
  void *v19; // rbp
  int v20; // eax
  HANDLE v22; // rax
  char *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned int v26; // [rsp+20h] [rbp-18h]

  v5 = *(_DWORD *)(a1 + 24);
  v6 = a1;
  v8 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v26 = 216;
    goto LABEL_38;
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  if ( v8 > v9 )
  {
    a1 = a2 * (unsigned __int64)v8;
    if ( a1 > 0xFFFFFFFF )
    {
      v26 = 225;
    }
    else
    {
      v11 = v8;
      if ( !a4 )
      {
        v12 = v8 - v9;
        v13 = 16;
        if ( v9 <= 0x10 || (v14 = 8092, v13 = v9, v9 < 0x1F9C) )
          v14 = v13;
        if ( v12 <= v14 )
          v12 = v14;
        v11 = v9 + v12;
        if ( v11 < v9 || (v15 = a2 * (unsigned __int64)v11, v15 > 0xFFFFFFFF) )
          v11 = v8;
        else
          a1 = (unsigned int)v15;
      }
      if ( v11 <= 0xFFFFFFFF / a2 )
      {
        v16 = *(void **)v6;
        v17 = (unsigned int)a1;
        if ( *(_QWORD *)v6 == *(_QWORD *)(v6 + 8) )
        {
          if ( (_DWORD)a1 )
          {
            ProcessHeap = GetProcessHeap();
            v19 = HeapAlloc(ProcessHeap, 0, (unsigned int)v17);
            if ( v19 )
            {
              v20 = *(_DWORD *)(v6 + 24);
              v10 = 0;
              if ( v20 )
                memcpy_0(v19, *(const void **)v6, a2 * v20);
LABEL_19:
              *(_DWORD *)(v6 + 20) = v11;
              *(_QWORD *)v6 = v19;
              return v10;
            }
            v10 = -2147024882;
          }
          else
          {
            v10 = -2147024809;
          }
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v10, 0x102u, 0LL);
          return v10;
        }
        if ( v16 )
        {
          v22 = GetProcessHeap();
          v23 = (char *)HeapReAlloc(v22, 0, v16, v17);
        }
        else
        {
          v23 = (char *)DefaultHeap::Alloc((unsigned int)a1);
        }
        v19 = v23;
        if ( !v23 )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x114u, 0LL);
          return v10;
        }
        v10 = 0;
        if ( v23 != *(char **)v6 )
        {
          if ( a5 )
          {
            v25 = *a5;
            if ( *a5 >= *(_QWORD *)v6 && v25 < *(_QWORD *)v6 + (unsigned __int64)(*(_DWORD *)(v6 + 20) * a2) )
              *a5 = (unsigned __int64)&v23[v25 - *(_QWORD *)v6];
          }
        }
        goto LABEL_19;
      }
      v26 = 251;
    }
LABEL_38:
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, v26, 0LL);
  }
  return v10;
}
