void __fastcall DCMEMOBJ::~DCMEMOBJ(int **this)
{
  int *v2; // rcx
  int v3; // edx
  HDC v4; // rbx
  int *v5; // [rsp+20h] [rbp-10h] BYREF
  int v6; // [rsp+28h] [rbp-8h]
  int v7; // [rsp+2Ch] [rbp-4h]
  int v8; // [rsp+40h] [rbp+10h] BYREF

  v2 = *this;
  if ( v2 )
  {
    v3 = 0;
    v5 = v2;
    v7 = 0;
    *this = 0LL;
    v6 = 0;
    if ( !*((_DWORD *)this + 4) )
    {
      v8 = 0;
      GrepDeleteDCOBJ((struct XDCOBJ *)&v5, 0x400000u, &v8);
      v3 = v6;
      v2 = v5;
    }
    if ( v2 )
    {
      if ( v3 && (v2[11] & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v5);
        v5[11] &= ~2u;
        v6 = 0;
        v2 = v5;
      }
      v8 = 0;
      v4 = *(HDC *)v2;
      HmgDecrementExclusiveReferenceCountEx(v2, v7, &v8);
      if ( v8 )
        GrepDeleteDC(v4, 0x2000000u);
    }
  }
}
