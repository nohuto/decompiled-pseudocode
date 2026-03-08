/*
 * XREFs of ??$move_uninitialized@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@PEAU12@@detail@@YA?A_PPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@00@Z @ 0x1801FB8F0
 * Callers:
 *     ??$swap_helper@$09@?$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@detail@@QEAA_NAEAV01@@Z @ 0x1801FBAE8 (--$swap_helper@$09@-$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_uninitialized<CCpuClipAntialiasSinkContext::SinkRenderParameters *,CCpuClipAntialiasSinkContext::SinkRenderParameters *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( a1 != a2 )
  {
    v3 = (_QWORD *)(a1 + 16);
    v4 = a1 - a3;
    do
    {
      v5 = *(_QWORD *)(v4 + a3);
      *(_QWORD *)(v4 + a3) = 0LL;
      *(_QWORD *)a3 = v5;
      *(_DWORD *)(a3 + 8) = *((_DWORD *)v3 - 2);
      *(_DWORD *)(a3 + 12) = *((_DWORD *)v3 - 1);
      v6 = *v3;
      *v3 = 0LL;
      v3 += 5;
      *(_QWORD *)(a3 + 16) = v6;
      v7 = *(v3 - 4);
      *(v3 - 4) = 0LL;
      *(_QWORD *)(a3 + 24) = v7;
      *(_BYTE *)(a3 + 32) = *((_BYTE *)v3 - 24);
      *(_BYTE *)(a3 + 33) = *((_BYTE *)v3 - 23);
      a3 += 40LL;
    }
    while ( v4 + a3 != a2 );
  }
  return a3;
}
