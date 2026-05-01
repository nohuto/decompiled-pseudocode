/*
 * XREFs of ??0bad_optional_access@std@@QEAA@XZ @ 0x1801B6A58
 * Callers:
 *     ?value@?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEGBAAEBV?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@2@XZ @ 0x180129628 (-value@-$optional@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x18012966C (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x18014DAC8 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 * Callees:
 *     <none>
 */

std::bad_optional_access *__fastcall std::bad_optional_access::bad_optional_access(std::bad_optional_access *this)
{
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_QWORD *)this = &std::bad_optional_access::`vftable';
  return this;
}
