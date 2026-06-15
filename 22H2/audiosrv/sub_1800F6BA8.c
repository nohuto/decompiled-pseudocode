/*
 * XREFs of sub_1800F6BA8 @ 0x1800F6BA8
 * Callers:
 *     sub_1800F6E00 @ 0x1800F6E00 (sub_1800F6E00.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800EF77C @ 0x1800EF77C (sub_1800EF77C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F6BA8(__int64 *a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rbx
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  v16 = 0LL;
  sub_1800EF77C(&hstringHeader, L"Windows.Graphics.Holographic.HolographicDisplay", 0x30u, 0x2Fu);
  v13 = 0LL;
  ActivationFactory = RoGetActivationFactory(v16, &unk_18015C0E0, &v13);
  v3 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v14 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v14);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v6 = v14;
      if ( !v14 )
      {
        v3 = -2147418113;
        v7 = -2147418113;
        v5 = 42;
LABEL_20:
        sub_18004BD84((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", v7);
LABEL_22:
        sub_18000F708(&v14);
        goto LABEL_23;
      }
      v8 = a1[1];
      a1[1] = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, a1 + 1);
      v3 = v4;
      if ( v4 >= 0 )
      {
        v9 = a1[1];
        v10 = a1[2];
        a1[2] = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 96LL))(v9, a1 + 2);
        v3 = v4;
        if ( v4 >= 0 )
        {
          v16 = 0LL;
          sub_1800EF77C(&hstringHeader, L"Windows.Perception.PerceptionTimestampHelper", 0x2Du, 0x2Cu);
          v11 = *a1;
          *a1 = 0LL;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v4 = RoGetActivationFactory(v16, &unk_18015E7D0, a1);
          v3 = v4;
          if ( v4 >= 0 )
          {
            v3 = 0;
            goto LABEL_22;
          }
          v5 = 47;
        }
        else
        {
          v5 = 45;
        }
      }
      else
      {
        v5 = 44;
      }
    }
    else
    {
      v5 = 41;
    }
    v7 = v4;
    goto LABEL_20;
  }
  sub_18004BD84((int)retaddr, 38, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", ActivationFactory);
LABEL_23:
  sub_18000F708(&v13);
  return v3;
}
