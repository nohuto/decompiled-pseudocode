/*
 * XREFs of ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x1800A1A0C
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800A1FA8 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005F10 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800064C4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_47475898@@@details@wil@@QEAA_NXZ @ 0x1800A29CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_47475898@@@details@wil@@QEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A4340 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellMRTHelper::MRTHelperBase::InitializeMRTObjects(
        ShellMRTHelper::MRTHelperBase *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // r12
  char v6; // al
  __int64 v7; // rcx
  HRESULT Instance; // edi
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  HRESULT v14; // eax
  int v15; // esi
  PWSTR v16; // rcx
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, GUID *, char *); // r14
  _QWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  HRESULT v22; // eax
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, GUID *, __int64 *); // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  const wchar_t *v43; // r8
  int v44; // ecx
  int v45; // ecx
  const wchar_t *v46; // rdx
  int v47; // eax
  unsigned int v48; // ebx
  unsigned int v49; // eax
  unsigned int v50; // r8d
  unsigned int v51; // eax
  unsigned int v52; // r8d
  int ppv; // [rsp+20h] [rbp-50h]
  PWSTR ppszPathOut; // [rsp+30h] [rbp-40h] BYREF
  __int64 v55; // [rsp+38h] [rbp-38h]
  __int64 v56; // [rsp+40h] [rbp-30h]
  __int64 v57; // [rsp+48h] [rbp-28h]
  WCHAR String2[8]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v57 = -2LL;
  v5 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return 0LL;
  if ( *((_BYTE *)this + 45) || (v6 = 1, *((_BYTE *)this + 46)) )
    v6 = 0;
  if ( v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8F,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      a4);
    __debugbreak();
  }
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Instance = CoCreateInstance(
               &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
               0LL,
               1u,
               &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
               (LPVOID *)this);
  if ( Instance < 0 )
  {
    v9 = 145LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v11 = 2;
  if ( *((_BYTE *)this + 45) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(
               *(_QWORD *)this,
               *((_QWORD *)this + 6));
    goto LABEL_13;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_47475898>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_47475898>::GetImpl'::`2'::impl) )
  {
    ppszPathOut = 0LL;
    v55 = -1LL;
    v56 = -1LL;
    v22 = PathAllocCombine(*((PCWSTR *)this + 9), L"resources.pri", 0, &ppszPathOut);
    v15 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
        (const char *)(unsigned int)v22);
      goto LABEL_28;
    }
LABEL_32:
    v15 = (*(__int64 (__fastcall **)(_QWORD, PWSTR))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, ppszPathOut);
    v16 = ppszPathOut;
    if ( v15 >= 0 )
    {
      if ( ppszPathOut )
        LocalFree(ppszPathOut);
LABEL_35:
      v17 = *(_QWORD *)this;
      v18 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(**(_QWORD **)this + 72LL);
      v19 = (_QWORD *)((char *)this + 16);
      v20 = *((_QWORD *)this + 2);
      if ( v20 )
      {
        *v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v15 = v18(v17, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 16);
      if ( v15 < 0 )
      {
        v21 = 179LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v15);
        return (unsigned int)v15;
      }
      v23 = *(_QWORD *)this;
      v24 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)this + 56LL);
      v25 = *v5;
      if ( *v5 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v15 = v24(v23, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v5);
      if ( v15 < 0 )
      {
        v21 = 180LL;
        goto LABEL_39;
      }
      if ( !*((_WORD *)this + 21) )
        goto LABEL_82;
      v26 = **((_QWORD **)this + 2);
      if ( *((_BYTE *)this + 43) )
      {
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v26 + 112))(
                     *((_QWORD *)this + 2),
                     *((unsigned __int16 *)this + 20));
        if ( Instance < 0 )
        {
          v9 = 186LL;
          goto LABEL_10;
        }
LABEL_82:
        if ( *((_BYTE *)this + 44) )
        {
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v19 + 128LL))(
                       *v19,
                       *((unsigned int *)this + 7));
          if ( Instance < 0 )
          {
            v9 = 196LL;
            goto LABEL_10;
          }
        }
        v41 = *((_DWORD *)this + 8);
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 != 1 )
            {
              v51 = wil::verify_hresult<long>(0x8000FFFF);
              wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xD4, v52, (const char *)v51, ppv);
              JUMPOUT(0x1800A1F9FLL);
            }
            v43 = L"light";
          }
          else
          {
            v43 = L"dark";
          }
          Instance = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, const wchar_t *))(*(_QWORD *)*v19 + 144LL))(
                       *v19,
                       L"Theme",
                       v43);
          if ( Instance < 0 )
          {
            v9 = 217LL;
            goto LABEL_10;
          }
        }
        v44 = *((_DWORD *)this + 9);
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            if ( v45 != 1 )
            {
              v49 = wil::verify_hresult<long>(0x8000FFFF);
              wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xEA, v50, (const char *)v49, ppv);
              __debugbreak();
            }
            v46 = L"lightunplated";
          }
          else
          {
            v46 = L"unplated";
          }
          v47 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *))(*(_QWORD *)*v19 + 136LL))(*v19, v46);
          v48 = v47;
          if ( v47 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xEF,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
              (const char *)(unsigned int)v47);
            return v48;
          }
        }
        return 0LL;
      }
      v27 = *((_DWORD *)this + 6);
      if ( v27 > 200 )
      {
        v35 = v27 - 225;
        if ( !v35 )
        {
          v11 = 6;
          goto LABEL_80;
        }
        v36 = v35 - 25;
        if ( !v36 )
        {
          v11 = 12;
          goto LABEL_80;
        }
        v37 = v36 - 50;
        if ( !v37 )
        {
          v11 = 13;
          goto LABEL_80;
        }
        v38 = v37 - 50;
        if ( !v38 || (v39 = v38 - 50) == 0 )
        {
          v11 = 14;
          goto LABEL_80;
        }
        v40 = v39 - 50;
        if ( !v40 || v40 == 50 )
        {
          v11 = 15;
          goto LABEL_80;
        }
      }
      else
      {
        if ( v27 == 200 )
        {
LABEL_62:
          v11 = 9;
          goto LABEL_80;
        }
        v28 = v27 - 100;
        if ( v28 )
        {
          v29 = v28 - 20;
          if ( v29 )
          {
            v30 = v29 - 5;
            if ( v30 )
            {
              v31 = v30 - 15;
              if ( v31 )
              {
                v32 = v31 - 10;
                if ( v32 )
                {
                  v33 = v32 - 10;
                  if ( v33 )
                  {
                    v34 = v33 - 15;
                    if ( v34 )
                    {
                      if ( v34 == 5 )
                        goto LABEL_80;
                      goto LABEL_61;
                    }
                    goto LABEL_62;
                  }
                  v11 = 5;
                }
                else
                {
                  v11 = 4;
                }
              }
              else
              {
                v11 = 1;
              }
            }
            else
            {
              v11 = 8;
            }
          }
          else
          {
            v11 = 7;
          }
LABEL_80:
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v26 + 120))(*((_QWORD *)this + 2), v11);
          if ( Instance < 0 )
          {
            v9 = 190LL;
            goto LABEL_10;
          }
          goto LABEL_82;
        }
      }
LABEL_61:
      v11 = 0;
      goto LABEL_80;
    }
LABEL_29:
    if ( v16 )
      LocalFree(v16);
    return (unsigned int)v15;
  }
  wcscpy(String2, L".pri");
  v12 = *((_QWORD *)this + 10);
  if ( v12 == -1LL )
  {
    v13 = *((_QWORD *)this + 9);
    if ( v13 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(v13 + 2 * v12) );
    }
    else
    {
      v12 = 0LL;
    }
    *((_QWORD *)this + 10) = v12;
  }
  if ( v12 <= 4 || CompareStringOrdinal((LPCWCH)(*((_QWORD *)this + 9) - 8LL + 2 * v12), 4, String2, 4, 1) != 2 )
  {
    ppszPathOut = 0LL;
    v55 = -1LL;
    v56 = -1LL;
    v14 = PathAllocCombine(*((PCWSTR *)this + 9), L"resources.pri", 0, &ppszPathOut);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
        (const char *)(unsigned int)v14);
LABEL_28:
      v16 = ppszPathOut;
      goto LABEL_29;
    }
    goto LABEL_32;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 48LL))(
             *(_QWORD *)this,
             *((_QWORD *)this + 9));
LABEL_13:
  if ( (int)result >= 0 )
    goto LABEL_35;
  return result;
}
