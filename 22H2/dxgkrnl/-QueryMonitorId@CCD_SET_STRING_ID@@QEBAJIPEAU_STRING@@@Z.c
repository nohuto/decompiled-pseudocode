/*
 * XREFs of ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C017D58C
 * Callers:
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C017BA90 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C01812BC (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C0184B48 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C03BC3D8 (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C03BC678 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 * Callees:
 *     ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C017DC34 (-_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryMonitorId(CCD_SET_STRING_ID *this, unsigned int a2, struct _STRING *a3)
{
  __int64 v4; // rdi
  USHORT DescriptorLength; // ax

  v4 = a2;
  if ( a2 >= *((unsigned __int16 *)this + 16) )
    WdLogSingleEntry0(1LL);
  if ( (unsigned int)v4 >= *((unsigned __int16 *)this + 16) )
    return 3221225485LL;
  a3->Buffer = (PCHAR)(*((_QWORD *)this + 2) + *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8 * v4));
  DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(this, v4);
  a3->MaximumLength = DescriptorLength;
  a3->Length = DescriptorLength;
  return 0LL;
}
