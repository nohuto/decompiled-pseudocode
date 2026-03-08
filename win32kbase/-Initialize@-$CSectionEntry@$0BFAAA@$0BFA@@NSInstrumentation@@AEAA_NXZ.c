/*
 * XREFs of ?Initialize@?$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ @ 0x1C002996C
 * Callers:
 *     ?Create@?$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002990C (-Create@-$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C002A790 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C002A810 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C002ACA8 (-Create@-$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<86016,336>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x15000, a2);
  a1[2] = Section;
  if ( !Section || (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x15000, v4) < 0 )
    return 0;
  v5 = NSInstrumentation::CSectionBitmapAllocator<86016,336>::Create(a1[3]);
  a1[4] = v5;
  return v5 != 0;
}
