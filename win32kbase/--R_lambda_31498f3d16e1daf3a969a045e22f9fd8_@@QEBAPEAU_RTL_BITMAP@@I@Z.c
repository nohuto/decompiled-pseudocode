/*
 * XREFs of ??R_lambda_31498f3d16e1daf3a969a045e22f9fd8_@@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x1C002A91C
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C002A858 (-Initialize@-$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C002AB20 (-Initialize@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C002ABE4 (-Initialize@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C002B1C8 (-Initialize@-$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C002B4E8 (-Initialize@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00CEB10 (-Initialize@-$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00CEBD4 (-Initialize@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00CEC98 (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00CED5C (-Initialize@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00CEE20 (-Initialize@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00CEEE4 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00CEFA8 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__fastcall _lambda_31498f3d16e1daf3a969a045e22f9fd8_::operator()(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  ULONG v3; // edi
  struct _RTL_BITMAP *result; // rax
  struct _RTL_BITMAP *v5; // rbx

  v2 = 8LL;
  if ( a2 >= 8 )
    v2 = a2;
  v3 = v2;
  result = (struct _RTL_BITMAP *)ExAllocatePool2(
                                   262LL,
                                   (((unsigned __int64)(v2 + 31) >> 3) & 0xFFFFFFFC) + 16,
                                   1869834581LL);
  v5 = result;
  if ( result )
  {
    RtlInitializeBitMap(result, &result[1].SizeOfBitMap, v3);
    RtlClearAllBits(v5);
    return v5;
  }
  return result;
}
