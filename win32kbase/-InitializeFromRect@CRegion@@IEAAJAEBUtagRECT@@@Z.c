__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, struct _RECTL *a2)
{
  unsigned int v4; // edi
  _DWORD *Pool2; // rbx
  _DWORD *v6; // rax
  PVOID v8; // [rsp+20h] [rbp-38h] BYREF
  struct _RECTL v9; // [rsp+28h] [rbp-30h] BYREF

  v4 = -1073741801;
  Pool2 = (_DWORD *)ExAllocatePool2(258LL, 48LL, 1852273223LL);
  if ( Pool2 )
  {
    v6 = (_DWORD *)ExAllocatePool2(258LL, 112LL, 1852011335LL);
    v8 = Pool2;
    *((_QWORD *)Pool2 + 1) = v6;
    if ( v6 )
    {
      Pool2[6] = 16;
      Pool2[7] = 1;
      *((_OWORD *)Pool2 + 2) = 0LL;
      *v6 = 0;
      v6[3] = 0;
      v6[1] = 0x80000000;
      v6[2] = 0x7FFFFFFF;
      *((_QWORD *)Pool2 + 2) = v6 + 4;
      *Pool2 = 112;
      v9 = *a2;
      RGNCOREOBJ::vSet((RGNCOREOBJ *)&v8, &v9);
      v4 = 0;
      *((_QWORD *)this + 2) = Pool2;
      *((_DWORD *)this + 3) = 2;
    }
    else
    {
      RGNCOREOBJ::vDeleteRGNCOREOBJ(&v8);
    }
  }
  return v4;
}
