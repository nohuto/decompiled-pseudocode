/*
 * XREFs of sub_180114650 @ 0x180114650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_180114650(__int64 a1, const wchar_t *a2, int a3, int a4, _DWORD *ppv)
{
  _DWORD *v5; // rdi
  __int64 v7; // r14
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  int v10; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-20h]
  PROPVARIANT v20[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h]

  v5 = ppv;
  *ppv = 1;
  if ( !a3 )
  {
    if ( a4 == 1 || wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
      return 0LL;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v7 = a1 + 84;
    if ( wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
    {
      ppv = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      *(_OWORD *)v20 = 0LL;
      v21 = 0LL;
      *(_OWORD *)pvar = 0LL;
      v19 = 0LL;
      sub_1800CB144((__int64 *)&ppv);
      Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, (LPVOID *)&ppv);
      v9 = Instance;
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v7, &v17);
        v9 = Instance;
        if ( Instance >= 0 )
        {
          Instance = (*(__int64 (__fastcall **)(_DWORD *, const wchar_t *, __int64 *))(*(_QWORD *)ppv + 40LL))(
                       ppv,
                       a2,
                       &v16);
          v9 = Instance;
          if ( Instance >= 0 )
          {
            Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, 0LL, &v15);
            v9 = Instance;
            if ( Instance >= 0 )
            {
              Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v14);
              v9 = Instance;
              if ( Instance >= 0 )
              {
                Instance = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                             v15,
                             &xmmword_18016D4D8,
                             v20);
                v9 = Instance;
                if ( Instance >= 0 )
                {
                  Instance = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
                               v14,
                               &xmmword_18016D4D8,
                               pvar);
                  v9 = Instance;
                  if ( Instance >= 0 )
                  {
                    if ( LOWORD(v20[0]) == 72 && LOWORD(pvar[0]) == 72 )
                    {
                      v12 = *(_QWORD *)v20[1];
                      if ( !*(_QWORD *)v20[1] )
                        v12 = *((_QWORD *)v20[1] + 1) + 1LL;
                      if ( v12 )
                      {
                        v13 = *(_QWORD *)v20[1] - *(_QWORD *)pvar[1];
                        if ( *(_QWORD *)v20[1] == *(_QWORD *)pvar[1] )
                          v13 = *((_QWORD *)v20[1] + 1) - *((_QWORD *)pvar[1] + 1);
                        if ( !v13 )
                          *v5 = 2;
                      }
                    }
                    PropVariantClear(pvar);
                    PropVariantClear(v20);
                    sub_18000F708(&v14);
                    sub_18000F708(&v15);
                    sub_18000F708(&v16);
                    sub_18000F708(&v17);
                    sub_18000F708((__int64 *)&ppv);
                    return 0LL;
                  }
                  v10 = 93;
                }
                else
                {
                  v10 = 92;
                }
              }
              else
              {
                v10 = 91;
              }
            }
            else
            {
              v10 = 90;
            }
          }
          else
          {
            v10 = 89;
          }
        }
        else
        {
          v10 = 88;
        }
      }
      else
      {
        v10 = 84;
      }
      sub_18004BD84(
        (int)retaddr,
        v10,
        (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
        Instance);
      PropVariantClear(pvar);
      PropVariantClear(v20);
      sub_18000F708(&v14);
      sub_18000F708(&v15);
      sub_18000F708(&v16);
      sub_18000F708(&v17);
      sub_18000F708((__int64 *)&ppv);
      return v9;
    }
LABEL_7:
    *v5 = 2;
  }
  return 0LL;
}
