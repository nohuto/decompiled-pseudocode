/*
 * XREFs of sub_180047458 @ 0x180047458
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_180010670 @ 0x180010670 (sub_180010670.c)
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z @ 0x1800386EC (-getZName@UnDecorator@@CA-AVDName@@_N0@Z.c)
 *     sub_1800585BC @ 0x1800585BC (sub_1800585BC.c)
 *     sub_18006871C @ 0x18006871C (sub_18006871C.c)
 *     sub_18006F0C0 @ 0x18006F0C0 (sub_18006F0C0.c)
 *     sub_18006F250 @ 0x18006F250 (sub_18006F250.c)
 *     sub_18006FB08 @ 0x18006FB08 (sub_18006FB08.c)
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800E24A0 @ 0x1800E24A0 (sub_1800E24A0.c)
 *     sub_1800E34F4 @ 0x1800E34F4 (sub_1800E34F4.c)
 *     sub_1800E3544 @ 0x1800E3544 (sub_1800E3544.c)
 *     sub_1800E75B4 @ 0x1800E75B4 (sub_1800E75B4.c)
 *     sub_1800E7930 @ 0x1800E7930 (sub_1800E7930.c)
 *     sub_1800E7E80 @ 0x1800E7E80 (sub_1800E7E80.c)
 *     sub_1800E8030 @ 0x1800E8030 (sub_1800E8030.c)
 *     sub_1800E8240 @ 0x1800E8240 (sub_1800E8240.c)
 *     sub_1800E8450 @ 0x1800E8450 (sub_1800E8450.c)
 *     sub_1800E87A0 @ 0x1800E87A0 (sub_1800E87A0.c)
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 *     sub_1800F99D0 @ 0x1800F99D0 (sub_1800F99D0.c)
 *     sub_1800FA9C8 @ 0x1800FA9C8 (sub_1800FA9C8.c)
 *     sub_1800FF620 @ 0x1800FF620 (sub_1800FF620.c)
 *     sub_180122780 @ 0x180122780 (sub_180122780.c)
 *     sub_180122B70 @ 0x180122B70 (sub_180122B70.c)
 *     sub_1801259DC @ 0x1801259DC (sub_1801259DC.c)
 *     sub_180126864 @ 0x180126864 (sub_180126864.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180047458(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
