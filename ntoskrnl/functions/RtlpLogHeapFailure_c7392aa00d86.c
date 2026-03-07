void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C0C180 != a2 )
  {
    qword_140C0C198 = a5;
    qword_140C0C1A0 = a6;
    dword_140C0C178 = a1;
    qword_140C0C180 = a2;
    qword_140C0C188 = a3;
    qword_140C0C190 = a4;
    RtlpHpHeapHandleError();
  }
}
