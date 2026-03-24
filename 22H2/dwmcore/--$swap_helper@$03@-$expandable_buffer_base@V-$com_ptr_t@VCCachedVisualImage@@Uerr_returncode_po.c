/*
 * XREFs of ??$swap_helper@$03@?$expandable_buffer_base@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03@detail@@QEAA_NAEAV01@@Z @ 0x1801F2114
 * Callers:
 *     ?PurgeUnusedResources@CVisualSurface@@AEAAXXZ @ 0x1801F29A4 (-PurgeUnusedResources@CVisualSurface@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall detail::expandable_buffer_base<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4>::swap_helper<4>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r9
  __int64 *v3; // r8
  __int64 *v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  char result; // al

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 + 3 )
    return 0;
  v3 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 != a2 + 24 )
    return 0;
  v4 = *(__int64 **)(a2 + 8);
  if ( (unsigned __int64)(v4 - v3) > 4 )
    return 0;
  v5 = a1 + 3;
  if ( v3 != v4 )
  {
    do
    {
      v6 = *v3;
      *v3++ = 0LL;
      *v5++ = v6;
    }
    while ( v3 != v4 );
    v2 = (_QWORD *)*a1;
  }
  *(_QWORD *)a2 = v2;
  *(_QWORD *)(a2 + 8) = a1[1];
  *(_QWORD *)(a2 + 16) = a1[2];
  a1[2] = a1 + 7;
  result = 1;
  *a1 = a1 + 3;
  a1[1] = v5;
  return result;
}
