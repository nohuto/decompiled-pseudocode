/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1C0168E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( qword_1C0294480 && (int)qword_1C0294480() >= 0 && qword_1C0294488 )
    return qword_1C0294488(a1);
  return v1;
}
