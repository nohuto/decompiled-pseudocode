/*
 * XREFs of ?Initialize@?$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@AEAA_NXZ @ 0x1C008E58C
 * Callers:
 *     ?Create@?$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C008E52C (-Create@-$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C008E5EC (-Create@-$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C008E664 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C008E6E4 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<221184,864>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x36000, a2);
  a1[2] = Section;
  if ( !Section || (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x36000, v4) < 0 )
    return 0;
  v5 = NSInstrumentation::CSectionBitmapAllocator<221184,864>::Create(a1[3]);
  a1[4] = v5;
  return v5 != 0;
}
