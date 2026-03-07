void __fastcall CPTPEngine::FixupGestureContact(CPTPEngine *this, struct PTPEnginePointerNode *a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx

  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 912);
  v3 = *((_DWORD *)this + 913);
  v4 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 9) = v3;
  *((_QWORD *)a2 + 6) = *((_QWORD *)a2 + 4);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 5);
  v5 = v4 & 0xFFFFDFFF;
  v6 = v4 | 0x2000;
  if ( !a3 )
    v6 = v5;
  if ( (v6 & 0x40000) == 0 )
    v6 |= 0x14u;
  *((_DWORD *)a2 + 3) = v6 & 0xFDFFFFFF;
}
