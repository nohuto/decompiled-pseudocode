/*
 * XREFs of ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C00162C8
 * Callers:
 *     ??_G?$AutoBuffer@G@DMM@@UEAAPEAXI@Z @ 0x1C00679F0 (--_G-$AutoBuffer@G@DMM@@UEAAPEAXI@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C01B9834 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 * Callees:
 *     <none>
 */

void **__fastcall DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(_QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v2 = (void *)a1[4];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  a1[3] = &SetElement::`vftable';
  result = &SetElement::`vftable';
  *a1 = &SetElement::`vftable';
  return result;
}
