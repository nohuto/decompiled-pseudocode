/*
 * XREFs of ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0307D00
 * Callers:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00CF5C8 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00E7AEC (-Free@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0201914 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C022BB84 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::PlatformAbort(int a1, ULONG_PTR a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx

  result = 0LL;
  if ( !a1 )
    KeBugCheckEx(0x164u, 9uLL, a2, 0LL, 0LL);
  v3 = a1 - 1;
  if ( !v3 )
    KeBugCheckEx(0x164u, 0x23uLL, a2, 0LL, 0LL);
  v4 = v3 - 1;
  if ( !v4 )
    KeBugCheckEx(0x164u, 0x22uLL, a2, 0LL, 0LL);
  if ( v4 == 1 )
    KeBugCheckEx(0x164u, 0x21uLL, a2, 0LL, 0LL);
  return result;
}
