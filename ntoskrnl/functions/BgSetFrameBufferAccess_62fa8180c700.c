void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140C0E510 = a1;
  *(_QWORD *)&xmmword_140C0E520 = a2;
  *((_QWORD *)&xmmword_140C0E520 + 1) = a3;
}
