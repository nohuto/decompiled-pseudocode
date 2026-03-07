__int64 __fastcall DefSetText(unsigned __int64 a1, unsigned int *a2)
{
  __int64 *v3; // rdi
  unsigned __int64 *v4; // r12
  __int64 v5; // rsi
  ULONG v6; // edx
  unsigned int v7; // ecx
  int v8; // edx
  ULONG v9; // edx
  PVOID *v10; // r15
  char *Heap; // rsi
  int v12; // esi
  BOOL v13; // r13d
  WCHAR *v14; // rcx
  unsigned int v15; // r14d
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rbx
  void *v21; // rax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  _OWORD v23[4]; // [rsp+40h] [rbp-48h] BYREF
  ULONG BytesInUnicodeString; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+20h]

  v3 = (__int64 *)a1;
  BytesInUnicodeString = 0;
  v4 = (unsigned __int64 *)(a1 + 24);
  v25 = a1 + 24;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 || !a2 || !*((_QWORD *)a2 + 1) )
  {
    v12 = 1;
    v15 = 1;
    goto LABEL_45;
  }
  v6 = *a2;
  if ( v6 >= 0x3FFFFFFE )
  {
    v15 = 0;
    v12 = 1;
LABEL_45:
    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) = 0;
    goto LABEL_24;
  }
  v7 = v6 & 0xFFFFFFFE;
  v8 = 2 * v6;
  if ( (a2[1] & 0x80000000) == 0 )
    v8 = v7;
  v9 = v8 + 2;
  BytesInUnicodeString = v9;
  v10 = (PVOID *)(v3 + 23);
  if ( v3[23] )
  {
    v23[0] = 0LL;
    StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v3 + 23),
                (struct _LARGE_UNICODE_STRING *)v23);
    DesktopVerifyHeapLargeUnicodeString(v5, StrName);
    v9 = BytesInUnicodeString;
  }
  a1 = *(_DWORD *)(v3[5] + 188) & 0x7FFFFFFF;
  if ( (unsigned int)a1 < v9 )
  {
    if ( *v10 )
    {
      RtlFreeHeap(*(PVOID *)(v5 + 128), 0, *v10);
      v9 = BytesInUnicodeString;
    }
    if ( (*(_DWORD *)(v5 + 48) & 8) != 0 )
    {
      Heap = 0LL;
    }
    else
    {
      Heap = (char *)RtlAllocateHeap(*(PVOID *)(v5 + 128), 0, v9);
      if ( !Heap )
      {
        a1 = gpsi;
        if ( (*gpsi & 0x100) != 0 )
        {
          _InterlockedAnd(gpsi, 0xFFFFFEFF);
          UserLogError(2147483891LL);
        }
      }
    }
    if ( Heap )
    {
      a1 = v3[5] - v3[6];
      *(_QWORD *)(v3[5] + 192) = &Heap[-a1];
    }
    else
    {
      *(_QWORD *)(v3[5] + 192) = 0LL;
    }
    *v10 = Heap;
    *(_DWORD *)(v3[5] + 184) = 0;
    if ( !*v10 )
    {
      *(_DWORD *)(v3[5] + 188) &= 0x80000000;
      v15 = 0;
      v12 = 1;
      goto LABEL_24;
    }
    *(_DWORD *)(v3[5] + 188) ^= (*(_DWORD *)(v3[5] + 188) ^ BytesInUnicodeString) & 0x7FFFFFFF;
    v9 = BytesInUnicodeString;
  }
  v12 = 1;
  v13 = 1;
  if ( *a2 )
  {
    v14 = (WCHAR *)*v10;
    if ( (a2[1] & 0x80000000) != 0 )
    {
      v13 = RtlMultiByteToUnicodeN(v14, v9, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
      v9 = BytesInUnicodeString + 2;
      BytesInUnicodeString += 2;
    }
    else
    {
      memmove(v14, *((const void **)a2 + 1), *a2);
      v9 = BytesInUnicodeString;
    }
  }
  a1 = v3[5];
  if ( v13 )
  {
    *(_DWORD *)(a1 + 184) = v9 - 2;
    a1 = (unsigned __int64)*(unsigned int *)(v3[5] + 184) >> 1;
    *((_WORD *)*v10 + a1) = 0;
    v15 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 184) = 0;
    v15 = 0;
  }
LABEL_24:
  v16 = 0;
  v17 = v3[13];
  if ( v17 )
  {
    v18 = 0LL;
    a1 = *v4;
    if ( *v4 )
    {
      a1 = *(_QWORD *)(a1 + 8);
      if ( a1 )
        v18 = *(_QWORD *)(a1 + 24);
    }
    if ( v17 == v18 )
      v16 = 1;
  }
  if ( !v16 || !(unsigned int)IsWindowDesktopComposed(v3) )
    v12 = 0;
  if ( v12 )
  {
    v20 = *v3;
    v21 = (void *)ReferenceDwmApiPort(a1);
    DwmAsyncTextChange(v21, v20);
  }
  return v15;
}
