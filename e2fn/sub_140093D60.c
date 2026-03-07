__int64 sub_140093D60()
{
  __int64 *v0; // rbx
  __int64 (__fastcall **v2)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v3; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  v2 = &off_1400D41D0;
  v3 = 0;
  v0 = (__int64 *)sub_1400B5550();
  P = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  sub_1400011A8(&v2, (__int64)L"Cancel", 6uLL);
  sub_14006FED0(v0[54], (__int64)&v2);
  v2 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  return (*(__int64 (__fastcall **)(__int64 *))(*v0 + 56))(v0);
}
