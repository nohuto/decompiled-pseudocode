/*
 * XREFs of ?Initialize@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00291F4
 * Callers:
 *     ?Create@?$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002B420 (-Create@-$CSectionEntry@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C002A790 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C002A810 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C002B28C (-Create@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<40960,160>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xA000, a2);
  a1[2] = Section;
  if ( !Section || (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0xA000, v4) < 0 )
    return 0;
  v5 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::Create(a1[3]);
  a1[4] = v5;
  return v5 != 0;
}
