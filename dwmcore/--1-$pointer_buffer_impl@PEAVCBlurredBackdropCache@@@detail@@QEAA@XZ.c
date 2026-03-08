/*
 * XREFs of ??1?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ @ 0x1800A59F4
 * Callers:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1800A5A10 (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 */

void __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::~pointer_buffer_impl<CBlurredBackdropCache *>(
        _QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( (*(_BYTE *)a1 & 3) == 1 )
  {
    v1 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
    operator delete((void *)(v1 - 16));
  }
}
