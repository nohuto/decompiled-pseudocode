/*
 * XREFs of DrawCornerLine @ 0x1C0254C8C
 * Callers:
 *     CreateStandardMonoPattern @ 0x1C0254780 (CreateStandardMonoPattern.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall DrawCornerLine(char *a1, unsigned __int16 a2, unsigned __int16 a3, int a4, unsigned __int16 a5, int a6)
{
  int v7; // esi
  int v8; // ecx
  int v9; // r13d
  int v10; // r14d
  int v11; // eax
  int v12; // r15d
  int v13; // r12d
  int v14; // ebp
  int v15; // r11d
  int v16; // eax
  int v17; // ebx
  int v18; // r8d
  int v19; // edi
  int v20; // ecx
  int v21; // edx
  char *v22; // rax
  char v23; // cl
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+80h] [rbp+28h]

  v7 = 0;
  v8 = a5;
  if ( a5 )
  {
    if ( a2 == 1 || a3 == 1 || a5 >= a2 )
    {
      memset_0(a1, 255, a3 * (unsigned __int16)a4);
    }
    else
    {
      a4 = (unsigned __int16)a4;
      if ( !a6 )
      {
        a1 += (unsigned __int16)a4 * (a3 - 1);
        a4 = -(unsigned __int16)a4;
      }
      v9 = a2;
      v10 = a2;
      v11 = a3;
      if ( a2 < a3 )
      {
        v10 = a3;
        v11 = a2;
      }
      v12 = a2 < a3;
      v13 = a2 >= a3;
      v25 = 2 * v11;
      v14 = v11 - 2 * v10;
      v24 = 2 * v10;
      v15 = v8 - 1;
      if ( a2 > a3 )
      {
        v15 -= a2 / (unsigned int)a3;
        if ( v15 < 0 )
          v15 = 0;
      }
      v16 = 0;
      v17 = 0;
      v18 = v15;
      v19 = 0;
      if ( v10 )
      {
        v20 = v25;
        do
        {
          --v10;
          ++v18;
          v7 += v13;
          v19 += v12;
          v14 += v20;
          if ( v14 >= 0 )
          {
            v7 += v12;
            v19 += v13;
            v14 -= v24;
          }
          if ( v19 != v16 )
          {
            v21 = 128 >> (v17 & 7);
            v22 = &a1[(__int64)v17 >> 3];
LABEL_22:
            v23 = 0;
            while ( v18 )
            {
              --v18;
              v23 |= v21;
              if ( ++v17 < v9 )
              {
                LOBYTE(v21) = (unsigned __int8)v21 >> 1;
                if ( !(_BYTE)v21 )
                {
                  *v22 = v23;
                  LOBYTE(v21) = 0x80;
                  ++v22;
                  goto LABEL_22;
                }
              }
              else
              {
                *v22 = v23;
                LOBYTE(v21) = 0x80;
                v23 = *a1;
                v22 = a1;
                v17 = 0;
              }
            }
            if ( (_BYTE)v21 != 0x80 )
              *v22 = v23;
            v20 = v25;
            v17 = v7;
            v18 = v15;
            a1 += a4;
            v16 = v19;
          }
        }
        while ( v10 );
      }
    }
  }
}
