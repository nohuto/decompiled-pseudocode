/*
 * XREFs of sub_1800BF950 @ 0x1800BF950
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18005ED10 @ 0x18005ED10 (sub_18005ED10.c)
 *     sub_180068110 @ 0x180068110 (sub_180068110.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BF3F8 @ 0x1800BF3F8 (sub_1800BF3F8.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800BF950(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *))
{
  int v4; // ebx
  __int64 v5; // rax
  signed int LastError; // eax
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  LPVOID v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  sub_1800BF3F8((__int64)a2, (_DWORD *)(a1 + 296));
  v10 = 0LL;
  v4 = sub_180068110((__int64)&v10);
  if ( v4 < 0 )
    goto LABEL_13;
  v9 = 0LL;
  v4 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), LPVOID *))(*a2)[5])(a2, &v9);
  if ( v4 >= 0 )
  {
    pv = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v10 + 32LL))(v10, v9, 0LL, &pv);
    if ( v4 >= 0 )
      *(_DWORD *)(a1 + 124) = *((unsigned __int16 *)pv + 1);
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  CoTaskMemFree(v9);
  v9 = 0LL;
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = sub_18005ED10(a1, a2);
  if ( v4 < 0 )
    goto LABEL_13;
  if ( qword_18019E640 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64))(*(_QWORD *)qword_18019E640 + 8LL))(
           qword_18019E640,
           sub_1800C08F0,
           a1);
    *(_QWORD *)(a1 + 304) = v5;
    if ( !v5 )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( v4 < 0 )
LABEL_13:
    sub_18005E8F8((__int64)"CVolumeSoftware::Initialize", 2127, v4);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v4;
}
