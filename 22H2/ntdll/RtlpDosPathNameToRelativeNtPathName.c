/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18001AEE0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800608B4 (RtlDosPathNameToRelativeNtPathName.c)
 *     LdrAddDllDirectory @ 0x18008BCE0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180015F60 (RtlPrefixUnicodeString.c)
 *     RtlpWin32NtNameToNtPathName @ 0x180017108 (RtlpWin32NtNameToNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E870 (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        __m128i *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 **a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // rdi
  bool v10; // cc
  _WORD *v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int FullPathName_Ustr; // ebp
  _BYTE *v15; // r12
  int v16; // eax
  int v17; // eax
  const wchar_t *v18; // r15
  wchar_t v19; // si
  unsigned int v20; // r12d
  __int64 v21; // rax
  void *v22; // r12
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r8
  const void *v27; // rdx
  unsigned __int16 v28; // si
  void *v29; // r12
  int v30; // ecx
  unsigned int v31; // eax
  _BYTE *v32; // rsi
  unsigned __int64 v33; // rcx
  _DWORD *v34; // r14
  bool v35; // zf
  __int16 v37; // cx
  __int64 v38; // rax
  __int64 v39; // r13
  _WORD *v40; // rcx
  __int16 v41; // bp
  __int64 Heap; // rax
  _BYTE v43[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v44; // [rsp+34h] [rbp-2A4h]
  _BYTE *v45; // [rsp+38h] [rbp-2A0h]
  int v46; // [rsp+40h] [rbp-298h]
  __int64 v47; // [rsp+48h] [rbp-290h]
  __m128i v48; // [rsp+50h] [rbp-288h] BYREF
  int v49; // [rsp+60h] [rbp-278h] BYREF
  unsigned __int16 **v50; // [rsp+68h] [rbp-270h]
  _DWORD *v51; // [rsp+70h] [rbp-268h]
  _BYTE v52[528]; // [rsp+80h] [rbp-258h] BYREF

  v8 = a3;
  v44 = a1;
  v10 = a2->m128i_i16[0] <= 8u;
  v50 = a5;
  v51 = a7;
  if ( !v10 )
  {
    v11 = (_WORD *)a2->m128i_i64[1];
    if ( *v11 == 92 )
    {
      v37 = v11[1];
      if ( (v37 == 92 || v37 == 63) && v11[2] == 63 && v11[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a2, a3, a4, a5, a6, (__int64)a7);
      LOBYTE(a1) = v44;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  v45 = v52;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, 520LL, v52, a6, v43, &v49);
    if ( FullPathName_Ustr )
    {
      v15 = v52;
      while ( !v43[0] )
      {
        if ( FullPathName_Ustr <= v13 )
        {
          v48.m128i_i16[0] = FullPathName_Ustr;
          v48.m128i_i16[1] = v13;
          v48.m128i_i64[1] = (__int64)v15;
          v16 = RtlDetermineDosPathNameType_Ustr(&v48);
          goto LABEL_11;
        }
        if ( (v44 & 4) == 0 && ((v44 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_62;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, FullPathName_Ustr);
        v45 = (_BYTE *)Heap;
        v15 = (_BYTE *)Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, FullPathName_Ustr, Heap, a6, v43, &v49);
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_57;
  }
  v48 = *a2;
  v16 = RtlDetermineDosPathNameType_Ustr(&v48);
  LOWORD(FullPathName_Ustr) = v48.m128i_i16[0];
  v49 = v16;
LABEL_11:
  if ( v16 == 2 )
    goto LABEL_12;
  if ( v16 != 1 )
  {
    if ( v16 == 6 )
    {
      v17 = 8;
      v47 = 8LL;
      LOWORD(v46) = 8;
      goto LABEL_13;
    }
LABEL_12:
    v17 = 0;
    v47 = 0LL;
    LOWORD(v46) = 0;
LABEL_13:
    v18 = L"\b\n";
    goto LABEL_14;
  }
  v18 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
  v47 = 4LL;
  v17 = 4;
  v46 = 4;
LABEL_14:
  v19 = *v18;
  v20 = *v18 - v17 + (unsigned __int16)FullPathName_Ustr + 2;
  if ( v20 > 0xFFFE )
  {
LABEL_62:
    v32 = v45;
    v12 = -1073741562;
    goto LABEL_32;
  }
  if ( v8 )
  {
    if ( v20 <= v8[1] )
    {
LABEL_19:
      if ( v19 )
      {
        if ( *v8 + (unsigned int)v19 <= v8[1] )
        {
          v22 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1));
          memmove(v22, *((const void **)v18 + 1), v19);
          v23 = (unsigned __int16)(v19 + *v8);
          v24 = v8[1];
          *v8 = v23;
          if ( v23 + 1 < v24 )
            *((_WORD *)v22 + ((unsigned __int64)v19 >> 1)) = 0;
        }
      }
      v25 = v47;
      v26 = *v8;
      v27 = (const void *)(v47 + v48.m128i_i64[1]);
      v28 = FullPathName_Ustr - v46;
      if ( (_WORD)FullPathName_Ustr != (_WORD)v46 && (unsigned int)v26 + v28 <= v8[1] )
      {
        v29 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1));
        memmove(v29, v27, v28);
        v25 = v47;
        v30 = (unsigned __int16)(v28 + *v8);
        v31 = v8[1];
        *v8 = v30;
        if ( v30 + 1 < v31 )
          *((_WORD *)v29 + ((unsigned __int64)v28 >> 1)) = 0;
      }
      if ( v50 )
        *v50 = v8;
      v32 = v45;
      v33 = (unsigned __int64)*v8 >> 1;
      *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * v33) = 0;
      if ( a6 )
      {
        v33 = *a6;
        if ( *a6 )
          *a6 = *((_QWORD *)v8 + 1) + v33 + *v18 - v25 - (_QWORD)v32;
      }
      v34 = v51;
      if ( v51 )
      {
        v35 = v49 == 5;
        *v51 = 0;
        *((_QWORD *)v34 + 1) = 0LL;
        *((_QWORD *)v34 + 2) = 0LL;
        *((_QWORD *)v34 + 3) = 0LL;
        if ( v35 )
        {
          LOBYTE(v33) = 1;
          v38 = RtlpReferenceCurrentDirectory(v33, v27, v26);
          v39 = v38;
          if ( v38 )
          {
            if ( !RtlPrefixUnicodeString((unsigned __int16 *)(v38 + 24), (__int64)&v48, 1) )
              goto LABEL_69;
            v40 = (_WORD *)(*((_QWORD *)v8 + 1) + *(unsigned __int16 *)(v39 + 24) + *v18 - v47);
            *((_QWORD *)v34 + 1) = v40;
            v41 = FullPathName_Ustr - *(_WORD *)(v39 + 24);
            *(_WORD *)v34 = v41;
            if ( *v40 == 92 )
            {
              v41 -= 2;
              *(_WORD *)v34 = v41;
              *((_QWORD *)v34 + 1) = v40 + 1;
            }
            v35 = (v44 & 2) == 0;
            *((_WORD *)v34 + 1) = v41;
            if ( v35 )
            {
LABEL_69:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v39, 0xFFFFFFFF) == 1 )
              {
                NtClose(*(HANDLE *)(v39 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v39);
              }
            }
            else
            {
              *((_QWORD *)v34 + 3) = v39;
              *((_QWORD *)v34 + 2) = *(_QWORD *)(v39 + 8);
            }
          }
          else
          {
            RtlLeaveCriticalSection(&FastPebLock);
          }
        }
      }
      goto LABEL_32;
    }
    if ( !a4 )
    {
      v12 = -1073741562;
      goto LABEL_57;
    }
  }
  else if ( !a4 )
  {
    v12 = -1073741811;
    goto LABEL_57;
  }
  v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v20);
  *((_QWORD *)a4 + 1) = v21;
  if ( v21 )
  {
    LOWORD(FullPathName_Ustr) = v48.m128i_i16[0];
    v8 = a4;
    *a4 = 0;
    a4[1] = v20;
    v19 = *v18;
    goto LABEL_19;
  }
  v12 = -1073741801;
LABEL_57:
  v32 = v45;
LABEL_32:
  if ( v32 != v52 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v32);
  return v12;
}
