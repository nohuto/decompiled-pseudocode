__int64 __fastcall sub_140143EC0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 (__fastcall **v3)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v3 = &off_1400D41D0;
  v4 = 0;
  v1 = (__int64 *)sub_1400B5550(a1);
  P = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  sub_1400011A8(&v3, (__int64)L"Stop", 4uLL);
  sub_14006FED0(v1[54], (__int64)&v3);
  v3 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  return (*(__int64 (__fastcall **)(__int64 *))(*v1 + 72))(v1);
}
