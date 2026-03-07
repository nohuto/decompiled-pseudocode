char __fastcall QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(
        QueryFontTreeRequest *this,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int *v5; // rbx

  v5 = (unsigned int *)*((_QWORD *)this + 11);
  Win32ProbeForRead(v5, 0x20uLL, 8u);
  *a2 = *v5;
  *a3 = v5[3];
  return 1;
}
