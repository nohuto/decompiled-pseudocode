__int64 __fastcall CComposeTop::FullRender(CComposeTop *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx

  v3 = 0;
  if ( *((_QWORD *)a1 + 2) && (v8 = CComposeTop::NewContentRendered(a1), v3 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x10Cu, 0LL);
  }
  else if ( *((_QWORD *)a1 + 20) )
  {
    v10 = CComposeTop::RenderWorker(a1, a2, a3);
    v3 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x114u, 0LL);
  }
  return v3;
}
