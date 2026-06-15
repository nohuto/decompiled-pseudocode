/*
 * XREFs of sub_180114C50 @ 0x180114C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E110 @ 0x18000E110 (sub_18000E110.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_180114C50(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  int v10; // edx
  LPVOID v11; // rbx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  void *v16; // rcx
  unsigned __int16 *v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v26; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  *a5 = 1;
  if ( !a3 && (*(_BYTE *)(a1 + 80) & 1) != 0 && a4 == 1 )
  {
    ppv[0] = 0LL;
    a5 = 0LL;
    v22 = 0LL;
    pv = 0LL;
    sub_1800CB144((__int64 *)ppv);
    Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, ppv);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 112;
LABEL_14:
      sub_18004BD84(
        (int)retaddr,
        v10,
        (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
        Instance);
      CoTaskMemFree(pv);
      sub_18000F708(&v22);
      sub_18000F708((__int64 *)&a5);
      sub_18000F708((__int64 *)ppv);
      return v9;
    }
    v11 = ppv[0];
    if ( a5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a5 + 16LL))(a5);
    Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, _DWORD **))(*(_QWORD *)v11 + 40LL))(v11, a2, &a5);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 115;
      goto LABEL_14;
    }
    sub_1800CB144(&v22);
    Instance = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))a5)((__int64)a5, &unk_18015B660, &v22);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 116;
      goto LABEL_14;
    }
    Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v26);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 117;
      goto LABEL_14;
    }
    v13 = (__int64)a5;
    a5 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    sub_1800CB144(&v22);
    v14 = v26;
    if ( *(_DWORD *)(a1 + 68) != 2 && v26 != *(_DWORD *)(a1 + 68) )
      goto LABEL_28;
    v15 = (__int64)a5;
    a5 = 0LL;
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, v26);
      v14 = v26;
    }
    if ( (int)sub_18000E110(v15, v14, *(_DWORD *)(a1 + 64), 0LL, &a5) >= 0
      && (*(int (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)a5 + 40LL))(a5, &pv) >= 0 )
    {
      v16 = pv;
      v17 = (unsigned __int16 *)pv;
      v18 = a2 - (_QWORD)pv;
      do
      {
        v19 = *(unsigned __int16 *)((char *)v17 + v18);
        v20 = *v17 - v19;
        if ( v20 )
          break;
        ++v17;
      }
      while ( v19 );
      if ( !v20 )
      {
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 64);
        v21 = *(_DWORD *)(a1 + 68) - 2;
        *(_BYTE *)(a1 + 344) = 1;
        *v5 = 4 - (v21 != 0);
      }
    }
    else
    {
LABEL_28:
      v16 = pv;
    }
    CoTaskMemFree(v16);
    pv = 0LL;
    sub_18000F708(&v22);
    sub_18000F708((__int64 *)&a5);
    sub_18000F708((__int64 *)ppv);
  }
  return 0LL;
}
