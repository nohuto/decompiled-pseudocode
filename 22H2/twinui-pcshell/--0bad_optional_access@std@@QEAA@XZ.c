/*
 * XREFs of ??0bad_optional_access@std@@QEAA@XZ @ 0x1801B68A8
 * Callers:
 *     ?value@?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEGBAAEBV?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@2@XZ @ 0x1801294B8 (-value@-$optional@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1801294FC (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x18014D958 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 * Callees:
 *     <none>
 */

std::bad_optional_access *__fastcall std::bad_optional_access::bad_optional_access(std::bad_optional_access *this)
{
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_QWORD *)this = &std::bad_optional_access::`vftable';
  return this;
}
