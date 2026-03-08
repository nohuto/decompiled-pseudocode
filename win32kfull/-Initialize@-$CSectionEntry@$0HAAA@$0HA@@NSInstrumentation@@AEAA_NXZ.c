/*
 * XREFs of ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1C022BDFC
 * Callers:
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C022B96C (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C000D96C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C000DA64 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C02016F0 (-Create@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<28672,112>::Initialize(__int64 a1)
{
  NSInstrumentation *Section; // rax
  __int64 v3; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x7000);
  *(_QWORD *)(a1 + 16) = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)(a1 + 24), (void **)0x7000) < 0 )
    return 0;
  v3 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Create(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = v3;
  return v3 != 0;
}
