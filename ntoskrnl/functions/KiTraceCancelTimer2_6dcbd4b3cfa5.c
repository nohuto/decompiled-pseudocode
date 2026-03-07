void __fastcall KiTraceCancelTimer2(__int64 a1, __int64 a2)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v3 = &v2;
  v5 = 0;
  v2 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a2 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
  v4 = 8;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0x40020000u, 0xF6Au, 0x602u);
}
