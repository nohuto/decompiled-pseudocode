char __fastcall detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap<10>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v3 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 + 3 && (_QWORD *)*a2 != a2 + 3 )
  {
    *a1 = *a2;
    v5 = a2[1];
    *a2 = v3;
    v6 = a1[1];
    a1[1] = v5;
    v7 = a2[2];
    a2[1] = v6;
    v8 = a1[2];
    a1[2] = v7;
    a2[2] = v8;
    return 1;
  }
  if ( (unsigned __int8)detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap_helper<10>(
                          a1,
                          a2) )
    return 1;
  return detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap_helper<10>(a2, a1);
}
