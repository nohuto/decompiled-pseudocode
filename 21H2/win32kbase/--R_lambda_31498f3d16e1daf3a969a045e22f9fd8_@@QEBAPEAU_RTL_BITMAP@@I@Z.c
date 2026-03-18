/*
 * XREFs of ??R_lambda_31498f3d16e1daf3a969a045e22f9fd8_@@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x1C008C1D4
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C008C110 (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C008C394 (-Initialize@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C008C590 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C008C84C (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C008CF7C (-Initialize@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C008D9B0 (-Initialize@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
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
  result = (struct _RTL_BITMAP *)ExAllocatePool2(262LL, (((unsigned __int64)(v2 + 31) >> 3) & 0xFFFFFFFC) + 16);
  v5 = result;
  if ( result )
  {
    RtlInitializeBitMap(result, &result[1].SizeOfBitMap, v3);
    RtlClearAllBits(v5);
    return v5;
  }
  return result;
}
