bool __fastcall NSInstrumentation::CSectionEntry<32768,128>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x8000, a2);
  a1[2] = Section;
  if ( !Section || (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x8000, v4) < 0 )
    return 0;
  v5 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Create(a1[3]);
  a1[4] = v5;
  return v5 != 0;
}
