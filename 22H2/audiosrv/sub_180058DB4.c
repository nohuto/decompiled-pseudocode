/*
 * XREFs of sub_180058DB4 @ 0x180058DB4
 * Callers:
 *     sub_180058C08 @ 0x180058C08 (sub_180058C08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180058DB4(__int64 a1, unsigned int a2, _DWORD *a3, _QWORD *a4)
{
  HRESULT v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+40h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  ppv = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  v8 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1, &v11);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 24LL))(
             v11,
             &unk_18015B078,
             23LL,
             0LL,
             &v10);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 56LL))(v10, a2, &v14);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                 v14,
                 23LL,
                 &unk_18015BB98,
                 &v13);
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _DWORD *))(*(_QWORD *)v13 + 24LL))(v13, a4, a3);
            if ( v8 >= 0 )
              v8 = 0;
          }
        }
      }
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v8;
}
