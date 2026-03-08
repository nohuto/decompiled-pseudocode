/*
 * XREFs of rimDoRimDevChangeCallback @ 0x1C00BC28C
 * Callers:
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall rimDoRimDevChangeCallback(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // r11
  int v6; // r8d
  void (__fastcall *v7)(_DWORD *); // r10
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 824) )
  {
    v8[3] = 0;
    v8[0] = a3;
    v3 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
    v9 = *(_QWORD *)(v4 + 400);
    v10 = *(_QWORD *)(v5 + 32);
    v8[2] = v3;
    v8[1] = v6;
    v7(v8);
  }
}
