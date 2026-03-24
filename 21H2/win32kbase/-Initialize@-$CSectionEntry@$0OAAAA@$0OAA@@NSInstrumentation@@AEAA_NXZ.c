/*
 * XREFs of ?Initialize@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00C8EA0
 * Callers:
 *     ?Create@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00C8ABC (-Create@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C00A1224 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C00A126C (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00C8A40 (-Create@-$CSectionBitmapAllocator@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<917504,3584>::Initialize(PVOID *a1)
{
  NSInstrumentation *Section; // rax
  void *v3; // rax
  bool result; // al

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xE0000);
  a1[2] = Section;
  result = 0;
  if ( Section )
  {
    if ( NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0xE0000) >= 0 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<917504,3584>::Create((__int64)a1[3]);
      a1[4] = v3;
      if ( v3 )
        return 1;
    }
  }
  return result;
}
