/*
 * XREFs of ??$swap_helper@$09@?$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@detail@@QEAA_NAEAV01@@Z @ 0x1801FBAE8
 * Callers:
 *     ??$swap@$09@?$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@detail@@QEAA_NAEAV01@@Z @ 0x1801FB95C (--$swap@$09@-$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@det.c)
 * Callees:
 *     ??$move_uninitialized@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@PEAU12@@detail@@YA?A_PPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@00@Z @ 0x1801FB8F0 (--$move_uninitialized@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@PEAU12@@detail@@YA-.c)
 */

char __fastcall detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap_helper<10>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 *v6; // r11
  char result; // al

  v2 = (__int64)(a1 + 3);
  if ( (_QWORD *)*a1 == a1 + 3 )
    return 0;
  if ( (__int64 *)*a2 != a2 + 3 )
    return 0;
  v4 = a2[1];
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((v4 - *a2) >> 3) > 0xA )
    return 0;
  v5 = detail::move_uninitialized<CCpuClipAntialiasSinkContext::SinkRenderParameters *,CCpuClipAntialiasSinkContext::SinkRenderParameters *>(
         *a2,
         v4,
         v2);
  *a2 = *v6;
  a2[1] = v6[1];
  a2[2] = v6[2];
  v6[1] = v5;
  v6[2] = (__int64)(v6 + 53);
  result = 1;
  *v6 = v2;
  return result;
}
