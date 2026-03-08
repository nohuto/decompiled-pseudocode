/*
 * XREFs of ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C01BF18C
 * Callers:
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01BEC04 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01C0A20 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C03B7B18 (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 * Callees:
 *     memcmp @ 0x1C00270F0 (memcmp.c)
 */

int __fastcall CCD_SET_STRING_ID::_StringCompare(const struct _STRING *a1, const struct _STRING *a2)
{
  if ( a1->Length < a2->Length )
    return -1;
  if ( a1->Length > a2->Length )
    return 1;
  return memcmp(a1->Buffer, a2->Buffer, a2->Length);
}
