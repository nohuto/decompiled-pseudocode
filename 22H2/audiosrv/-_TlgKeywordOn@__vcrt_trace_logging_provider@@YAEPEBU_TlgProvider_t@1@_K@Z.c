/*
 * XREFs of ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_18002D350 @ 0x18002D350 (sub_18002D350.c)
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 *     sub_180033330 @ 0x180033330 (sub_180033330.c)
 *     sub_1800364B0 @ 0x1800364B0 (sub_1800364B0.c)
 *     sub_180036864 @ 0x180036864 (sub_180036864.c)
 *     sub_180038664 @ 0x180038664 (sub_180038664.c)
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18004B090 @ 0x18004B090 (sub_18004B090.c)
 *     sub_18004C540 @ 0x18004C540 (sub_18004C540.c)
 *     sub_18004C628 @ 0x18004C628 (sub_18004C628.c)
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 *     sub_18005AA7C @ 0x18005AA7C (sub_18005AA7C.c)
 *     sub_18005B5E8 @ 0x18005B5E8 (sub_18005B5E8.c)
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_1800638B0 @ 0x1800638B0 (sub_1800638B0.c)
 *     sub_1800B6C00 @ 0x1800B6C00 (sub_1800B6C00.c)
 *     sub_1800B7150 @ 0x1800B7150 (sub_1800B7150.c)
 *     sub_1800BBE40 @ 0x1800BBE40 (sub_1800BBE40.c)
 *     sub_1800BBF8C @ 0x1800BBF8C (sub_1800BBF8C.c)
 *     sub_1800BC1BC @ 0x1800BC1BC (sub_1800BC1BC.c)
 *     sub_1800BC404 @ 0x1800BC404 (sub_1800BC404.c)
 *     sub_1800BE130 @ 0x1800BE130 (sub_1800BE130.c)
 *     sub_1800BE690 @ 0x1800BE690 (sub_1800BE690.c)
 *     sub_1800C04D0 @ 0x1800C04D0 (sub_1800C04D0.c)
 *     sub_1800DAF14 @ 0x1800DAF14 (sub_1800DAF14.c)
 *     sub_1800F1A50 @ 0x1800F1A50 (sub_1800F1A50.c)
 *     sub_180109FC0 @ 0x180109FC0 (sub_180109FC0.c)
 *     sub_18010B6C0 @ 0x18010B6C0 (sub_18010B6C0.c)
 *     sub_18011E608 @ 0x18011E608 (sub_18011E608.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 *     sub_180121E18 @ 0x180121E18 (sub_180121E18.c)
 *     sub_180122224 @ 0x180122224 (sub_180122224.c)
 *     sub_180122288 @ 0x180122288 (sub_180122288.c)
 *     sub_180125838 @ 0x180125838 (sub_180125838.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 *     sub_180126640 @ 0x180126640 (sub_180126640.c)
 *     sub_18012DAC0 @ 0x18012DAC0 (sub_18012DAC0.c)
 *     sub_18012E018 @ 0x18012E018 (sub_18012E018.c)
 *     sub_18012F780 @ 0x18012F780 (sub_18012F780.c)
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 *     sub_18013CB88 @ 0x18013CB88 (sub_18013CB88.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall __vcrt_trace_logging_provider::_TlgKeywordOn(
        __vcrt_trace_logging_provider *this,
        unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *((_QWORD *)this + 2)) != 0 && (a2 & *((_QWORD *)this + 3)) == *((_QWORD *)this + 3) )
    return 1;
  return v2;
}
