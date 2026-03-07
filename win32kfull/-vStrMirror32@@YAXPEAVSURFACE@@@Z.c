void __fastcall vStrMirror32(struct SURFACE *a1)
{
  int v1; // r8d
  int *v3; // r11
  int v4; // ebx
  __int64 i; // rdi
  int *v6; // rdx
  int *v7; // r10
  __int64 v8; // r8
  int v9; // ecx

  v1 = *((_DWORD *)a1 + 14);
  v3 = (int *)*((_QWORD *)a1 + 10);
  v4 = 0;
  for ( i = (unsigned int)(v1 / 2); v4 < *((_DWORD *)a1 + 15); v3 = (int *)((char *)v3 + *((int *)a1 + 22)) )
  {
    v6 = v3;
    v7 = &v3[v1 - 1];
    if ( (int)i > 0 )
    {
      v8 = i;
      do
      {
        v9 = *v6;
        *v6++ = *v7;
        *v7-- = v9;
        --v8;
      }
      while ( v8 );
      v1 = *((_DWORD *)a1 + 14);
    }
    ++v4;
  }
}
