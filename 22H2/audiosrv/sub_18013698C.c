/*
 * XREFs of sub_18013698C @ 0x18013698C
 * Callers:
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180133608 @ 0x180133608 (sub_180133608.c)
 *     sub_180134E68 @ 0x180134E68 (sub_180134E68.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18013698C(__int64 *a1, char *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  HSTRING *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  __int64 v15; // rsi
  const WCHAR **v16; // r15
  const WCHAR *v17; // rdi
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  __int64 v20; // rdi
  void **v21; // rcx
  void *v22; // rcx
  void *v23; // rbx
  __int64 (__fastcall ***v25)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-51h] BYREF
  HSTRING string; // [rsp+38h] [rbp-49h] BYREF
  __int64 v27; // [rsp+40h] [rbp-41h] BYREF
  void *v28; // [rsp+48h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-31h] BYREF
  __int64 v30; // [rsp+58h] [rbp-29h] BYREF
  _BYTE *v31; // [rsp+60h] [rbp-21h]
  __int64 *v32; // [rsp+68h] [rbp-19h]
  __int64 *v33; // [rsp+70h] [rbp-11h]
  HSTRING v34; // [rsp+78h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+57h]

  v32 = a1;
  v33 = a1;
  v31 = a5;
  *a5 = 0;
  v30 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))*a1)(*a1, &unk_18015F1A8, &v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18004BD84((int)retaddr, 214, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v7);
    goto LABEL_29;
  }
  v9 = v30;
  v25 = 0LL;
  v10 = sub_180133608(&v34, L"@Name");
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, *v10, &v25);
  v8 = v11;
  if ( v11 < 0 )
  {
    sub_18004BD84((int)retaddr, 217, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v11);
LABEL_5:
    sub_18000F708((__int64 *)&v25);
    goto LABEL_29;
  }
  v27 = 0LL;
  v12 = (**v25)(v25, &unk_18015DC88, &v27);
  v8 = v12;
  if ( v12 < 0 )
  {
    sub_18004BD84((int)retaddr, 220, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v12);
LABEL_8:
    sub_18000F708(&v27);
    goto LABEL_5;
  }
  string = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 152LL))(v27, &string);
  v8 = v13;
  if ( v13 < 0 )
  {
    sub_18004BD84((int)retaddr, 223, (int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h", v13);
    if ( string )
      WindowsDeleteString(string);
    goto LABEL_8;
  }
  v14 = 0;
  v15 = 0LL;
  v16 = (const WCHAR **)(a3 + 8);
  while ( 1 )
  {
    v17 = *v16;
    StringLen = WindowsGetStringLen(string);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, v17, -1, 1) == 2 )
      break;
    ++v14;
    ++v15;
    v16 += 4;
    if ( v15 >= 6 )
      goto LABEL_26;
  }
  v28 = 0LL;
  sub_18002A504(&v28, 0LL);
  if ( (int)sub_180134E68(a2, (char **)&v28) < 0 )
  {
    v23 = v28;
  }
  else
  {
    v20 = 32LL * v14;
    *(_BYTE *)(v20 + a3) = 1;
    sub_18005FD7C(&pv, a2, 0xFFFFFFFFFFFFFFFFuLL);
    v21 = (void **)(v20 + a3 + 16);
    if ( v21 == &pv )
    {
      v22 = pv;
    }
    else
    {
      sub_18002A504(v21, pv);
      v22 = 0LL;
    }
    if ( v22 )
      CoTaskMemFree(v22);
    v23 = 0LL;
    sub_18002A504((void **)(v20 + a3 + 24), v28);
  }
  *v31 = 1;
  if ( v23 )
    CoTaskMemFree(v23);
LABEL_26:
  if ( string )
    WindowsDeleteString(string);
  sub_18000F708(&v27);
  sub_18000F708((__int64 *)&v25);
  v8 = 0;
LABEL_29:
  sub_18000F708(&v30);
  sub_18000F708(v32);
  return v8;
}
