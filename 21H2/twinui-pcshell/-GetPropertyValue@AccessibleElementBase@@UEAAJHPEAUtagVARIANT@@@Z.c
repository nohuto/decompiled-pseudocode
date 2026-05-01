/*
 * XREFs of ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180423810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180423E44 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804245C8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::GetPropertyValue(AccessibleElementBase *this, int a2, struct tagVARIANT *a3)
{
  __int16 v3; // si
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  HRESULT inited; // ebx
  void *v13; // rbx
  const unsigned __int16 *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  SHORT v17; // ax
  char v18; // al
  int v19; // ebx
  bool v20; // cf
  void *v21; // rbx
  const unsigned __int16 *v22; // rcx
  LONG v24; // eax
  VARTYPE v25; // cx
  __int64 v26; // rdx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  void *v33; // [rsp+20h] [rbp-60h] BYREF
  __int64 v34; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int16 *v35[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v36; // [rsp+40h] [rbp-40h]
  DOUBLE prgn[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v38; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  HIBYTE(v3) = 0;
  a3->vt = 0;
  if ( a2 > 30016 )
  {
    v27 = a2 - 30017;
    if ( v27 )
    {
      v28 = v27 - 14;
      if ( v28 )
      {
        v29 = v28 - 3;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                if ( v32 != 7 )
                  return 0LL;
                LOBYTE(v3) = *((_DWORD *)this + 31) != 50032;
                a3->iVal = v3 - 1;
                goto LABEL_57;
              }
              v18 = *((_DWORD *)this + 30) & 0x20;
            }
            else
            {
              v18 = *((_DWORD *)this + 30) & 0x10;
            }
          }
          else
          {
            v18 = *((_DWORD *)this + 30) & 0x40;
          }
        }
        else
        {
          v18 = *((_DWORD *)this + 30) & 0x80;
        }
      }
      else
      {
        v18 = *((_DWORD *)this + 30) & 1;
      }
    }
    else
    {
      v18 = *((_DWORD *)this + 30) & 4;
    }
    goto LABEL_55;
  }
  if ( a2 == 30016 )
  {
    v18 = *((_DWORD *)this + 30) & 8;
    goto LABEL_55;
  }
  v6 = a2 - 30001;
  if ( !v6 )
  {
    inited = (*(__int64 (__fastcall **)(char *, unsigned __int16 **))(*((_QWORD *)this + 1) + 40LL))(
               (char *)this + 8,
               v35);
    if ( inited >= 0 )
    {
      *(_OWORD *)prgn = *(_OWORD *)v35;
      v38 = v36;
      inited = InitVariantFromDoubleArray(prgn, 4u, a3);
      if ( inited >= 0 )
        return (unsigned int)inited;
      v26 = 87LL;
    }
    else
    {
      v26 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v24 = *((_DWORD *)this + 31);
    v25 = 3;
    a3->lVal = v24;
LABEL_58:
    a3->vt = v25;
    return 0LL;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    inited = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v33);
    if ( inited >= 0 )
    {
      v21 = v33;
      v35[0] = 0LL;
      v35[1] = 0LL;
      *(_QWORD *)&v36 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
      v35[1] = (unsigned __int16 *)-1LL;
      *(_QWORD *)&v36 = -1LL;
      (*(void (__fastcall **)(void *, unsigned __int16 **))(*(_QWORD *)v21 + 360LL))(v21, v35);
      v22 = &szAgent;
      if ( v35[0] )
        v22 = v35[0];
      v15 = InitVariantFromString(v22, a3);
      inited = v15;
      if ( v15 >= 0 )
        goto LABEL_31;
      v16 = 64LL;
      goto LABEL_30;
    }
    goto LABEL_32;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    inited = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v33);
    if ( inited >= 0 )
    {
      v19 = 0;
      (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v33 + 280LL))(v33, &v34);
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v33 + 304LL))(v33)
        && (!v34 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 168LL))(v34)) )
      {
        v19 = 1;
      }
      v20 = v19 != 0;
      a3->vt = 11;
      inited = 0;
      a3->iVal = -v20;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    }
    goto LABEL_32;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v18 = *((_DWORD *)this + 30) & 2;
LABEL_55:
    v17 = -(v18 != 0);
    goto LABEL_56;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v17 = -1;
LABEL_56:
    a3->iVal = v17;
LABEL_57:
    v25 = 11;
    goto LABEL_58;
  }
  if ( v11 != 1 )
    return 0LL;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  inited = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v33);
  if ( inited < 0 )
  {
LABEL_32:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    return (unsigned int)inited;
  }
  v13 = v33;
  v35[0] = 0LL;
  v35[1] = 0LL;
  *(_QWORD *)&v36 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
  v35[1] = (unsigned __int16 *)-1LL;
  *(_QWORD *)&v36 = -1LL;
  if ( (*(int (__fastcall **)(void *, unsigned __int16 **))(*(_QWORD *)v13 + 368LL))(v13, v35) >= 0 )
  {
    v14 = &szAgent;
    if ( v35[0] )
      v14 = v35[0];
    v15 = InitVariantFromString(v14, a3);
    inited = v15;
    if ( v15 >= 0 )
      goto LABEL_31;
    v16 = 76LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v15);
LABEL_31:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
    goto LABEL_32;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
  return 0LL;
}
