/*
 * XREFs of ?Initialize@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ @ 0x1C02B87EC
 * Callers:
 *     ?Create@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C02B86AC (-Create@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C000D96C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C000DA64 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C02B85D4 (-Create@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<233472,912>::Initialize(__int64 a1)
{
  NSInstrumentation *Section; // rax
  __int64 v3; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x39000);
  *(_QWORD *)(a1 + 16) = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)(a1 + 24), (void **)0x39000) < 0 )
    return 0;
  v3 = NSInstrumentation::CSectionBitmapAllocator<233472,912>::Create(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = v3;
  return v3 != 0;
}
