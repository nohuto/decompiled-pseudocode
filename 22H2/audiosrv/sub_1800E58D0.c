/*
 * XREFs of sub_1800E58D0 @ 0x1800E58D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800274A0 @ 0x1800274A0 (sub_1800274A0.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800524EC @ 0x1800524EC (sub_1800524EC.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB3A8 @ 0x1800BB3A8 (sub_1800BB3A8.c)
 *     sub_1800E24A0 @ 0x1800E24A0 (sub_1800E24A0.c)
 *     sub_1800E29AC @ 0x1800E29AC (sub_1800E29AC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800E58D0(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  void *v15; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+A0h] [rbp+18h] BYREF
  const char *v20; // [rsp+A8h] [rbp+20h] BYREF

  try
  {
    result = *(_QWORD *)(a1 + 64);
    if ( result && !*(_DWORD *)(result + 8) )
    {
      sub_1800E24A0((__int64 *)&v19, a1 - 8);
      v18 = 0LL;
      v20 = (const char *)&v18;
      v6 = sub_1800524EC((__int64 **)&v20);
      if ( (int)sub_1800274A0(v19, v6) >= 0 )
      {
        v20 = (const char *)v16;
        v7 = v18;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        v16[0] = off_18014A478;
        v16[1] = v7;
        v16[7] = v16;
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 120LL))(qword_18019E678);
        v9 = sub_1800670EC(v8, (__int64)v16);
        v10 = retaddr;
        if ( v9 < 0 )
          sub_1800BB3A8(retaddr, 1329, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v9);
        v11 = (_DWORD *)sub_180008448(v10, sub_1800B6240)[1];
        if ( *v11 > 4u )
        {
          v20 = "OnEndpointAvailableForUse";
          v15 = a2;
          sub_1800E29AC((__int64)v11, byte_180167A0F, v12, v13, &v15, &v20);
        }
      }
      v14 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      result = sub_1800461B8((__int64 *)&v19);
    }
  }
  catch ( ... )
  {
    return sub_1800C8F54(retaddr, 1339, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", a4);
  }
  return result;
}
