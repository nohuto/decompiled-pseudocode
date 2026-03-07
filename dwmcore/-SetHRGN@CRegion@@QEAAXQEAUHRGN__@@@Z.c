void __fastcall CRegion::SetHRGN(CRegion *this, HRGN a2)
{
  _DWORD *v2; // rax
  void *v3; // rbx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  _DWORD *v8; // rdx
  _DWORD *v9; // r8
  void *lpMem; // [rsp+30h] [rbp-78h] BYREF
  int *v11; // [rsp+40h] [rbp-68h] BYREF
  int v12; // [rsp+48h] [rbp-60h] BYREF

  v2 = *(_DWORD **)this;
  v3 = 0LL;
  lpMem = 0LL;
  *v2 = 0;
  if ( a2 )
  {
    if ( a2 == (HRGN)1 )
    {
LABEL_11:
      v8 = *(_DWORD **)this;
      v9 = (_DWORD *)(*(_QWORD *)this + 28LL);
      *v8 = 2;
      *v9 = 0x80000000;
      v9[1] = 0x7FFFFFFF;
      v8[1] = 0x80000000;
      v8[4] = (_DWORD)v9 - ((_DWORD)v8 + 12);
      v8[2] = 0x7FFFFFFF;
      v8[3] = 0x80000000;
      v8[6] = (_DWORD)v9 - ((_DWORD)v8 + 20) + 8;
      v8[5] = 0x7FFFFFFF;
      return;
    }
    v11 = &v12;
    v12 = 0;
    v5 = HrgnToRgnData(a2, (struct _RGNDATA **)&lpMem, (unsigned int *)a2);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Cu, 0LL);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v11);
      v3 = lpMem;
    }
    else
    {
      v3 = lpMem;
      v7 = CRegion::TryAddRectangles(this, (const struct tagRECT *)lpMem + 2, *((_DWORD *)lpMem + 2));
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v11);
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v3 )
    operator delete(v3);
  if ( v7 < 0 )
    goto LABEL_11;
}
