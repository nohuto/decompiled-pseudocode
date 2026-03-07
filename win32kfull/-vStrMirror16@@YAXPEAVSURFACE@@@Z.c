void __fastcall vStrMirror16(struct SURFACE *a1)
{
  int v1; // r8d
  __int16 *v2; // r11
  int v3; // ebx
  __int64 i; // rdi
  __int16 *v6; // rdx
  __int16 *v7; // r10
  __int64 v8; // r8
  __int16 v9; // cx

  v1 = *((_DWORD *)a1 + 14);
  v2 = (__int16 *)*((_QWORD *)a1 + 10);
  v3 = 0;
  for ( i = (unsigned int)(v1 / 2); v3 < *((_DWORD *)a1 + 15); v2 = (__int16 *)((char *)v2 + *((int *)a1 + 22)) )
  {
    v6 = v2;
    v7 = &v2[v1 - 1];
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
    ++v3;
  }
}
