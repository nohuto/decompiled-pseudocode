void __fastcall XEPALOBJ::vFill_rgbquads(XEPALOBJ *this, struct tagRGBQUAD *a2, unsigned int a3, int a4)
{
  __int64 v4; // r11
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  struct tagRGBQUAD v12; // [rsp+8h] [rbp+8h]

  v4 = *(_QWORD *)this;
  v6 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( (v6 & 8) != 0 )
  {
    *a2 = (struct tagRGBQUAD)16711680;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)255;
  }
  else if ( (v6 & 2) != 0 && a4 == 3 )
  {
    *a2 = **(struct tagRGBQUAD **)(v4 + 112);
    a2[1] = *(struct tagRGBQUAD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL);
    a2[2] = *(struct tagRGBQUAD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL);
  }
  else if ( (v6 & 4) != 0 )
  {
    *a2 = (struct tagRGBQUAD)255;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)16711680;
  }
  else
  {
    v7 = a3 + a4;
    if ( a3 + a4 >= *(_DWORD *)(v4 + 28) )
      v7 = *(_DWORD *)(v4 + 28);
    if ( a3 < v7 )
    {
      v8 = a3;
      v12.rgbReserved = 0;
      v9 = v7 - a3;
      v10 = 4 * v8;
      do
      {
        v11 = *(_DWORD *)(v10 + *(_QWORD *)(*(_QWORD *)this + 112LL));
        v12.rgbRed = v11;
        v10 += 4LL;
        v12.rgbBlue = BYTE2(v11);
        v12.rgbGreen = BYTE1(v11);
        *a2++ = v12;
        --v9;
      }
      while ( v9 );
    }
  }
}
