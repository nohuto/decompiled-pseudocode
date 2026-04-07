/*
 * XREFs of ?GetPixelFormatInfo@CCompoundBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800C0E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompoundBitmapLock::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 24LL))(*(_QWORD *)(a1 + 16) + 72LL);
  return a2;
}
