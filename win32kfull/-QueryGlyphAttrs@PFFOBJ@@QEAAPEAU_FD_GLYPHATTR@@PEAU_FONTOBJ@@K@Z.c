struct _FD_GLYPHATTR *__fastcall PFFOBJ::QueryGlyphAttrs(PFFOBJ *this, struct _FONTOBJ *a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(struct _FONTOBJ *, _QWORD); // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3352LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v7, this);
  if ( v5 )
    v5 = (__int64 (__fastcall *)(struct _FONTOBJ *, _QWORD))v5(a2, a3);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v7);
  return (struct _FD_GLYPHATTR *)v5;
}
