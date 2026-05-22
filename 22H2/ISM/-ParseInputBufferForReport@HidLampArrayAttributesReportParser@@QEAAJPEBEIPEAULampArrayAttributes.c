/*
 * XREFs of ?ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800A9E54
 * Callers:
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800A7DDC (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z @ 0x1800ACB5C (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z.c)
 */

__int64 __fastcall HidLampArrayAttributesReportParser::ParseInputBufferForReport(
        HidLampArrayAttributesReportParser *this,
        const unsigned __int8 *a2,
        unsigned int a3,
        struct LampArrayAttributesDeviceReport *a4)
{
  unsigned __int64 v4; // rbp
  int v8; // r14d
  __int64 v9; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v8 = HidChannelValueInfo::ParseValue((HidLampArrayAttributesReportParser *)((char *)this + 24), a3, a2, (int *)a4);
  if ( v8 < 0 )
  {
    v9 = 127LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = HidChannelValueInfo::ParseValue((HidLampArrayAttributesReportParser *)((char *)this + 96), v4, a2, (int *)a4 + 1);
  if ( v8 < 0 )
  {
    v9 = 128LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampArrayAttributesReportParser *)((char *)this + 168),
         v4,
         a2,
         (int *)a4 + 2);
  if ( v8 < 0 )
  {
    v9 = 129LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampArrayAttributesReportParser *)((char *)this + 240),
         v4,
         a2,
         (int *)a4 + 3);
  if ( v8 < 0 )
  {
    v9 = 130LL;
    goto LABEL_3;
  }
  v8 = HidChannelValueInfo::ParseValue(
         (HidLampArrayAttributesReportParser *)((char *)this + 312),
         v4,
         a2,
         (int *)a4 + 4);
  if ( v8 < 0 )
  {
    v9 = 131LL;
    goto LABEL_3;
  }
  v11 = HidChannelValueInfo::ParseValue(
          (HidLampArrayAttributesReportParser *)((char *)this + 384),
          v4,
          a2,
          (int *)a4 + 5);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x84,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
