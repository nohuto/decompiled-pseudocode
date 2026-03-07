__int64 __fastcall CPrimitiveGroup::GetDrawListGeneratorNoRef(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx

  v4 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1CCu, 0LL);
  else
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)*((_QWORD *)this + 16);
  return v6;
}
