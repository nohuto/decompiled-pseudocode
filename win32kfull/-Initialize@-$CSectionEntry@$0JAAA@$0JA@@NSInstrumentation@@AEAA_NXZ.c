/*
 * XREFs of ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1C000D90C
 * Callers:
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C000D8AC (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C000D96C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C000D9EC (-Create@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C000DA64 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<36864,144>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x9000, a2);
  a1[2] = Section;
  if ( !Section || (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x9000, v4) < 0 )
    return 0;
  v5 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Create(a1[3]);
  a1[4] = v5;
  return v5 != 0;
}
