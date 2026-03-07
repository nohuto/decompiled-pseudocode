void __fastcall vAlphaPerPixelAndConst(unsigned int *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r9d
  int v5; // r11d
  unsigned int *v6; // r10
  __int64 v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // esi
  int v11; // ebx
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx

  v4 = HIWORD(a4);
  v5 = a3;
  v6 = a1;
  if ( a3 )
  {
    v7 = a2 - (_QWORD)a1;
    do
    {
      v8 = *(unsigned int *)((char *)v6 + v7);
      --v5;
      v9 = HIBYTE(v8);
      if ( HIBYTE(v8) )
      {
        v10 = *v6 & 0xFF00FF;
        v11 = (*v6 >> 8) & 0xFF00FF;
        v12 = (v8 >> 8) & 0xFF00FF;
        v13 = v8 & 0xFF00FF;
        if ( (_BYTE)v9 == 0xFF )
        {
          v17 = (unsigned __int8)v4 * (v13 - v10) + 8388736 + 255 * v10;
          v18 = (unsigned __int8)v4 * (v12 - v11) + 8388736 + 255 * v11;
          v16 = (v18 + ((v18 >> 8) & 0xFF00FF)) ^ ((v18 + ((v18 >> 8) & 0xFFFF00FF)) ^ ((v17 + ((v17 >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
        }
        else
        {
          v14 = (v12 * (unsigned __int8)v4
               + 8388736
               + (((v12 * (unsigned int)(unsigned __int8)v4 + 8388736) >> 8) & 0xFF00FF)) ^ ((v12 * (unsigned __int8)v4
                                                                                            + 8388736
                                                                                            + (((v12
                                                                                               * (unsigned int)(unsigned __int8)v4
                                                                                               + 8388736) >> 8) & 0xFFFF00FF)) ^ ((v13 * (unsigned __int8)v4 + 8388736 + (((v13 * (unsigned int)(unsigned __int8)v4 + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
          v15 = 255 - HIBYTE(v14);
          v16 = v14
              + ((v15 * v11 + 8388736 + (((unsigned int)(v15 * v11 + 8388736) >> 8) & 0xFF00FF)) ^ ((v15 * v11 + 8388736 + (((unsigned int)(v15 * v11 + 8388736) >> 8) & 0xFFFF00FF)) ^ ((v15 * v10 + 8388736 + (((unsigned int)(v15 * v10 + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF);
        }
        *v6 = v16;
      }
      ++v6;
    }
    while ( v5 );
  }
}
