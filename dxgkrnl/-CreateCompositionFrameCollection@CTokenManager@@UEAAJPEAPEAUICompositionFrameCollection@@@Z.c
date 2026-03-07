__int64 __fastcall CTokenManager::CreateCompositionFrameCollection(
        CTokenManager *this,
        struct ICompositionFrameCollection **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = -1073741801;
  v4 = operator new[](0x30uLL, 0x63634D54u, 256LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CCompositionFrameCollection::`vftable';
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    v3 = 0;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    *(_BYTE *)(v4 + 40) = 0;
    *a2 = (struct ICompositionFrameCollection *)v4;
  }
  return v3;
}
