/*
 * XREFs of ?Initialize@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00DA0A4
 * Callers:
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D9CFC (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C008DA74 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C008DABC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00D9C7C (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<909312,3552>::Initialize(PVOID *a1)
{
  NSInstrumentation *Section; // rax
  void *v3; // rax
  bool result; // al

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0xDE000);
  a1[2] = Section;
  result = 0;
  if ( Section )
  {
    if ( NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0xDE000) >= 0 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Create((__int64)a1[3]);
      a1[4] = v3;
      if ( v3 )
        return 1;
    }
  }
  return result;
}
