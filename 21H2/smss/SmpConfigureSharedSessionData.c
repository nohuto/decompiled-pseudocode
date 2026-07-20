/*
 * XREFs of SmpConfigureSharedSessionData @ 0x14000C490
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x14000BC20 (SmpDeallocSavedRegistryEntry.c)
 *     SmpCopyListToSharedSection @ 0x14000C998 (SmpCopyListToSharedSection.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140011B67 (memcpy_0.c)
 */

NTSTATUS SmpConfigureSharedSessionData()
{
  int v0; // edi
  NTSTATUS result; // eax
  PVOID *v2; // rbx
  PVOID *v3; // rax
  struct _UNICODE_STRING *v4; // rcx
  struct _UNICODE_STRING **Buffer; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  bool v9; // zf
  char *v10; // rbx
  __int64 Length; // rax
  char *v12; // rbx
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rbx
  char *v16; // rax
  NTSTATUS v17; // eax
  _QWORD *v18; // rcx
  char *v19; // [rsp+58h] [rbp-B0h] BYREF
  char *v20; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-A0h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall *v24)(wchar_t *, int, __int64, int, int, _DWORD *); // [rsp+A8h] [rbp-60h] BYREF
  int v25; // [rsp+B0h] [rbp-58h]
  const wchar_t *v26; // [rsp+B8h] [rbp-50h]
  int *v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int v30; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall *v31)(const wchar_t *, __int64, const WCHAR *, __int64, __int64, _DWORD *); // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E8h] [rbp-20h]
  const wchar_t *v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  int v35; // [rsp+100h] [rbp-8h]
  __int64 v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall *v38)(const wchar_t *, __int64, const WCHAR *, __int64, __int64, _DWORD *); // [rsp+118h] [rbp+10h]
  int v39; // [rsp+120h] [rbp+18h]
  const wchar_t *v40; // [rsp+128h] [rbp+20h]
  int *v41; // [rsp+130h] [rbp+28h]
  int v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  int v44; // [rsp+148h] [rbp+40h]
  __int64 (__fastcall *v45)(int, int, int, int, int, __int64); // [rsp+150h] [rbp+48h]
  int v46; // [rsp+158h] [rbp+50h]
  const wchar_t *v47; // [rsp+160h] [rbp+58h]
  int *v48; // [rsp+168h] [rbp+60h]
  int v49; // [rsp+170h] [rbp+68h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  int v51; // [rsp+180h] [rbp+78h]
  __int64 v52; // [rsp+188h] [rbp+80h]
  int v53; // [rsp+190h] [rbp+88h]
  __int128 v54; // [rsp+198h] [rbp+90h]
  int v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  int v57; // [rsp+1B8h] [rbp+B0h]

  v0 = 0;
  v25 = 17;
  v28 = 0;
  v27 = &dword_1400293C8;
  v31 = SmpBuildSubSystemLists;
  v24 = SmpConfigureSubSystems;
  v32 = 16;
  v26 = L"SubSystems";
  v34 = &dword_1400293C8;
  v33 = L"Required";
  v38 = SmpBuildSubSystemLists;
  v40 = L"Optional";
  v39 = 16;
  v45 = SmpConfigureExecute;
  v41 = &dword_1400293C8;
  v47 = L"Execute";
  v48 = &dword_1400293C8;
  qword_1400293E8 = (__int64)&qword_1400293E0;
  qword_1400293E0 = (__int64)&qword_1400293E0;
  v29 = 0LL;
  v30 = 0;
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  v46 = 2;
  v49 = 0;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  v54 = 0LL;
  v55 = 0;
  v56 = 0LL;
  v57 = 0;
  qword_1400293D8 = (__int64)&qword_1400293D0;
  qword_1400293D0 = &qword_1400293D0;
  qword_1400293F8 = (__int64)&qword_1400293F0;
  qword_1400293F0 = (__int64)&qword_1400293F0;
  result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &v24);
  if ( result >= 0 )
  {
    v2 = (PVOID *)qword_1400293D0;
    while ( v2 != &qword_1400293D0 )
    {
      v3 = (PVOID *)*v2;
      v4 = (struct _UNICODE_STRING *)v2;
      v2 = v3;
      if ( v3[1] != v4 )
        goto LABEL_25;
      Buffer = (struct _UNICODE_STRING **)v4->Buffer;
      if ( *Buffer != v4 )
        goto LABEL_25;
      *Buffer = (struct _UNICODE_STRING *)v3;
      v3[1] = Buffer;
      SmpDeallocSavedRegistryEntry(v4);
    }
    if ( (__int64 *)qword_1400293F0 == &qword_1400293F0 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = qword_1400293F8;
      v18 = *(_QWORD **)(qword_1400293F8 + 8);
      if ( *(__int64 **)qword_1400293F8 != &qword_1400293F0 || *v18 != qword_1400293F8 )
LABEL_25:
        __fastfail(3u);
      qword_1400293F8 = *(_QWORD *)(qword_1400293F8 + 8);
      *v18 = &qword_1400293F0;
    }
    SmpInitExecuteCmd = v6;
    v7 = (16LL * (unsigned int)dword_1400293C8 + 105) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 )
      v8 = *(unsigned __int16 *)(v6 + 16);
    else
      v8 = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    MaximumSize.QuadPart = v7
                         + (unsigned int)dword_1400293CC
                         + v8
                         + SmpS0InitCmd.Length
                         + SmpDefaultLibPath.Length
                         + 6LL;
    ObjectAttributes.Attributes = 2;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtCreateSection(&SmpSharedSection, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
    if ( result >= 0 )
    {
      ViewSize = 0LL;
      result = NtMapViewOfSection(
                 SmpSharedSection,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &SmpMappedView,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewUnmap,
                 0,
                 4u);
      if ( result >= 0 )
      {
        v9 = SmpS0CommandOverride == 0;
        *(_DWORD *)SmpMappedView = 0;
        if ( !v9 )
          *(_DWORD *)SmpMappedView |= 1u;
        v10 = (char *)SmpMappedView + v7;
        *((_QWORD *)SmpMappedView + 1) = v10 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 8) = SmpDefaultLibPath.Length;
        memcpy_0(v10, SmpDefaultLibPath.Buffer, SmpDefaultLibPath.Length);
        Length = SmpDefaultLibPath.Length;
        *(_WORD *)&v10[SmpDefaultLibPath.Length] = 0;
        v12 = &v10[Length + 2];
        *((_QWORD *)SmpMappedView + 3) = v12 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 16) = SmpS0InitCmd.Length;
        memcpy_0(v12, SmpS0InitCmd.Buffer, SmpS0InitCmd.Length);
        v13 = SmpS0InitCmd.Length;
        *(_WORD *)&v12[SmpS0InitCmd.Length] = 0;
        v14 = &v12[v13 + 2];
        v15 = SmpInitExecuteCmd;
        *((_QWORD *)SmpMappedView + 5) = v14 - (_BYTE *)SmpMappedView;
        if ( v15 && *(_QWORD *)(v15 + 24) )
        {
          *((_WORD *)SmpMappedView + 24) = *(_WORD *)(v15 + 16);
          memcpy_0(v14, *(const void **)(v15 + 24), *(unsigned __int16 *)(v15 + 16));
          v16 = &v14[*(unsigned __int16 *)(v15 + 16)];
          v14 = v16;
        }
        else
        {
          *((_WORD *)SmpMappedView + 24) = 0;
          v16 = v14;
        }
        *(_WORD *)v14 = 0;
        v19 = v16 + 2;
        v20 = (char *)SmpMappedView + 104;
        SmpCopyListToSharedSection((unsigned int)&qword_1400293E0, 0, 1, 0, (__int64)&v20, (__int64)&v19);
        SmpCopyListToSharedSection((unsigned int)&SmpSubSystemsRequired, 1, 0, 1, (__int64)&v20, (__int64)&v19);
        SmpCopyListToSharedSection((unsigned int)&qword_1400293F0, 0, 1, 2, (__int64)&v20, (__int64)&v19);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, SmpMappedView);
        result = NtDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   SmpSharedSection,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &SmpSharedSection,
                   4u,
                   2u,
                   9u);
        if ( result >= 0 )
        {
          ViewSize = 0LL;
          SmpMappedView = 0LL;
          v17 = NtMapViewOfSection(
                  SmpSharedSection,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &SmpMappedView,
                  0LL,
                  0LL,
                  0LL,
                  &ViewSize,
                  ViewUnmap,
                  0,
                  2u);
          if ( v17 < 0 )
            return v17;
          return v0;
        }
      }
    }
  }
  return result;
}
