/*
 * XREFs of ?Initialize@?$CSectionEntry@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NXZ @ 0x1C002C8C0
 * Callers:
 *     ?Create@?$CSectionEntry@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C5280 (-Create@-$CSectionEntry@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C002A790 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C002A810 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C002C920 (-Create@-$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<913408,3568>::Initialize(__int64 a1)
{
  NSInstrumentation *Section; // rax
  __int64 v3; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xDF000);
  *(_QWORD *)(a1 + 16) = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)(a1 + 24), (void **)0xDF000) < 0 )
    return 0;
  v3 = NSInstrumentation::CSectionBitmapAllocator<913408,3568>::Create(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = v3;
  return v3 != 0;
}
